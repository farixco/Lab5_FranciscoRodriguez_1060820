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

bool List::Contains(int item) {
	Node* iterador = new Node;
	iterador = header;
	bool encontrado = false;
	for (int i = 0; i < this->Count(); i++)
	{
		if (iterador->data == item) {
			encontrado = true;
		}
		iterador = iterador->next;
	}
	return encontrado;
}

int List::IndexOf(int item) {
	int indice = -1;
	Node* iterador = new Node;
	iterador = header;
	for (int i = 0; i < this->Count(); i++) {
		if (iterador->data == item) {
			indice = i;
			i = this->Count() + 1;
		}
		iterador = iterador->next;
	}
	return indice;
}

void List::Insert(int index, int item) {
	if (index < 0 || index > this->Count()) {
		throw gcnew System::IndexOutOfRangeException();
	}
	Node* iterador = new Node;
	iterador = header;
	Node* nuevo = new Node;
	nuevo->data = item;
	for (int i = 0; i < index - 1; i++) {
		iterador = iterador->next;
	}
	nuevo->next = iterador->next;
	iterador->next = nuevo;
}