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
	/*
	for (int i = 0; i < 7; i++) {
		for (int j = 7 - i; j > 0; j--) {
			if (mano->Count() != 0) {
				grupos[i].Push(mano->Pop());
			}
			else {
				grupos[i].Push(chaosTemp->Pop());
			}
			if (grupos[i].Validez() != true) {
				mano->Push(grupos[i].Pop());
				/// <summary>
				/// tomado de https://stackoverflow.com/questions/43329352/generating-random-boolean
				/// </summary>
				auto gen = std::bind(std::uniform_int_distribution<>(0, 1), std::default_random_engine());
				bool col = gen();
				/// <summary>
				/// inspirado por https://stackoverflow.com/questions/13445688/how-to-generate-a-random-number-in-c
				/// </summary>
				chaosTemp->Push(rand() % 13 + 1, col);
			}
		}
	}
	*/
	for (int i = 0; i < 7; i++) {
		while (grupos[i].Count() != 7 - i) {
			bool col = false;
			if (rand() % 2 == 0) {
				col = true;
			}
			/// <summary>
			/// inspirado por https://stackoverflow.com/questions/13445688/how-to-generate-a-random-number-in-c
			/// </summary>
			chaosTemp->Push(rand() % 13 + 1, col);
			grupos[i].Push(chaosTemp->Pop());
			if (!grupos[i].Validez()) {
				grupos[i].Pop();
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