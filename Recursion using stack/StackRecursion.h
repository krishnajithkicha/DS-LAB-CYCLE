#include<iostream>
using namespace std;
class Stack{
	float S[100];
	int top;
	int size;
	public:
		Stack();
		void display();
		bool isEmpty();
		bool isFull();
		void Push(float);
		void Pop();
		float Peek();
		float factN(float);
};
