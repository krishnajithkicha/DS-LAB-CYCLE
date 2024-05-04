#include"LinkedList.h"
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
LinkedList<T>::LinkedList(){
	head=NULL;
}
template<class T>
void LinkedList<T>::createLL(){
	string option;
	T x;
	Node<T>* current;
	current=head;
	do{
		cout<<"Enter the value:";
		cin>>x;
		Node<T>* node=new Node<T>(x);
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
void LinkedList<T>::display(){
	Node<T>* t=head;
	while(t!=NULL){
		cout<<t->get_data()<<" ";
		t=t->get_link();
	}
	cout<<endl;
}
template<class T>
void LinkedList<T>::insert_at_beg(T key){
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
void LinkedList<T>::insert_at_end(T key){
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
void LinkedList<T>::insert_at_pos(T key,int pos){
	int count=1;
	Node<T>* p=head;
	while(p->get_link()!=NULL and count<pos-1){
		p->get_link();
		count++;
	}
	Node<T>* q=p->get_link();
	Node<T>* node=new Node<T>(key);
	node->set_link(q);
	p->set_link(node);
	
}
template<class T>
void LinkedList<T>::delete_from_front(){
	Node<T>* temp=head;
	head=head->get_link();
	delete(temp);
}
template<class T>
void LinkedList<T>::delete_at_end(){
	Node<T>* p=head;
	Node<T>* q=p->get_link();
	while(q->get_link()!=NULL){
		p=q;
		q=q->get_link();
	}
	p->set_link(NULL);
	delete(q);
}
template<class T>
void LinkedList<T>::delete_at_pos(int pos){
	int count=1;
	Node<T>* p=head;
	Node<T>* q=p->get_link();
	while(q->get_link()!=NULL and count<pos-1){
		p=q;
		q=q->get_link();
		count++;
	}
	p->set_link(q->get_link());
	delete(q);
}
