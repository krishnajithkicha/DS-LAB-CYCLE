#include"Queue.h"
template<class T>
Queue<T>::Queue(){
	Rear=-1;
	Front=0;
	size=100;
}
template<class T>
bool Queue<T>::isEmpty(){
	if(Front>Rear){
		//cout<<"Queue is empty \n";
		return true;
	}
	else{
		return false;
	}
}
template<class T>
bool Queue<T>::isFull(){
	if(Rear==size){
		return true;
	}
	return false;
}
template<class T>
void Queue<T>::display(){
	for(int i=0;i<=Rear;i++){
		cout<<Q[i]<<" ";
	}
	cout<<endl;
}
template<class T>
void Queue<T>::EnQueue(T x){
	if(Rear!=size){
		Rear=Rear+1;
		Q[Rear]=x;
	}
	else{
		cout<<"Queue Full\n";
	}
	
}
template<class T>
void Queue<T>::RollBack(){
	for (int i=Front;i<=Rear;i++){
		Q[i-Front]=Q[i];
	}
	Rear=Rear-Front;
	Front=0;
	/*if(Front>Rear){
		
		Front=0;
		Rear=-1;
	}*/
}
template<class T>
void Queue<T>::DeQueue(){
	if(Front<Rear){
		Front=Front+1;
		RollBack();
	}
	else{
		cout<<"Queue is empty \n";
	}
}	
