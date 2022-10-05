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

