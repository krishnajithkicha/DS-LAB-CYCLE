#include<iostream>
using namespace std;
template<class T>
class Node{
	T data;
	Node* llink;
	Node* rlink;
	public:
		Node(T);
		void set_llink(Node*);
		void set_rlink(Node*);
		void set_data(T);
		T get_data();
		Node* get_llink();
		Node* get_rlink();
};
template<class T>
class CircularDoubly{
	Node<T>* head;
	Node<T>* tail;
	public:
		CircularDoubly();
		void insert_at_beg(T);
		void insert_at_end(T);
		void insert_at_pos(int,T);
		void delete_from_beg();
		void delete_from_end();
		void delete_from_pos(int);
		void display();
};
