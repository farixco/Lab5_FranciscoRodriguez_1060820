#pragma once
class PilaCarta
{
	struct Node {
		int Numero;
		/// <summary>
		/// Color booleano: true es negro y false es rojo
		/// </summary>
		bool Color;
		Node* Next;
	};
private:
	Node* header = nullptr;
public:
	void Push(int num, bool col);
	void Push(Node* carta);
	Node* Pop();
	int IndexOf(int num, bool col);
	int Count();
	/// <summary>
	/// Verifica si la pila de cartas es válida según las reglas del juego 
	/// </summary>
	/// <returns></returns>
	bool Validez();
	Node* GetItem(int index);
};

