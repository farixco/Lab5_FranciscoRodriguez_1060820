#pragma once
#include "PilaCarta.h"
#include "ListaCarta.h"
class Mazo
{
public:
	PilaCarta* mazo = new PilaCarta;
	PilaCarta* grupos = new PilaCarta[7];
	PilaCarta* enJuego = new PilaCarta[7];
	bool Ganancia(int dificultad);
	void Barajar();
	bool Mover(int index, int origen, int destino);
};

