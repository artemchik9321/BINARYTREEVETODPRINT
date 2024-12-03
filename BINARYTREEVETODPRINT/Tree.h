#pragma once
class Tree
{
	class Node 
	{
	public:
		int value;
		Node* right;
		Node* left;
		Node(int value) :Node(value, nullptr, nullptr) {}
		Node(int value, Node* right, Node* left) :value(value), right(right), left(left) {}
	};
private:
	Node* _root;
	void insert(int value, Node*& node);
public:
	Tree();
	void insert(int value);
	void Print();
};
