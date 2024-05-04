#include<iostream>
#include<ostream>
using namespace std;
template<class T>
class Stack{
	T S[100];
	int top;
	int size;
	public:
		Stack();
		bool isEmpty();
		bool isFull();
		void push(T);
		void pop();
		T peek();
		//int length();
		bool isBalanced(const string& );
		bool isMatchingPair(T,T);
		void display();
};
