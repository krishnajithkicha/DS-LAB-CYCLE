#include"Array.h"
#include<cstring>
#include<limits>
using namespace std;
template<class T>
Array<T>::Array(){
	LB=1;
	UB=0;
}
template<class T>
Array<T>::Array(int LB,int UB, T x[]){
}
template<class T>
int Array<T>::get_LB(){
	return LB;
}
template<class T>
int Array<T>::get_UB(){
	return UB;
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
template<class T>
T Array<T>::linear_search(T key){
	int index=-1;
	int i=LB;
	while (i<=UB)
	{
		if (A[i]==key)
		{
			index=i;
			break;
		}
		i=i+1;
	}
	return index;
}
template<class T>
void Array<T>::swap(int p,int q){
	T t=A[p];
	A[p]=A[q];
	A[q]=t;
}
template<class T>
void Array<T>::selection_sort(){
	for(int i=LB;i<UB;i++)
	{
		int min=i;
		for(int j=i+1;j<=UB;j++)
		{
			if (A[j]<A[min])
			{
				min=j;
			}
		}
		if (min!=i)
		{
			swap(i,min);
		}
	}
}
template<class T>
T Array<T>::binary_search(T key){
	int p=LB;
	int q=UB;
	while (p<=q)
	{
		int mid=(p+q)/2;
		if (A[mid]>key)
		{
			q=mid-1;
		}
		else if(A[mid]<key)
		{
			p=mid+1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
template<class T>
void Array<T>::bubble_sort(){
	for(int i=LB;i<UB;i++)
	{
		for(int j=LB;j<UB+LB-i;j++)
		{
			if (A[j]>A[j+1])
			{
				swap(j,j+1);
			}
		}
	}
}
template <class T>
void Array<T>::insertion_sort(){
	int i;
	i=LB+1;
	while(i<=UB){
		T key=A[i];
		int j;
		j=i-1;
		while(j>=LB and A[j]>key){
			A[j+1]=A[j];
			j=j-1;
		}
		A[j+1]=key;
		i=i+1;
	}
}
template<class T>
int Array<T>::partition(int LB,int UB){
	int j=LB-1;
	T pivot=A[UB];
	int i=LB;
	while (i<=UB-1)
	{
		if (A[i]<pivot)
		{
			j=j+1;
			swap(i,j);
		}
		i+=1;	
	}
	swap(j+1,UB);
	return j+1;
}
template<class T>
void Array<T>::quick_sort(int LB, int UB){
	if(LB<UB)
	{
	int p=partition(LB,UB);
	quick_sort(LB,p-1);
	quick_sort(p+1,UB);	
	}
}
template <class T>
void Array<T>::merge(int LB,int mid,int UB){
	int n1=mid-LB+1;
	int n2=UB-mid;	
	T L[n1+1];
	T R[n2+1];
	memcpy(L,&A[LB],n1*sizeof(T));
    memcpy(R,&A[mid+1],n2*sizeof(T));
    L[n1]=R[n2]=numeric_limits<T>::max();
    int i=0;
    int j=0;
    int k=LB;
    for (k=LB;k<=UB;k++){
    	if (L[i]<R[j]){
    		A[k]=L[i];
    		i=i+1;
		}
		else{
			A[k]=R[j];
			j=j+1;
		}
	}

}
template <class T>
void Array<T>::merge_sort(int LB,int UB){
	if (LB<UB){
		int M=(LB+UB)/2;
		merge_sort(LB,M);
		merge_sort(M+1,UB);
		merge(LB,M,UB);
	}
}

