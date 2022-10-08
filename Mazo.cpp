#include "Mazo.h"
#include <cstdlib>
#include <random>
#include <functional>
bool Mazo::Ganancia(int dificultad) {
	bool gano = false;
	for (int i = 0; i < 7; i++) {
		if (grupos[i].Validez() == true && grupos[i].Count() == dificultad) {
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
		rnd = rand() % 51 + 1;
		mano->SetItem(52, mano->GetItem(rnd));
		mano->SetItem(rnd, mano->GetItem(i));
		mano->SetItem(i, mano->GetItem(52));
	}

	for (int i = 0; i < 7; i++) {
		for (int j = 7 - i; j > 0; j--) {
			rnd = rand() % 51 + 1;
			grupos[i].Push(mano->GetItem(rnd)->Numero,mano->GetItem(rnd)->Color);
			if (!grupos[i].Validez()) {
				grupos[i].Pop();
				j++;
			}
		}
	}
}

bool Mazo::Mover(int index, int origen, int destino) {
	if (index > grupos[origen].Count() || index < 0) {
		throw gcnew System::IndexOutOfRangeException;
	}
	PilaCarta* temporal = new PilaCarta;
	for (int i = 0; i < index; i++) {
		temporal->Push(grupos[origen].Pop());
	}
	for (int i = 0; i < index; i++) {
		grupos[destino].Push(temporal->Pop());
	}
	bool movida;
	if (grupos[destino].Validez() == true) {
		movida = true;
	}
	else {
		for (int i = 0; i < index; i++) {
			temporal->Push(grupos[destino].Pop());
		}
		for (int i = 0; i < index; i++) {
			grupos[origen].Push(temporal->Pop());
		}
		movida = false;
	}
	return movida;
}