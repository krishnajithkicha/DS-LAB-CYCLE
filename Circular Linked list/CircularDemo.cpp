#include"CircularLinked.cpp"
int main(){
	cout<<"Enter 1 to insert an element to the beginning of the linked list"<<endl;
	cout<<"Enter 2 to insert an element to the end of the linked list"<<endl;
	cout<<"Enter 3 to insert an element to a specified position"<<endl;
	cout<<"Enter 4 to delete an element from beginning"<<endl;
	cout<<"Enter 5 to delete an element from end"<<endl;
	cout<<"Enter 6 to delete an element from a specified position"<<endl;
	cout<<"Enter 7 to display"<<endl;
	cout<<endl;
	cout<<"Start the program(y/n)?:";
	char choice;
	cin>>choice;
	cout<<endl;
	while (choice=='y'){
		cout<<"Enter 1 to create integer linked list"<<endl;
		cout<<"Enter 2 to create floating point linked list"<<endl;
		cout<<"Enter 3 to create character linked list"<<endl;
		cout<<"Enter your choice:";
		int opt;
		cin>>opt;
		cout<<endl;
		if (opt==1){
			CircularLinked<int> myCL;
			cout<<"Start operations(y/n)?:";
			char ch;
			cin>>ch;
			cout<<endl;
			while(ch=='y'){
				cout<<"Enter your choice:";				
				int op;
				cin>>op;
				if (op==1){
					cout<<"Insertion at beginning"<<endl;
					cout<<"Enter the key:";
					int k;
					cin>>k;
					myCL.insert_at_beg(k);
					cout<<"Element inserted"<<endl;
					cout<<endl;
				}
				if (op==2){
					cout<<"Insertion at end"<<endl;
					cout<<"Enter the key:";
					int k;
					cin>>k;
					myCL.insert_at_end(k);
					cout<<"Element inserted"<<endl;
					cout<<endl;					
				}
				if (op==3){
					cout<<"Insertion at position"<<endl;
					cout<<"Enter the position:";
					int pos;
					cin>>pos;
					cout<<"Enter the key:";
					int k;
					cin>>k;
					myCL.insert_at_pos(pos,k);
					cout<<"Element inserted"<<endl;
					cout<<endl;
				}
				if (op==4){
					cout<<"Deleting from beginning"<<endl;
					myCL.delete_at_beg();
					cout<<"Element deleted"<<endl;
					cout<<endl;
				}
				if (op==5){
					cout<<"Deleting from end"<<endl;
			    	myCL.delete_at_end();
					cout<<"Element deleted"<<endl;
					cout<<endl;				
				}
				if (op==6){
					cout<<"Deleting from a position"<<endl;
					cout<<"Enter the position:";
					int ind;
					cin>>ind;
					myCL.delete_at_pos(ind);		
					cout<<"Element deleted"<<endl;
					cout<<endl;		
				}
				if (op==7){
					cout<<"The linked list is:";
					myCL.display();
					cout<<endl;
					cout<<endl;
					
				}
				cout<<"Do you want to continue(y/n)?:";
				cin>>ch;
				cout<<endl;
			}
		}
		if (opt==2){
			CircularLinked<float> myCL;
			cout<<"Start operations(y/n)?:";
			char ch;
			cin>>ch;
			cout<<endl;
			while(ch=='y'){
				cout<<"Enter your choice:";	
				int op;
				cin>>op;
				if (op==1){
					cout<<"Insertion at beginning"<<endl;
					cout<<"Enter the key:";
					float k;
					cin>>k;
					myCL.insert_at_beg(k);
					cout<<"Element inserted"<<endl;
					cout<<endl;
				}
				if (op==2){
					cout<<"Insertion at end"<<endl;
					cout<<"Enter the key:";
				    float k;
					cin>>k;
					myCL.insert_at_end(k);
					cout<<"Element inserted"<<endl;
					cout<<endl;
				}
				if (op==3){
					cout<<"Insertion at position"<<endl;
					cout<<"Enter the position:";
					int pos;
					cin>>pos;
					cout<<"Enter the key:";
					float k;
					cin>>k;
					myCL.insert_at_pos(pos,k);
					cout<<"Element inserted"<<endl;
					cout<<endl;
				}
				if (op==4){
					cout<<"Deleting from beginning"<<endl;
					myCL.delete_at_beg();
					cout<<"Element deleted"<<endl;
					cout<<endl;			
				}
				if (op==5){
					cout<<"Deleting from end"<<endl;
					myCL.delete_at_end();
					cout<<"Element deleted"<<endl;
					cout<<endl;			
				}
				if (op==6){
					cout<<"Deleting from a position"<<endl;
					cout<<"Enter the index:";
					int ind;
					cin>>ind;
					myCL.delete_at_pos(ind);
					cout<<"Element deleted"<<endl;
					cout<<endl;				
				}
				if (op==7){
					cout<<"The linked list is:";
					myCL.display();
					cout<<endl;
					cout<<endl;
				}						
				
				cout<<"Do you want to continue(y/n)?:";
				cin>>ch;
				cout<<endl;
			}
		}
		if (opt==3){
			CircularLinked<char> myCL;
			cout<<"Start operations(y/n)?:";
			char ch;
			cin>>ch;
			cout<<endl;
			while(ch=='y'){;
				cout<<"Enter your choice:";	
				int op;
				cin>>op;
				if (op==1){
					cout<<"Insertion at beginning"<<endl;
					cout<<"Enter the key:";
					char k;
					cin>>k;
					myCL.insert_at_beg(k);
					cout<<"Element inserted"<<endl;
					cout<<endl;
				}
				if (op==2){
					cout<<"Insertion at end"<<endl;
					cout<<"Enter the key:";
				    char k;
					cin>>k;
					myCL.insert_at_end(k);
					cout<<"Element inserted"<<endl;
					cout<<endl;				
				}
				if (op==3){
					cout<<"Insertion at position"<<endl;
					cout<<"Enter the position:";
					int pos;
					cin>>pos;
					cout<<"Enter the key:";
					char k;
					cin>>k;
					myCL.insert_at_pos(pos,k);
					cout<<"Element inserted"<<endl;
					cout<<endl;        
				}
				if (op==4){
					cout<<"Deleting from beginning"<<endl;
					myCL.delete_at_beg();
					cout<<"Element deleted"<<endl;
					cout<<endl;		
				}
				if (op==5){
					cout<<"Deleting from end"<<endl;
					myCL.delete_at_end();
					cout<<"Element deleted"<<endl;
					cout<<endl;		
				}
				if (op==6){
					cout<<"Deleting from a position"<<endl;
					cout<<"Enter the index:";
					int ind;
					cin>>ind;
					myCL.delete_at_pos(ind);	
					cout<<"Element deleted"<<endl;
					cout<<endl;		
				}
				if (op==7){
					cout<<"The linked list is:";
					myCL.display();
					cout<<endl;
					cout<<endl;
				}						
				
				cout<<"Do you want to continue(y/n)?:";
				cin>>ch;
				cout<<endl;
			}
		}
		cout<<"Continue with another template(y/n):";
		cin>>choice ;
		cout<<endl;
		}
	cout<<"Exiting program,Thank you!"<<endl;
}
