#include "Mazo.h"
#include <cstdlib>
#include <random>
#include <functional>
bool Mazo::Ganancia(int dificultad) {
	bool gano = false;
	for (int i = 0; i < 7; i++) {
		if (enJuego[i].Validez() == true && enJuego[i].Count() == dificultad) {
			gano = true;
		}
	}
	return gano;
}

void Mazo::Barajar() {
	srand(time(0));
	for (int i = 0; i < 7; i++) {
		while (grupos[i].Count() != 0) {
			grupos[i].Pop();
		}
		while (enJuego[i].Count() != 0) {
			enJuego[i].Pop();
		}
	}
		/// función para barajar el mazo empieza con una lista de 52 cartas (el deck completo)
		/// que procederá a ser cambiada de forma aleatoria y de ahí voy a añadir secuencial en los grupos en sí
		
	ListaCarta* mano = new ListaCarta;
	for (int i = 1; i < 14; i++) {
		for (int j = 0; j < 4; j++) {
			if (j % 2 == 0) {
				mano->Add(i, true);
			}
			else {
				mano->Add(i, false);
			}
		}
	}
	/// inspirado por https://coderscat.com/random-number-and-card-shuffling-algorithm/
	int rnd;
	/// <summary>
	/// CARTA 53 (indice base-0 52) ES ALMACÉN TEMPORAL
	/// </summary>
	mano->Add(-1, false);
	for (int i = 0; i < 52; i++) {
		rnd = (rand() % 52);
		mano->SetItem(52, mano->GetItem(rnd));
		mano->SetItem(rnd, mano->GetItem(i));
		mano->SetItem(i, mano->GetItem(52));
	}
	for (int i = 0; i < 52; i++) {
		mazo->Push(mano->GetItem(i)->Numero,mano->GetItem(i)->Color);
	}

	for (int i = 0; i < 7; i++) {
		for (int j = 6 - i; j > 0; j--) {
			grupos[i].Push(mazo->Pop());
		}
		enJuego[i].Push(mazo->Pop());
	}
}

bool Mazo::Mover(int index, int origen, int destino) {
	if (index > enJuego[origen].Count() || index < 0) {
		throw gcnew System::IndexOutOfRangeException;
	}
	PilaCarta* temporal = new PilaCarta;
	for (int i = 0; i < index; i++) {
		temporal->Push(enJuego[origen].Pop());
	}
	for (int i = 0; i < index; i++) {
		enJuego[destino].Push(temporal->Pop());
	}
	bool movida;
	if (enJuego[destino].Validez() == true) {
		movida = true;
		if (enJuego[origen].Count() == 0 && grupos[origen].Count() != 0) {
			enJuego[origen].Push(grupos[origen].Pop());
		}
	}
	else {
		for (int i = 0; i < index; i++) {
			temporal->Push(enJuego[destino].Pop());
		}
		for (int i = 0; i < index; i++) {
			enJuego[origen].Push(temporal->Pop());
		}
		movida = false;
	}
	return movida;
}