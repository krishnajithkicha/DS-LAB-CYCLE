#include"Conversion.cpp"
int main(){
	Conversion c;
	string in;
	cout<<"Enter the expression to convert:";
	cin>>in;
	string post=c.infix_to_postfix(in);
	string pre=c.infix_to_prefix(in);
	cout<<"PostFix Conversion:"<<post<<endl;
	cout<<"PreFix Conversion:"<<pre<<endl;
}
