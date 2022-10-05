#pragma once
#include "PilaCarta.h"
class Mazo
{
	PilaCarta* grupos = new PilaCarta[7];
	static bool Ganancia();
	static void Barajar();
	static bool Mover(int index, int origen, int destino);
};

