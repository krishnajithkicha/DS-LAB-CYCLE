#include<iostream>
#include<ostream>
using namespace std;
template<class T>
class Node{
	T data;
	Node* llink;
	Node* rlink;
	public:
		Node(T);
		T get_data();
		void set_llink(Node* llink);
		void set_rlink(Node* rlink);
		Node* get_llink();
		Node* get_rlink();
		void set_data(T);
};
template<class T>
class Doublylinked{
	Node<T>* head;
	Node<T>* tail;
	public:
		Doublylinked();
		void display();
		void insert_at_front(T);
		void insert_at_end(T);
		void insert_at_pos(int,T);
		void delete_at_front();
		void delete_at_end();
		void delete_at_pos(int);
};
