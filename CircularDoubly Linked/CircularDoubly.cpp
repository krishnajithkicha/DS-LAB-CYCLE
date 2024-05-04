#include"CircularDoubly.h"
template<class T>
Node<T>::Node(T data){
	this->data=data;
	this->llink=NULL;
	this->rlink=NULL;
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
void Node<T>::set_data(T data){
	this->data=data;
}
template<class T>
T Node<T>::get_data(){
	return data;
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
CircularDoubly<T>::CircularDoubly(){
	head=NULL;
	tail=NULL;
}
template<class T>
void CircularDoubly<T>::insert_at_beg(T key){
	Node<T>* node=new Node<T> (key);
	node->set_data(key);
	if (head==NULL){
		head=node;
		tail=node;
	}
	else{
		node->set_rlink(head);
		head->set_llink(node);
		node->set_llink(tail);
		head=node;
		tail->set_llink(head);
	}
}
template<class T>
void CircularDoubly<T>::insert_at_end(T key){
	Node<T>* node=new Node<T> (key);
	node->set_data(key);
	if (head==NULL){	
		head=node;
		tail=node;
		head->set_llink(tail);
		tail->set_rlink(head);
	}
	else{
	    tail->set_rlink(node);
	    node->set_llink(tail);
	    node->set_rlink(head);
	    head->set_llink(node);
	    tail=node;
	}
}
template<class T>
void CircularDoubly<T>::insert_at_pos(int pos,T key){
	int count=1;
	Node<T>* p=head;
	while (p!=NULL and count<pos-1){
		p=p->get_rlink();
		count++;
	}
	Node<T>* node=new Node<T>(key);
	node->set_data(key);
	node->set_rlink(p->get_rlink());
	node->set_llink(p);
	p->set_rlink(node);
}
template<class T>
void CircularDoubly<T>::delete_from_beg(){
	if(head==NULL){
		cout<<"List is Empty\n";
	}
	else{
		Node<T>* p=head;
		head=head->get_rlink();
		delete(p);
		tail->set_rlink(head);
	}
}
template<class T>
void CircularDoubly<T>::delete_from_end(){
	if (head==NULL){
		cout<<"List Empty"<<endl;
	}
	else{
		Node<T>* p=head;
		Node<T>* q=p->get_rlink();
		while(q->get_rlink()!=head){
			p=q;
			q=q->get_rlink();
		}
		delete(q);
		tail=p;
		tail->set_rlink(head);	
	}
}
template<class T>
void CircularDoubly<T>::delete_from_pos(int pos){
	if(pos==1){
		delete_from_beg();
	}
	if(head==NULL){
		cout<<"List is Empty\n";
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
		q->get_rlink()->set_rlink(p);
		delete(q);
	}
}
template <class T>
void CircularDoubly<T>::display(){
	Node<T>* p=head;
	do{
		cout<<p->get_data()<<" ";
		p=p->get_rlink();
	}while(p!=head);
	cout<<endl;
}
