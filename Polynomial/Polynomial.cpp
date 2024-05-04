#include"Polynomial.h"
template<class T>
Node<T>::Node(T coeff,T exp){
	this->coeff=coeff;
	this->exp=exp;
	this->link=NULL;
}
template<class T>
T Node<T>::get_coeff(){
	return coeff;
}
template<class T>
T Node<T>::get_exp(){
	return exp;
}
template<class T>
void Node<T>::set_link(Node* link){
	this->link=link;
}
template<class T>
void Node<T>::set_coeff(T coeff){
	this->coeff=coeff;
}
template<class T>
void Node<T>::set_exp(T exp){
	this->exp=exp;
}
template<class T>
Node<T>* Node<T>::get_link(){
	return link;
}
template<class T>
PolynomialAdd<T>::PolynomialAdd(){
	head=NULL;
}
template<class T>
void PolynomialAdd<T>::createLL(){
	string option;
	T c,e;
	Node<T>* current;
	current=head;
	do{
		cout<<"Enter the value of coeffcient:";
		cin>>c;
		cout<<"Enter the value of exponent:";
		cin>>e;
		Node<T>* node=new Node<T>(c,e);
		if(head==NULL){
			head=node;
			current=head;
		}
		else{
			current->set_link(node);
			current=node;
		}
		cout<<"Do you want to enter values(y/n)?:";
		cin>>option;
	}
	while(option=="y");
}
template<class T>
void PolynomialAdd<T>::display(){
	Node<T>* t=head;
	while(t!=NULL){
		cout<<t->get_coeff()<<"x^";
		cout<<t->get_exp()<<" ";
		t=t->get_link();
	}
	cout<<endl;
}
template<class T>
PolynomialAdd<T> PolynomialAdd<T>::addpoly(PolynomialAdd<T> p,PolynomialAdd<T> q){
	Node<T>* P=p.head;
	Node<T>* Q=q.head;
	PolynomialAdd<T> pa;
	Node<T>* current=NULL;
	while(P!=NULL && Q!=NULL){
		if(P->get_exp()>Q->get_exp()){
			Node<T>* node=new Node<T>(P->get_coeff(),P->get_exp());
			if(pa.head==NULL){
				pa.head=node;
				current=node;
			}
			else{
				current->set_link(node);
			    current=node;
			}
			P=P->get_link();
		}
		else if(P->get_exp()<Q->get_exp()){
			Node<T>* node=new Node<T>(Q->get_coeff(),Q->get_exp());
			if(pa.head==NULL){
				pa.head=node;
				current=node;
			}
			else{
				current->set_link(node);
			    current=node;
			}
			Q=Q->get_link();
		}
		else{
			Node<T>* node=new Node<T>(P->get_coeff()+Q->get_coeff(),P->get_exp());
			if(pa.head==NULL){
				pa.head=node;
				current=node;
			}
			else{
				current->set_link(node);
				current=node;
			}
			P=P->get_link();
			Q=Q->get_link();
		}
	}
	return pa;
}
template<class T>
PolynomialAdd<T> PolynomialAdd<T>::multipoly(PolynomialAdd<T> poly1,PolynomialAdd<T> poly2){
	Node<T>* p=poly1.head;
	PolynomialAdd<T> pm;
	Node<T>* current=NULL;
	while(p!=NULL){
		Node<T>* q=poly2.head;
		while(q!=NULL){
			T coeff=p->get_coeff()*q->get_coeff();
			int exp=p->get_exp()+q->get_exp();
			Node<T>* node=new Node<T>(coeff,exp);
			if(pm.head==NULL){
				pm.head=node;
				current=node;
			}
			else{
				current->set_link(node);
				current=node;
			}
		q=q->get_link();
		}
		p=p->get_link();
	}
	return pm;
}
