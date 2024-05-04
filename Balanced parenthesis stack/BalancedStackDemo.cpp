#include"BalancedStack.cpp"
int main(){
	Stack<char>mySt;
	string exp;
	string op;
	cout<<"Do you want to check balanced parenthesis(y/n)?:";
	cin>>op;
	while(op=="y"){
		cout<<"Enter expression to check balanced parenthesis:";
		cin>>exp;
		bool isbal=mySt.isBalanced(exp);
		if(isbal==true){
			cout<<"The given expression is a Balanced Parenthesis \n";
		}
		else{
			cout<<"The given expression is an Inbalanced Parenthesis \n";
		}
		cout<<"Do you want to check balanced parenthesis(y/n)?:";
		cin>>op;
	}
}
