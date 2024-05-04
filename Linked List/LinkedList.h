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
class LinkedList{
	Node<T>* head;
	public:
		LinkedList();
		void createLL();
		void display();
		void insert_at_beg(T);
		void insert_at_end(T);
		void insert_at_pos(T,int);
		void delete_from_front();
		void delete_at_end();
		void delete_at_pos(int);
		template<class U>
		friend ostream & operator <<(ostream &,LinkedList<U>);
};
