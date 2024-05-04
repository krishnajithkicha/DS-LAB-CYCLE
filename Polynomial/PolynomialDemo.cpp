#include"Polynomial.cpp"
int main(){
	PolynomialAdd<int>mypol1;
	PolynomialAdd<int>mypol2,sum,product;
	mypol1.createLL();
	cout<<"Polynomial 1:";
	mypol1.display();
	mypol2.createLL();
	cout<<endl;
	cout<<"Polynomial 2:";
	mypol2.display();
	sum=sum.addpoly(mypol1,mypol2);
	cout<<"Sum of the polynomial is:";
	sum.display();
	product=product.multipoly(mypol1,mypol2);
	cout<<"Product of the polynomial is:";
	product.display();
}
