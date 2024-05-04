#include"CircularLinked.h"
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
CircularLinked<T>::CircularLinked(){
	head=NULL;
}
template<class T>
void CircularLinked<T>::insert_at_beg(T key){
	if(head==NULL){
		Node<T>* node=new Node<T>(key);
		node->set_link(node);
		node->set_data(key);
		head=node;
	}
	else{
		Node<T>* node=new Node<T>(key);
		node->set_link(head);
		node->set_data(key);
		Node<T>* p=head;
		while(p->get_link()!=head){
			p=p->get_link();
		}
		head=node;
		p->set_link(head);
	}
}
template<class T>
void CircularLinked<T>::display(){
	Node<T>* p=head;
	do{
		cout<<p->get_data()<<" ";
		p=p->get_link();
		//cout<<endl;
	}while(p!=head);
	cout<<endl;
}
template<class T>
void CircularLinked<T>::insert_at_end(T key){
	if(head==NULL){
		Node<T>* node=new Node<T>(key);
		node->set_link(node);
		node->set_data(key);
		head=node;
	}
	else{
		Node<T>* p=head;
		while(p->get_link()!=head){
			p=p->get_link();
		}
		Node<T>* node=new Node<T>(key);
		node->set_link(head);
		node->set_data(key);
		p->set_link(node);
	}
}
template<class T>
void CircularLinked<T>::insert_at_pos(int pos,T key){
	if(pos==1){
		insert_at_beg(key);
	}
	else{
		int count=1;
		Node<T>* p=head;
		while(p->get_link()!=head and count<pos-1){
			p=p->get_link();
			count++;
		}
		Node<T>* q=p->get_link();
		Node<T>* node=new Node<T>(key);
		node->set_link(q);
		node->set_data(key);
		p->set_link(node);
	}
}
template<class T>
void CircularLinked<T>::delete_at_beg(){
	if(head==NULL){
		cout<<"List is Empty \n";
	}
	else{
		Node<T>* p=head;
		head=head->get_link();
		Node<T>* q=head;
		do{
			q=q->get_link();
		}
		while(q->get_link()!=p);
		q->set_link(head);
		delete(p);
	}
}
template<class T>
void CircularLinked<T>::delete_at_end(){
	if(head==NULL){
		cout<<"List is Empty \n";
	}
	else{
		Node<T>* p=head;
		Node<T>* q=p->get_link();
		while(q->get_link()!=head){
			p=q;
			q=q->get_link();
		}
		p->set_link(head);
		delete(q);
	}
}
template<class T>
void CircularLinked<T>::delete_at_pos(int pos){
	if(head==NULL){
		cout<<"List is Empty \n";
	}
	int count=1;
	Node<T>* p=head;
	Node<T>* q=p->get_link();
	while(q->get_link()!=head and count<pos-1){
		p=q;
		q=q->get_link();
		count++;
	}
	p->set_link(q->get_link());
	delete(q);
}
