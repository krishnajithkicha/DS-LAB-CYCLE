#include"Array.h"
template<class T>
Array<T>::Array(){
	LB=1;
	UB=0;
}
template<class T>
Array<T>::Array(int LB,int UB, T x[]){
}
int k;
template<class T>
void Array<T>::insert_at_beg(T key){
	UB+=1;
	k=UB-1;
	while(k>=LB){
		A[k+1]=A[k];
		k--;
	}
	A[LB]=key;
}
template<class T>
void Array<T>::insert_at_end(T key){
	UB+=1;
	A[UB]=key;
}
template<class T>
void Array<T>::insert_at_pos(T key,int pos){
	UB+=1;
	k=UB-1;
	while(k>=pos){
		A[k+1]=A[k];
		k--;
	}
	A[pos]=key;
}
template<class T>
void Array<T>::delete_from_beg(){
	LB+=1;
}
template<class T>
void Array<T>::delete_at_end(){
	UB-=1;
}
template<class T>
void Array<T>::delete_at_pos(int pos){
	if(LB<=pos and UB>=pos){
		k=pos+1;
		while(k<=UB){
			A[k-1]=A[k];
			k++;
		}
		UB-=1;
	}
	else{
		cout<<"OUT OF BOUND \n";
	}
}
template<class T>
int Array<T>::find_index(T key){
	int pos=-1;
	for(int i=LB;i<=UB;i++){
		if(A[i]==key){
			pos=i;
			break;
		}
	}
	return pos;
}
template<class T>
void Array<T>::display(){
	for (int i=LB;i<=UB;i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
}
