#include "PilaCarta.h"
void PilaCarta::Push(int num, bool col) {
	Node* nuevo = new Node;
	if (header == nullptr) {
		nuevo->Numero = num;
		nuevo->Color = col;
		nuevo->Next = nullptr;
		header = nuevo;
	}
	else {
		nuevo->Numero = num;
		nuevo->Color = col;
		nuevo->Next = header;
		header = nuevo;
	}
}