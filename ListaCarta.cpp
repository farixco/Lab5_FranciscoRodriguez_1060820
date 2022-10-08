#include "ListaCarta.h"
void ListaCarta::Add(int num, bool col) {
	Node* nuevo = new Node;
	if (header == nullptr) {
		nuevo->Numero = num;
		nuevo->Color = col;
		nuevo->Next = nullptr;
		header = nuevo;
	}
	else {
		nuevo = header;
		while (nuevo->Next != nullptr) {
			nuevo = nuevo->Next;
		}
		nuevo->Next = nullptr;
		nuevo->Numero = num;
		nuevo->Color = col;
	}
}

void ListaCarta::Clear() {
	header = nullptr;
}

int ListaCarta::Count() {
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