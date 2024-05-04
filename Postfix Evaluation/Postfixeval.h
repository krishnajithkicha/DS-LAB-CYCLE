#include<iostream>
using namespace std;
class Stack{
	int size,top;
	float S[100];
	public:
		Stack();
		void display();
		bool isEmpty();
		bool isFull();
		float Peek();
		void Push(float);
		void Pop();
		float Postfix_eval(const string&);
};
