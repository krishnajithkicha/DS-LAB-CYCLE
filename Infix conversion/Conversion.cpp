#include"Conversion.h"
#include<algorithm>
template<class T>
Stack<T>::Stack(){
	top=-1;
	size=100;
}
template<class T>
void Stack<T>::display(){
	for(int i=top;i>=0;i--){
		cout<<S[i]<<" ";
	}
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
void Stack<T>::Push(T key){
	if(isFull()!=true){
		top++;
		S[top]=key;
	}
	else{
		cout<<"Stack Overflow \n";
	}
}
template<class T>
void Stack<T>::Pop(){
	if(isEmpty()!=true){
		top--;
	}
	else{
		cout<<"Stack Underflow \n";
	}
}
template<class T>
T Stack<T>::Peek(){
	if(isEmpty()!=true){
		return S[top];
	}
	else{
		return -1;
	}
}

Conversion::Conversion(){
	postfix="";
	prefix="";
}

int Conversion::precedence(char op){
	if(op=='^'){
		return 3;
	}
	if(op=='/' or op=='*'){
		return 2;
	}
	if(op=='+' or op=='-'){
		return 1;
	}
	else{
		return -1;
	}
}
string Conversion::infix_to_postfix(string s){
	Stack<char>st;
	string postfix="";
	for(int i=0;i<s.length();i++){
        char ch=s[i];

        if ((ch >='a' and ch<='z')or(ch>='A' and ch<='Z')or(ch>='0' and ch<='9')){
            postfix+=ch;
        } 
		else if (ch=='('){
            st.Push('(');
        } 
		else if (ch==')'){
            while (!st.isEmpty() and st.Peek()!='('){
                postfix+=st.Peek();
                st.Pop();
            }
            st.Pop();
        }
		else {
            while (!st.isEmpty() and precedence(s[i])<=precedence(st.Peek())) {
                postfix += st.Peek();
                st.Pop();
            }
            st.Push(ch);
        }
    }

    while (!st.isEmpty()){
        postfix+=st.Peek();
        st.Pop();
    }

    return postfix;
}
string Conversion::infix_to_prefix(string s){
    reverse(s.begin(),s.end());
    for (int i= 0;i<s.length();i++){ 
        if (s[i] == '(') {
            s[i]=')';
        }
        else if (s[i] == ')') {
            s[i]='(';
        }
    }
	string pre=infix_to_postfix(s);
	reverse(pre.begin(),pre.end());
	return pre;
	
}

