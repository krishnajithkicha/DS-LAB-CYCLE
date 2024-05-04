#include<iostream>
#include<ostream>
using namespace std;
template<class T>
class Array{
	int LB,UB;
	T A[100];
	public:
		Array();
		Array(int,int,T[]);
		void insert_at_beg(T);
		void insert_at_end(T);
		void insert_at_pos(T,int);
		void delete_from_beg();
		void delete_at_end();
		void delete_at_pos(int);
		int find_index(T);
		void display();
		template<class U>
		friend ostream & operator <<(ostream &,Array <U>);
};
