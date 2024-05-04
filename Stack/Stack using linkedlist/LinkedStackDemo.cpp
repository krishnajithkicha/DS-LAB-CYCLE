#include"LinkedStack.cpp"
int main(){
	cout<<"Do you like to perform operations on Stack using Linked List(y/n)?:";
	char ch;
	cin>>ch;
	cout<<"The various operations on Stack using Linked List are:\na.PUSH\nb.POP\nc.Display \n";
	string choice;
	string datatype;
	cout<<"Enter the datatype(int/float/char):";
	cin>>datatype;
	int limit;
	cout<<"Enter the size:";
	cin>>limit;
	LinkedStack<double>myLinkStack;
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
					myLinkStack.push(key);
				}
			}
			else if(choice=="b"){
				int val=myLinkStack.peek();
				myLinkStack.pop();
				cout<<"Deleted element after pop:"<<val<<endl;
			}
			else if(choice=="c"){
				myLinkStack.display();
			}
			else{
				cout<<"Kindly enter a valid choice \n";
			}
		}
		else if(datatype=="float"){
			//Stack<int>myStack;
			if(choice=="a"){
				float key;
				for(int i=0;i<limit;i++){
					cout<<"Enter the values to push in stack:";
					cin>>key;
					myLinkStack.push(key);
				}
			}
			else if(choice=="b"){
				float val=myLinkStack.peek();
				myLinkStack.pop();
				cout<<"Deleted element after pop:"<<val<<endl;
			}
			
			else if(choice=="c"){
				myLinkStack.display();
			}
			else{
				cout<<"Kindly enter a valid choice \n";
			}
		}
		else if(datatype=="char"){
			//Stack<int>myStack;
			if(choice=="a"){
				char key;
				for(int i=0;i<limit;i++){
					cout<<"Enter the values to push in stack:";
					cin>>key;
					myLinkStack.push(key);
				}
			}
			else if(choice=="b"){
				char val=myLinkStack.peek();
				myLinkStack.pop();
				cout<<"Deleted element after pop:"<<val<<endl;
			}
			
			else if(choice=="c"){
				myLinkStack.display();
			}
			else{
				cout<<"Kindly enter a valid choice \n";
			}
		}
		else{
			cout<<"Kindly enter a valid choice \n";
		}
		cout<<"Do you like to perform more operations on Stack using Linked List(y/n)?:";
		cin>>ch;
		
	}
}

