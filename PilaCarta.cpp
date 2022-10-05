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

int PilaCarta::IndexOf(int num, bool col) {
	int indice = -1;
	Node* iterador = new Node;
	iterador = header;
	for (int i = 0; i < this->Count(); i++) {
		if (iterador->Numero == num && iterador->Color == col) {
			indice = i;
			i = this->Count() + 1;
		}
		iterador = iterador->Next;
	}
	return indice;
}

int PilaCarta::Count() {
	if (header == nullptr) {
		return 0;
	}
	else {
		Node* iterador = new Node;
		iterador = header;
		int contador = 1;
		while (iterador->Next != nullptr) {
			iterador = iterador->Next;
			contador++;
		}
		return contador;
	}
}