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

PilaCarta::Node* PilaCarta::Pop() {
	Node* iterador = new Node;
	if (header == nullptr) {
		return nullptr;
	}
	else {
		iterador = header;
		header = header->Next;
		return iterador;
	}
}