#pragma once
class ListaCarta
{
	struct Node {
		int Numero;
		bool Color;
		Node* Next;
	};
private:
	Node* header = nullptr;
public:
	void Add(int num, bool col);
	void Clear();
	int Count();
	Node* GetItem(int index);
	void SetItem(int index, Node* carta);
	void RemoveAt(int index);
};

