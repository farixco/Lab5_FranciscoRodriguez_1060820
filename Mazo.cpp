#include "Mazo.h"
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
	for (int i = 0; i < 7; i++) {
		while (grupos[i].Count() != 0) {
			grupos[i].Pop();
		}
	}

	PilaCarta* mano = new PilaCarta;
	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 4; j++) {
			if (j % 2 == 0) {
				mano->Push(i, true);
			}
			else {
				mano->Push(i, false);
			}
		}
	}
	PilaCarta* chaosTemp = new PilaCarta;
	for (int i = 0; i < 7; i++) {
		for (int j = 7; j > 0; j--) {
			grupos[i].Push(mano->Pop());
			if (grupos[i].Validez() != true) {
				chaosTemp->Push(grupos[i].Pop());
				j++;
			}
		}
	}
}