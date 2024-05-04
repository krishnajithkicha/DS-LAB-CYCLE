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
		int get_LB();
		int get_UB();
		void insert_at_beg(T);
		void insert_at_end(T);
		void insert_at_pos(T,int);
		void delete_from_beg();
		void delete_at_end();
		void delete_at_pos(int);
		int find_index(T);
		T linear_search(T);
		void swap(int,int);
		void selection_sort();
		T binary_search(T);
		void bubble_sort();
		void insertion_sort();
		int partition(int,int);
		void quick_sort(int,int);
		void merge(int,int,int);
		void merge_sort(int,int);
		void clockrotate(int);
		void antirotate(int);
		void distinct();
		void frequency();
		void display();
		template<class U>
		friend ostream & operator <<(ostream &,Array <U>);
};
