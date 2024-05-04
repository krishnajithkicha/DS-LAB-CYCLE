#include<iostream>
#include<ostream>
using namespace std;
template<class T>
class Queue{
	T Q[100];
	int Rear;
	int Front;
	int size;
	public:
		Queue();
		bool isEmpty();
		bool isFull();
		void display();
		void EnQueue(T);
		void RollBack();
		void DeQueue();		
};
