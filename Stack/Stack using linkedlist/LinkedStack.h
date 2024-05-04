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
class LinkedStack{
	Node<T>* head;
	public:
		LinkedStack();
		void display();
		void push(T);
		void pop();
		T peek();
};
