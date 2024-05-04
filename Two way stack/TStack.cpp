#include"TStack.h"
template<class T>
TStack<T>::TStack(int n){
	size=n;
	front=-1;
	back=n;
	arr=new T[n];
}
template<class T>
bool TStack<T>::isFull(){
	bool f=false;
	if(front+1==back or front==back){
		f=true;
	}
	return f;
}
template<class T>
bool TStack<T>::isEmpty(){
	bool e=false;
	if(front==-1 and back==size){
		e=true;
	}
	return e;
}
template<class T>
void TStack<T>::pushfront(T key){
	if(!isFull()){
		arr[++front]=key;
		cout<<"Element pushed into the front \n";
	}
	else{
		cout<<"Overflow \n";
	}
}
template<class T>
void TStack<T>::pushback(T key){
	if(!isFull()){
		arr[--back]=key;
		cout<<"Element pushed into the back \n";
	}
	else{
		cout<<"Overflow \n";
	}
}
template<class T>
void TStack<T>::popfront(){
	if(isEmpty()==true){
		cout<<"Stack Underflow \n";
	}
	if(front>-1){
		front--;
	}
}
template<class T>
void TStack<T>::popback(){
	if(isEmpty()==true){
		cout<<"Stack Underflow \n";
	}
	if(back<size){
		back++;
	}
}
template<class T>
T TStack<T>::peekfront(){
	if(isEmpty()==true){
		cout<<"Stack Underflow \n";
	}
	else{
		return arr[front];
	}
}
template<class T>
T TStack<T>::peekback(){
	if(isEmpty()==true){
		cout<<"Stack Underflow \n";
	}
	else{
		return arr[back];
	}
}
template<class T>
void TStack<T>::display(){
	for(int i=front;i>=0;i--){
		cout<<arr[i]<<" ";
	}
	for(int j=size-1;j>=back;j--){
		cout<<arr[j]<"  ";
	}
	cout<<endl;
}
