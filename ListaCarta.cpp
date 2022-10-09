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
		Node* iterador = header;
		while (iterador->Next != nullptr) {
			iterador = iterador->Next;
		}
		nuevo->Numero = num;
		nuevo->Color = col;
		nuevo->Next = nullptr;
		iterador->Next = nuevo;
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

ListaCarta::Node* ListaCarta::GetItem(int index) {
	if (index < 0 || index > this->Count()) {
		throw gcnew System::IndexOutOfRangeException();
	}
	Node* iterador = new Node;
	iterador = header;
	for (int i = 0; i < index; i++) {
		iterador = iterador->Next;
	}
	return iterador;
}

void ListaCarta::RemoveAt(int index) {
	if (index < 0 || index > this->Count()) {
		throw gcnew System::IndexOutOfRangeException();
	}
	Node* iterador = new Node;
	iterador = header;
	for (int i = 0; i < index - 1; i++) {
		iterador = iterador->Next;
	}
	iterador->Next = iterador->Next->Next;
}

void ListaCarta::SetItem(int index, ListaCarta::Node* carta) {
	if (index < 0 || index > this->Count()) {
		throw gcnew System::IndexOutOfRangeException();
	}
	Node* iterador = new Node;
	iterador = header;
	for (int i = 0; i < index; i++) {
		iterador = iterador->Next;
	}
	iterador->Numero = carta->Numero;
	iterador->Color = carta->Color;
}