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

void PilaCarta::Push(Node* carta) {
	Node* nuevo = new Node;
	nuevo->Numero = carta->Numero;
	nuevo->Color = carta->Color;
	if (header == nullptr) {
		nuevo->Next = nullptr;
		header = nuevo;
	}
	else {
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

bool PilaCarta::Validez() {
	bool valido = true;
	Node* iterador = new Node;
	iterador = header;
	for (int i = 0; i < this->Count() - 1; i++) {
		if (iterador->Color == iterador->Next->Color || (iterador->Numero + 1) != iterador->Next->Numero) {
			valido = false;
			i = this->Count();
		}
		iterador = iterador->Next;
	}
	return valido;
}

PilaCarta::Node* PilaCarta::GetItem(int index) {
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