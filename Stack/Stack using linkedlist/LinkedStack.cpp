#include"LinkedStack.h"
template<class T>
Node<T>::Node(T data){
	this->data=data;
	this->link=NULL;
}
template<class T>
T Node<T>::get_data(){
	return data;
}
template<class T>
void Node<T>::set_link(Node* link){
	this->link=link;
}
template<class T>
void Node<T>::set_data(T data){
	this->data=data;
}
template<class T>
Node<T>* Node<T>::get_link(){
	return link;
}
template<class T>
LinkedStack<T>::LinkedStack(){
	head=NULL;
}
template<class T>
void LinkedStack<T>::push(T key){
	if(head==NULL){
		Node<T>* node=new Node<T>(key);
		head=node;
	}
	else{
		Node<T>* node=new Node<T>(key);
		node->set_data(key);
	    node->set_link(head);
	    head=node;
	}
}
template<class T>
void LinkedStack<T>::pop(){
	Node<T>*p=head;
	if(head==NULL){
		cout<<"Stack Underflow"<<endl;
	}
	else{
		T data=peek();
		cout<<"Element "<<data<<" popped out of stack "<<endl;
		head=head->get_link();
		delete(p);
	}
}
template<class T>
T LinkedStack<T>::peek(){
	head->get_data();
}
template<class T>
void LinkedStack<T>::display(){
	Node<T>* t=head;
	while(t!=NULL){
		cout<<t->get_data()<<" ";
		t=t->get_link();
	}
	cout<<endl;
}
