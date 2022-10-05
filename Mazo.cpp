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
	PilaCarta* chaosTemp = new PilaCarta;
	for (int i = 0; i < 7; i++) {
		for (int j = 7; j > 0; j--) {
			if (mano->Count() != 0) {
				grupos[i].Push(mano->Pop());
			}
			else {
				grupos[i].Push(chaosTemp->Pop());
			}
			if (grupos[i].Validez() != true && mano->Count() != 0) {
				chaosTemp->Push(grupos[i].Pop());
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