#include "List.h"
void List::Add(int item) {
	Node* nuevo = new Node;
	if (header == nullptr) {
		nuevo->data = item;
		nuevo->next = nullptr;
		header = nuevo;
	}
	else {
		nuevo = header;
		while (nuevo->next != nullptr) {
			nuevo = nuevo->next;
		}
		nuevo->next = nullptr;
		nuevo->data = item;
	}
}

void List::Clear() {
	header = nullptr;
}

int List::Count() {
	if (header == nullptr) {
		return 0;
	}
	else {
		Node* iterador = new Node;
		iterador = header;
		int contador = 1;
		while (iterador->next != nullptr) {
			iterador = iterador->next;
			contador++;
		}
		return contador;
	}
}