#pragma once
#include "PilaCarta.h"
class Mazo
{
public:
	PilaCarta* grupos = new PilaCarta[7];
	bool Ganancia(int dificultad);
	void Barajar();
	bool Mover(int index, int origen, int destino);
};

