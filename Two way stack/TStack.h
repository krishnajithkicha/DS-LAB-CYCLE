#include<iostream>
using namespace std;
template<class T>
class TStack{
	int size;
	int front;
	int back;
	T* arr;
	public:
		TStack(int);
		bool isFull();
		bool isEmpty();
		void pushfront(T);
		void pushback(T);
		void popfront();
		void popback();
		T peekfront();
		T peekback();
		void display();
};
