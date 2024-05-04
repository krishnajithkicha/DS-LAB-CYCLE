#include<iostream>
using namespace std;
template<class T>
class Stack{
	T S[100];
	int top,size;
	public:
		Stack();
		void display();
		bool isEmpty();
		bool isFull();
		void Push(T);
		void Pop();
		T Peek();
};
class Conversion{
	string postfix;
	string prefix;
	public:
		Conversion();
		int precedence(char);
		string infix_to_prefix(string);
		string infix_to_postfix(string);
};
