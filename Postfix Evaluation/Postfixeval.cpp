#include"Postfixeval.h"
Stack::Stack(){
	top=-1;
	size=100;
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
void Stack::Push(float key){
	if(isFull()!=true){
		top++;
		S[top]=key;
	}
	else{
		cout<<"Stack Overflow \n";
	}
}
void Stack::Pop(){
	if(isEmpty()!=true){
		top--;
	}
	else{
		cout<<"Stack underflow \n";
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
void Stack::display(){
	for(int i=top;i>=0;i--){
		cout<<S[i]<<" ";
	}
}
float Stack::Postfix_eval(const string& exp){
	Stack s;
	for(int j=0;j<exp.length();j++){
		if(exp[j]=='*'){
			float val1=s.Peek();
			s.Pop();
			float val2=s.Peek();
			s.Pop();
			s.Push(val1*val2);
		}
		else if(exp[j]=='/'){
			float val1=s.Peek();
			s.Pop();
			float val2=s.Peek();
			s.Pop();
			s.Push(val2/val1);
		}
		else if(exp[j]=='+'){
			float val1=s.Peek();
			s.Pop();
			float val2=s.Peek();
			s.Pop();
			s.Push(val1+val2);
		}
		else if(exp[j]=='-'){
			float val1=s.Peek();
			s.Pop();
			float val2=s.Peek();
			s.Pop();
			s.Push(val2-val1);
		}
		else{
			float op=exp[j]-'0';
			s.Push(op);
		}
	}
	return s.Peek();
}
