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
	Node* Pop();
	int IndexOf(int num, bool col);
};

