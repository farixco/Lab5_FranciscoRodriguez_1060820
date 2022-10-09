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
	/// <summary>
	///  versión de Mover que se utiliza cuando se mueve desde el mazo
	/// </summary>
	/// <param name="destino"></param>
	/// <returns></returns>
	bool Mover(int destino);
};

