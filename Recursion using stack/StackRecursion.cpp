#include"StackRecursion.h"
Stack::Stack(){
	top=-1;
	size=100;
}
void Stack::display(){
	for(int i=top;i>=0;i--){
		cout<<S[i]<<" ";
	}
	cout<<endl;
}				
bool Stack::isEmpty(){
	if(top==-1){
		return true;
	}
	return false;
}

bool Stack::isFull(){
	if(top==size){
		return true;
	}
	return false;
}

void Stack::Push(float x){	
	if(isFull()!=true){
		top++;
		S[top]=x;
	}
	else{
		cout<<"Stack Overflow"<<endl;
	}
}
void Stack::Pop(){
	if(isEmpty()!=true){
		top--;
	}
	else{
		cout<<"Stack Underflow"<<endl;
	}
}
float Stack::Peek(){
	if(isEmpty()!=true){
		return S[top];
	}
	else{
		return -1;
	}
}
float Stack::factN(float n){
	if(n==1 || n==0){
		return 1;
	}
	else{
		for(int i=1;i<=n;i++){
			Push(i);
		}
		float fact=Peek()*(factN(n-1));
		Pop();
		return fact;
	}
}

