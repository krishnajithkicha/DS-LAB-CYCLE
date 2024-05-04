#include"LinkedDeque.h"
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
Node<T>* Node<T>::get_link(){
	return link;
}
template<class T>
void Node<T>::set_link(Node* link){
	this->link=link;
}
template<class T>
void LinkedDeque<T>::push_front(T data){
	if(head==NULL){
		Node<T>* node=new Node<T>(data);
		head=node;
	}
	else{
		Node<T>* node=new Node<T>(data);
		node->set_link(head);
		head=node;
	}
	cout<<"Element successfully inserted at front \n";
}
template<class T>
void LinkedDeque<T>::push_back(T data){
	if(head==NULL){
		Node<T>* node=new Node<T>(data);
		head=node;
	}
	else{
		Node<T>* p=head;
		while(p->get_link()!=NULL){
			p=p->get_link();
		}
		Node<T>* node=new Node<T>(data);
		node->set_link(NULL);
		p->set_link(node);
	}
	cout<<"Element successfully inserted at back \n";
}
template<class T>
void LinkedDeque<T>::pop_front(){
	if(head==NULL){
		cout<<"Deque is Empty \n";
	}
	else{
		Node<T>* p=head;
		head=head->get_link();
		delete p;
	}
}
template<class T>
void LinkedDeque<T>::pop_back(){
	if(head==NULL){
		cout<<"Deque is Empty \n";
	}
	else{
		Node<T>* p=head;
		Node<T>* q=p->get_link();
		while(q->get_link()!=NULL){
			p=q;
			q=q->get_link();
		}
		p->set_link(NULL);
		delete q;
	}
}
template<class T>
void LinkedDeque<T>::display(){
	Node<T>* p=head;
	while(p->get_link()!=NULL){
		cout<<p->get_data()<<" ";
		p=p->get_link();
	}
	cout<<endl;
}
