#include"Doublylinked.cpp"
int main(){
	cout<<"Do you want to perform operations on Doubly linked List(y/n)?:";
	char ch;
	cin>>ch;
	cout<<"The various operations in Doubly Linked List are:\n";
	cout<<"a. Insert at Beginning \n";
	cout<<"b. Insert at End \n";
	cout<<"c. Insert at a specified Position \n";
	cout<<"d. Delete from Beginning\n";
	cout<<"e. Delete from End \n";
	cout<<"f. Delete from a specified Position \n";
	cout<<"g. Display \n";
	string choice;
	string datatype;
	cout<<"Enter the datatype(int/float/char) that you have to perform:";
	cin>>datatype;
	Doublylinked<double>myDL;
	while(ch=='y'){
		cout<<"Enter your choice:";
		cin>>choice;
		if(datatype=="int"){
			//Doublylinked<int>myDL;
			if(choice=="a"){
				char op;
				cout<<"Do you like to insert at beginning(y/n):?";
				cin>>op;
				int key1;
				while(op=='y'){
					cout<<"Enter the data to be inserted at beginning:";
					cin>>key1;
					myDL.insert_at_front(key1);
					cout<<"Do you like to insert at beginning(y/n):?";
					cin>>op;
				}
			}
			else if(choice=="b"){
				char op1;
				cout<<"Do you like to insert at end(y/n):?";
				cin>>op1;
				int key2;
				while(op1=='y'){
					cout<<"Enter the data to be inserted at end:";
					cin>>key2;
					myDL.insert_at_end(key2);
					cout<<"Do you like to insert at end(y/n):?";
					cin>>op1;
				}
			}
			else if(choice=="c"){
		    	char op3;
				cout<<"Do you like to insert at position(y/n):?";
				cin>>op3;
				int key3,pos1;
				while(op3=='y'){
					cout<<"Enter the position to insert:";
					cin>>pos1;
					cout<<"Enter the data to be inserted at position:";
					cin>>key3;
					myDL.insert_at_pos(key3,pos1);
					cout<<"Do you like to insert at position(y/n):?";
					cin>>op3;
				}
			}
		    else if(choice=="d"){
		    	char op4;
				cout<<"Do you like to delete from beginning(y/n):?";
				cin>>op4;
				while(op4=='y'){
					myDL.delete_at_front();
					cout<<"Do you like to delete from beginning(y/n)?:";
					cin>>op4;
				}
			}
			else if(choice=="e"){
				char op5;
				cout<<"Do you like to delete at end(y/n):?";
				cin>>op5;
				while(op5=='y'){
					myDL.delete_at_end();
					cout<<"Do you like to delete at end(y/n):?";
					cin>>op5;
				}
			}
			else if(choice=="f"){
				char op6;
				cout<<"Do you like to delete at position(y/n):?";
				cin>>op6;
				int pos2;
				while(op6=='y'){
					cout<<"Enter the position to delete:";
					cin>>pos2;
					myDL.delete_at_pos(pos2);
					cout<<"Do you like to delete at position(y/n):?";
					cin>>op6;
				}
			}
			else if(choice=="g"){
				cout<<"Doubly Linked List :\n";
				myDL.display();
			}
			else{
				cout<<"Kindly enter a valid choice\n";
			}
	    }
	    else if(datatype=="float"){
			//Doublylinked<float>myDL;
			if(choice=="a"){
				char op;
				cout<<"Do you like to insert at beginning(y/n):?";
				cin>>op;
				float key1;
				while(op=='y'){
					cout<<"Enter the data to be inserted at beginning:";
					cin>>key1;
					myDL.insert_at_front(key1);
					cout<<"Do you like to insert at beginning(y/n):?";
					cin>>op;
				}
			}
			else if(choice=="b"){
				char op1;
				cout<<"Do you like to insert at end(y/n):?";
				cin>>op1;
				float key2;
				while(op1=='y'){
					cout<<"Enter the data to be inserted at end:";
					cin>>key2;
					myDL.insert_at_end(key2);
					cout<<"Do you like to insert at end(y/n):?";
					cin>>op1;
				}
			}
			else if(choice=="c"){
		    	char op3;
				cout<<"Do you like to insert at position(y/n):?";
				cin>>op3;
				float key3;
				int pos1;
				while(op3=='y'){
					cout<<"Enter the position to insert:";
					cin>>pos1;
					cout<<"Enter the data to be inserted at position:";
					cin>>key3;
					myDL.insert_at_pos(key3,pos1);
					cout<<"Do you like to insert at position(y/n):?";
					cin>>op3;
				}
			}
		    else if(choice=="d"){
		    	char op4;
				cout<<"Do you like to delete from beginning(y/n):?";
				cin>>op4;
				while(op4=='y'){
					myDL.delete_at_front();
					cout<<"Do you like to delete from beginning(y/n)?:";
					cin>>op4;
				}
			}
			else if(choice=="e"){
				char op5;
				cout<<"Do you like to delete at end(y/n):?";
				cin>>op5;
				while(op5=='y'){
					myDL.delete_at_end();
					cout<<"Do you like to delete at end(y/n):?";
					cin>>op5;
				}
			}
			else if(choice=="f"){
				char op6;
				cout<<"Do you like to delete at position(y/n):?";
				cin>>op6;
				int pos2;
				while(op6=='y'){
					cout<<"Enter the position to delete:";
					cin>>pos2;
					myDL.delete_at_pos(pos2);
					cout<<"Do you like to delete at position(y/n):?";
					cin>>op6;
				}
			}
			else if(choice=="g"){
				cout<<"Doubly Linked List :\n";
				myDL.display();
			}
			else{
				cout<<"Kindly enter a valid choice\n";
			}
		}
		else if(datatype=="char"){
			//Doublylinked<char>myDL;
			if(choice=="a"){
				char op;
				cout<<"Do you like to insert at beginning(y/n):?";
				cin>>op;
				char key1;
				while(op=='y'){
					cout<<"Enter the data to be inserted at beginning:";
					cin>>key1;
					myDL.insert_at_front(key1);
					cout<<"Do you like to insert at beginning(y/n):?";
					cin>>op;
				}
			}
			else if(choice=="b"){
				char op1;
				cout<<"Do you like to insert at end(y/n):?";
				cin>>op1;
				char key2;
				while(op1=='y'){
					cout<<"Enter the data to be inserted at end:";
					cin>>key2;
					myDL.insert_at_end(key2);
					cout<<"Do you like to insert at end(y/n):?";
					cin>>op1;
				}
			}
			else if(choice=="c"){
		    	char op3;
				cout<<"Do you like to insert at position(y/n):?";
				cin>>op3;
				char key3;
				int pos1;
				while(op3=='y'){
					cout<<"Enter the position to insert:";
					cin>>pos1;
					cout<<"Enter the data to be inserted at position:";
					cin>>key3;
					myDL.insert_at_pos(key3,pos1);
					cout<<"Do you like to insert at position(y/n):?";
					cin>>op3;
				}
			}
		    else if(choice=="d"){
		    	char op4;
				cout<<"Do you like to delete from beginning(y/n):?";
				cin>>op4;
				while(op4=='y'){
					myDL.delete_at_front();
					cout<<"Do you like to delete from beginning(y/n)?:";
					cin>>op4;
				}
			}
			else if(choice=="e"){
				char op5;
				cout<<"Do you like to delete at end(y/n):?";
				cin>>op5;
				while(op5=='y'){
					myDL.delete_at_end();
					cout<<"Do you like to delete at end(y/n):?";
					cin>>op5;
				}
			}
			else if(choice=="f"){
				char op6;
				cout<<"Do you like to delete at position(y/n):?";
				cin>>op6;
				int pos2;
				while(op6=='y'){
					cout<<"Enter the position to delete:";
					cin>>pos2;
					myDL.delete_at_pos(pos2);
					cout<<"Do you like to delete at position(y/n):?";
					cin>>op6;
				}
			}
			else if(choice=="g"){
				cout<<"Doubly Linked List :\n";
				myDL.display();
			}
			else{
				cout<<"Kindly enter a valid choice\n";
			}
		}
		else{
			cout<<"Kindly enter a valid choice..\n";
		}
		cout<<"Do you want to perform more operation on Doubly Linked list(y/n)?:";
		cin>>ch;
	}
	
}

