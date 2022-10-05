#pragma once
#include "PilaCarta.h"
class Mazo
{
	PilaCarta* grupos = new PilaCarta[7];
	bool Ganancia(int dificultad);
	void Barajar();
	bool Mover(int index, int origen, int destino);
};

