#include<iostream>
using namespace std;
template<class T>
class Deque{
	int front,back,size;
	T* Q;
	public:
		Deque(int);
		bool isFull();
		bool isEmpty();
		void insert_front(T);
		void insert_back(T);
		void pop_front();
		void pop_back();
		void display();
};
