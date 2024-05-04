#include"StackRecursion.cpp"
int main(){
	cout<<"Enter the number to find factorial:"<<endl;
	float n;
	cin>>n;
	Stack st;
	float f=st.factN(n);
	cout<<"Factorial:"<<f<<endl;
}
