#include<iostream>
#include<ostream>
using namespace std;
template<class T>
class Node{
	T data;
	Node* link;
	public:
		Node(T);
		T get_data();
		void set_link(Node* link);
		Node* get_link();
		void set_data(T);
};
template<class T>
class LinkedQueue{
	Node<T>* head;
	public:
		LinkedQueue();
		bool isEmpty();
		bool isFull();
		void display();
		void EnQueue(T);
		void DeQueue();
};
