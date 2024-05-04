#include<iostream>
using namespace std;
template<class T>
class Node{
	T data;
	Node* link;
	public:
		Node(T);
		T get_data();
		void set_link(Node*);
		void set_data(T);
		Node* get_link();
};
template<class T>
class CircularLinked{
	Node<T>* head;
	public:
		CircularLinked();
		void display();
		void insert_at_beg(T);
		void insert_at_end(T);
		void insert_at_pos(int,T);
		void delete_at_beg();
		void delete_at_end();
		void delete_at_pos(int);
};
