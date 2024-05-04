#include"Stack.cpp"
int main(){
	cout<<"Do you like to perform operations on Stack(y/n)?:";
	char ch;
	cin>>ch;
	cout<<"The various operations on Stack are:a. PUSH\n b. POP\n c. IS EMPTY\n d. IS FULL\n e. UNDERFLOW\n f. OVERFLOW\n g. Display \n";
	string choice;
	string datatype;
	cout<<"Enter the datatype(int/float/char):";
	cin>>datatype;
	int limit;
	cout<<"Enter the size:";
	cin>>limit;
	Stack<double>myStack;
	while(ch=='y'){
		cout<<"Enter your choice:";
		cin>>choice;
		if(datatype=="int"){
			//Stack<int>myStack;
			if(choice=="a"){
				int key;
				for(int i=0;i<limit;i++){
					cout<<"Enter the values to push in stack:";
					cin>>key;
					myStack.push(key);
				}
			}
			else if(choice=="b"){
				int val=myStack.peek();
				myStack.pop();
				cout<<"Deleted element after pop:"<<val<<endl;
			}
			else if(choice=="c"){
				bool empty=myStack.isEmpty();
				if(empty==true){
					cout<<"Stack is empty \n";
				}
				else{
					cout<<"Stack isnt empty \n";
					myStack.display();
				}
			}
			else if(choice=="d"){
				bool full=myStack.isFull();
				if(full==true){
					cout<<"Stack is full \n";
				}
				else{
					cout<<"Stack isnt full \n";
				}
			}
			else if(choice=="e"){
				int i;
				for( i=limit;i>=-1;i--){
					myStack.pop();
				}
				if(i==-1){
					cout<<"Stack underflow \n";
				}
			}
			else if(choice=="f"){
				int key,i;
				for( i=0;i<limit;i++){
					cout<<"Enter the values :";
					cin>>key;
					myStack.push(key);
				}
				if(i==limit){
					cout<<"Enter the values :";
					cin>>key;
					myStack.push(key);
					cout<<"Stack overflow \n";
				}
			}
			else if(choice=="g"){
				myStack.display();
			}
			else{
				cout<<"Kindly enter a valid choice \n";
			}
		}
		else if(datatype=="float"){
			//Stack<float>myStack;
			if(choice=="a"){
				float key;
				for(int i=0;i<limit;i++){
					cout<<"Enter the values to push in stack:";
					cin>>key;
					myStack.push(key);
				}
			}
			else if(choice=="b"){
				float val=myStack.peek();
				myStack.pop();
				cout<<"Deleted element after pop:"<<val<<endl;
			}
			else if(choice=="c"){
				bool empty=myStack.isEmpty();
				if(empty==true){
					cout<<"Stack is empty \n";
				}
				else{
					cout<<"Stack isnt empty \n";
					myStack.display();
				}
			}
			else if(choice=="d"){
				bool full=myStack.isFull();
				if(full==true){
					cout<<"Stack is full \n";
				}
				else{
					cout<<"Stack isnt full \n";
				}
			}
			else if(choice=="e"){
				int i;
				for( i=limit;i>=-1;i--){
					myStack.pop();
				}
				if(i==-1){
					cout<<"Stack underflow \n";
				}
			}
			else if(choice=="f"){
				float key;
				int i;
				for( i=0;i<limit;i++){
					cout<<"Enter the values :";
					cin>>key;
					myStack.push(key);
				}
				if(i==limit){
					cout<<"Enter the values :";
					cin>>key;
					myStack.push(key);
					cout<<"Stack overflow \n";
				}
			}
			else if(choice=="g"){
				myStack.display();
			}
			else{
				cout<<"Kindly enter a valid choice \n";
			}
		}
		else if(datatype=="char"){
			//Stack<char>myStack;
			if(choice=="a"){
				char key;
				for(int i=0;i<limit;i++){
					cout<<"Enter the values to push in stack:";
					cin>>key;
					myStack.push(key);
				}
			}
			else if(choice=="b"){
				char val=myStack.peek();
				myStack.pop();
				cout<<"Deleted element after pop:"<<val<<endl;
			}
			else if(choice=="c"){
				bool empty=myStack.isEmpty();
				if(empty==true){
					cout<<"Stack is empty \n";
				}
				else{
					cout<<"Stack isnt empty \n";
					myStack.display();
				}
			}
			else if(choice=="d"){
				bool full=myStack.isFull();
				if(full==true){
					cout<<"Stack is full \n";
				}
				else{
					cout<<"Stack isnt full \n";
				}
			}
			else if(choice=="e"){
				int i;
				for( i=limit;i>=-1;i--){
					myStack.pop();
				}
				if(i==-1){
					cout<<"Stack underflow \n";
				}
			}
			else if(choice=="f"){
				char key;
				int i;
				for( i=0;i<limit;i++){
					cout<<"Enter the values :";
					cin>>key;
					myStack.push(key);
				}
				if(i==limit){
					cout<<"Enter the values :";
					cin>>key;
					myStack.push(key);
					cout<<"Stack overflow \n";
				}
			}
			else if(choice=="g"){
				myStack.display();
			}
			else{
				cout<<"Kindly enter a valid choice \n";
			}
		}
		else{
			cout<<"Kindly enter a valid choice \n";
		}
		cout<<"Do you like to perform more operations on Stack(y/n)?:";
		cin>>ch;
		
	}
}
