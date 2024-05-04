#include"Doublylinked.h"
template<class T>
Node<T>::Node(T data){
	this->data=data;
	this->llink=NULL;
	this->rlink=NULL;
}
template<class T>
T Node<T>::get_data(){
	return data;
}
template<class T>
void Node<T>::set_llink(Node* llink){
	this->llink=llink;
}
template<class T>
void Node<T>::set_rlink(Node* rlink){
	this->rlink=rlink;
}
template<class T>
Node<T>* Node<T>::get_llink(){
	return llink;
}
template<class T>
Node<T>* Node<T>::get_rlink(){
	return rlink;
}
template<class T>
void Node<T>::set_data(T data){
	this->data=data;
}
template<class T>
Doublylinked<T>::Doublylinked(){
	head=NULL;
	tail=NULL;
}
template<class T>
void Doublylinked<T>::display(){
	Node<T>* t=head;
	while(t!=NULL){
		cout<<t->get_data()<<" ";
		t=t->get_rlink();
	}
	cout<<endl;
}
template<class T>
void Doublylinked<T>::insert_at_front(T key){
	Node<T>* node=new Node<T>(key);
	node->set_data(key);
	if(head==NULL){
		head=node;
	}
	else{
		node->set_rlink(head);
		node->set_llink(node);
		head=node;
	}
}
template<class T>
void Doublylinked<T>::insert_at_end(T key){
	Node<T>* node=new Node<T>(key);
	node->set_data(key);
	Node<T>* p=head;
	if(head==NULL){
		head=node;
	}
	else{
		while(p->get_rlink()!=NULL){
			p=p->get_rlink();
		}
		p->set_rlink(node);
		node->set_llink(p);
    }
}
template<class T>
void Doublylinked<T>::insert_at_pos(int pos,T key){
	if(pos==1){
		insert_at_front(key);
	}
	else{
		int count=1;
		Node<T>* node=new Node<T>(key);
		node->set_data(key);
		Node<T>* p=head;
		while(p->get_rlink()!=NULL and count<pos-1){
			p=p->get_rlink();
			count++;
		}
		Node<T>* q=p->get_rlink();
		node->set_rlink(q);
		p->set_rlink(node);
		node->set_llink(p);
		q->set_llink(node);
	}
}
template<class T>
void Doublylinked<T>::delete_at_front(){
	if(head==NULL){
		cout<<"List Empty"<<endl;
	}
	else{
		Node<T>* p=head;
		head=head->get_rlink();
		head->set_llink(NULL);
		delete(p);
	}
}
template<class T>
void Doublylinked<T>::delete_at_end(){
	if(head==NULL){
		cout<<"List Empty"<<endl;
	}
	else{
		Node<T>* p=head;
		Node<T>* q=p->get_rlink();
		while(q->get_rlink()!=NULL){
			p=q;
			q=q->get_rlink();
		}
		p->set_rlink(NULL);
		delete(q);
	}
}
template<class T>
void Doublylinked<T>::delete_at_pos(int pos){
	if(pos==1){
		delete_at_front();
	}
	else{
		int count=1;
		Node<T>* p=head;
		Node<T>* q=p->get_rlink();
		while(q->get_rlink()!=NULL and count<pos-1){
			p=q;
			q=q->get_rlink();
			count++;
		}
		p->set_rlink(q->get_rlink());
		q->get_rlink()->set_llink(p);
		delete(q);
		
	}
}
