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