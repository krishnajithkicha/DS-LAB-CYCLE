#include<iostream>
#include<ostream>
using namespace std;
template<class T>
class Node{
	T coeff;
	T exp;
	Node* link;
	public:
		Node(T,T);
		T get_coeff();
		T get_exp();
		void set_link(Node* link);
		Node* get_link();
		void set_coeff(T);
		void set_exp(T);
};
template<class T>
class PolynomialAdd{
	Node<T>* head;
	public:
		PolynomialAdd();
		void createLL();
		void display();
		PolynomialAdd<T> addpoly(PolynomialAdd<T>,PolynomialAdd<T>);
		PolynomialAdd<T> multipoly(PolynomialAdd<T>,PolynomialAdd<T>);
};
 
