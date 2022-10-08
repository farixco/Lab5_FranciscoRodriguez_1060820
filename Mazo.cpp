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

		/// función para barajar el mazo empieza con una lista de 52 cartas (el deck completo)
		/// que procederá a ser cambiada de forma aleatoria y de ahí voy a añadir secuencial en los grupos en sí
	}

	PilaCarta* mano = new PilaCarta;
	for (int i = 1; i < 14; i++) {
		for (int j = 0; j < 4; j++) {
			if (j % 2 == 0) {
				mano->Push(i, true);
			}
			else {
				mano->Push(i, false);
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