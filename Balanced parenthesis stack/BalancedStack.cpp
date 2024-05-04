#include"BalancedStack.h"
template<class T>
Stack<T>::Stack(){
	top=-1;
	size=100;
}
template<class T>
bool Stack<T>::isEmpty(){
	if(top==-1){
		return true;
	}
	return false;
}
template<class T>
bool Stack<T>::isFull(){
	if(top==size){
		return true;
	}
	return false;
}
template<class T>
void Stack<T>::push(T key){
	if(isFull()!=true){
		top+=1;
		S[top]=key;
	}
	else{
		cout<<"Stack overflow \n";
	}
}
template<class T>
void Stack<T>::pop(){
	if(isEmpty()!=true){
		top=top-1;
	}
	else{
		cout<<"Stack underflow \n";
	}
}
template<class T>
T Stack<T>::peek(){
	if(isEmpty()!=true){
		return S[top];
	}
	else{
		cout<<"Stack is empty \n";
		return -1;
	}
}
template<class T>
void Stack<T>::display(){
	for(int i=top;i>=0;i--){
		cout<<S[i]<<" ";
	}
	cout<<endl;
}

template<class T>
bool Stack<T>::isBalanced(const string& exp){
	Stack<char>s;
	for(int i=0;i<exp.length();i++){
		if(exp[i]=='('||exp[i]=='{' || exp[i]=='['){
				s.push(exp[i]);
		}
		else if(exp[i]==')'  || exp[i]=='}' || exp[i]==']'){
			if(s.isEmpty() || !isMatchingPair(s.peek(),exp[i])){
				return false;
			}
			else{
				s.pop();
			}
		}
	}
	return s.isEmpty();
}
template<class T>
bool Stack<T>::isMatchingPair(T exp1,T exp2){
	if(exp1=='(' && exp2==')'){
		return true;
	}
	else if(exp1=='[' && exp2==']'){
		return true;
	}
	else if(exp1=='{' && exp2=='}' ){
		return true;
	}
	else{
		return false;
	}
}


