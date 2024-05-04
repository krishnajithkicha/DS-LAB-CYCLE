#include"Queue.h"
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
LinkedQueue<T>::LinkedQueue(){
	head=NULL;
}
template<class T>
bool LinkedQueue<T>::isEmpty(){
	if(head==NULL){
		//cout<<"Queue is empty \n";
		return true;
	}
	else{
		return false;
	}
}
/*template<class T>
bool LinkedQueue<T>::isFull(){
	if(){
		return true;
	}
	return false;
}*/
template<class T>
void LinkedQueue<T>::EnQueue(T key){
	if(head==NULL){
		Node<T>* node=new Node<T>(key);
		head=node;
	}
	else{
		Node<T>* node=new Node<T>(key);
		node->set_data(key);
		Node<T> *p=head;
		while(p->get_link()!=NULL){
			p=p->get_link();
	}
		p->set_link(node);
		node->set_link(NULL);
	}
}
template<class T>
void LinkedQueue<T>::DeQueue(){
	Node<T>* p=head;
	head=head->get_link();
	delete(p);
}
template<class T>
void LinkedQueue<T>::display(){
	Node<T>* t=head;
	while(t!=NULL){
		cout<<t->get_data()<<" ";
		t=t->get_link();
	}
	cout<<endl;
}

