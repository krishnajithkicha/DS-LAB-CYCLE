#include<iostream>
using namespace std;
template<class T>
class Node{
	T data;
	Node* link;
	public:
		Node(T);
		T get_data();
		void set_data(T);
		Node* get_link();
		void set_link(Node* link);
};
template<class T>
class LinkedDeque{
	public:
		Node<T>* head;
		bool isFull();
		bool isEmpty();
		void push_front(T);
		void push_back(T);
		void pop_front();
		void pop_back();
		void display();
		
};
