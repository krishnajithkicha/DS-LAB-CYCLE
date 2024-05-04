#include"Postfixeval.cpp"
int main(){
	string expression;
	cout<<"Enter the postfix expression to evaluate:";
	cin>>expression;
	Stack st;
	float result=st.Postfix_eval(expression);
	cout<<"Equivalent:"<<result<<endl;
	return 0;
}
