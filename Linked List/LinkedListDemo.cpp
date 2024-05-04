#include"LinkedList.cpp"
int main(){
	cout<<"The various options in Linked List are:\n ";
	cout<<"a.Insert at Beginning \n";
	cout<<" b. Insert at End \n";
	cout<<" c. Insert at a specified Position\n";
	cout<<" d. Delete from Beginning\n ";
	cout<<"e. Delete from End\n ";
	cout<<"f. Delete from a specified Position\n";
	cout<<" g. Display \n";
	string choice;
	char ch;
	cout<<"Do you want to perform operations on Linked List(y/n)?:";
	cin>>ch;
	string datatype;
	cout<<"Enter the datatype(int/float/char) that you have to perform:";
	cin>>datatype;
	LinkedList<double>myLinked;
	while(ch=='y'){
		cout<<"Enter your choice:";
		cin>>choice;
		if(datatype=="int"){
			//LinkedList<int>myLinked;
			if(choice=="a"){
				char op;
				cout<<"Do you like to insert at beginning(y/n):?";
				cin>>op;
				int key1;
				while(op=='y'){
					cout<<"Enter the data to be inserted at beginning:";
					cin>>key1;
					myLinked.insert_at_beg(key1);
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
					myLinked.insert_at_end(key2);
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
					myLinked.insert_at_pos(key3,pos1);
					cout<<"Do you like to insert at position(y/n):?";
					cin>>op3;
				}
			}
		    else if(choice=="d"){
		    	char op4;
				cout<<"Do you like to delete from beginning(y/n):?";
				cin>>op4;
				while(op4=='y'){
					myLinked.delete_from_front();
					cout<<"Do you like to delete from beginning(y/n)?:";
					cin>>op4;
				}
			}
			else if(choice=="e"){
				char op5;
				cout<<"Do you like to delete at end(y/n):?";
				cin>>op5;
				while(op5=='y'){
					myLinked.delete_at_end();
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
					myLinked.delete_at_pos(pos2);
					cout<<"Do you like to delete at position(y/n):?";
					cin>>op6;
				}
			}
			else if(choice=="g"){
				cout<<"Linked List :\n";
				myLinked.display();
			}
			else{
				cout<<"Kindly enter a valid choice\n";
			}
	    }
		else if(datatype=="float"){
			//LinkedList<float>myLinked;
			if(choice=="a"){
				char op;
				cout<<"Do you like to insert at beginning(y/n):?";
				cin>>op;
				float key1;
				while(op=='y'){
					cout<<"Enter the data to be inserted at beginning:";
					cin>>key1;
					myLinked.insert_at_beg(key1);
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
					myLinked.insert_at_end(key2);
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
					myLinked.insert_at_pos(key3,pos1);
					cout<<"Do you like to insert at position(y/n):?";
					cin>>op3;
				}
			}
		    else if(choice=="d"){
		    	char op4;
				cout<<"Do you like to delete from beginning(y/n):?";
				cin>>op4;
				while(op4=='y'){
					myLinked.delete_from_front();
					cout<<"Do you like to delete from beginning(y/n)?:";
					cin>>op4;
				}
			}
			else if(choice=="e"){
				char op5;
				cout<<"Do you like to delete at end(y/n):?";
				cin>>op5;
				while(op5=='y'){
					myLinked.delete_at_end();
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
					myLinked.delete_at_pos(pos2);
					cout<<"Do you like to delete at position(y/n):?";
					cin>>op6;
				}
			}
			else if(choice=="g"){
				cout<<"Linked List :\n";
				myLinked.display();
			}
			else{
				cout<<"Kindly enter valid choice \n";
			}
		}
		else if(datatype=="char"){
			//LinkedList<char>myLinked;
			if(choice=="a"){
				char op;
				cout<<"Do you like to insert at beginning(y/n):?";
				cin>>op;
				char key1;
				while(op=='y'){
					cout<<"Enter the data to be inserted at beginning:";
					cin>>key1;
					myLinked.insert_at_beg(key1);
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
					myLinked.insert_at_end(key2);
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
					myLinked.insert_at_pos(key3,pos1);
					cout<<"Do you like to insert at position(y/n):?";
					cin>>op3;
				}
			}
		    else if(choice=="d"){
		    	char op4;
				cout<<"Do you like to delete from beginning(y/n):?";
				cin>>op4;
				while(op4=='y'){
					myLinked.delete_from_front();
					cout<<"Do you like to delete from beginning(y/n)?:";
					cin>>op4;
				}
			}
			else if(choice=="e"){
				char op5;
				cout<<"Do you like to delete at end(y/n):?";
				cin>>op5;
				while(op5=='y'){
					myLinked.delete_at_end();
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
					myLinked.delete_at_pos(pos2);
					cout<<"Do you like to delete at position(y/n):?";
					cin>>op6;
				}
			}
			else if(choice=="g"){
				cout<<"Linked List :\n";
				myLinked.display();
			}
			else{
				cout<<"Kindly enter valid choice \n";
			}
	    }
	    else{
	    	cout<<"Kindly enter a valid choice...";
		}
		cout<<"Do you like to do more operations on LinkedList(y/n)?:";
		cin>>ch;
    }
}

