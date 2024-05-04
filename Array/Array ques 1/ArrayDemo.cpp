#include "Array.cpp"
int main(){
	cout<<"Start the program(y/n)?:";
	char choice;
	cin>>choice;
	while (choice=='y'){
		cout<<"Enter 1 to create integer array"<<endl;
		cout<<"Enter 2 to create floating point array"<<endl;
		cout<<"Enter 3 to create character array"<<endl;
		cout<<"Enter your choice:";
		int opt;
		cin>>opt;
		if (opt==1){
			Array<int> myArray;
			cout<<"Start operations(y/n)?:";
			char ch;
			cin>>ch;
			while(ch=='y'){
				cout<<"Enter 1 to insert elements to the beginning of the array"<<endl;
				cout<<"Enter 2 to insert elements to the end of the array"<<endl;
				cout<<"Enter 3 to insert element to a specified position"<<endl;
				cout<<"Enter 4 to delete an element from beginning"<<endl;
				cout<<"Enter 5 to delete an element from end"<<endl;
				cout<<"Enter 6 to delete an element from an index"<<endl;
				cout<<"Enter 7 to get the index of an element"<<endl;
				cout<<"Enter 8 to display"<<endl;
				cout<<"Enter your choice:";				
				int op;
				cin>>op;
				if (op==1){
					cout<<"Insertion at beginning"<<endl;
					cout<<"Enter the key:";
					int k;
					cin>>k;
					myArray.insert_at_beg(k);
				}
				if (op==2){
					cout<<"Insertion at end"<<endl;
					cout<<"Enter the key:";
					int k;
					cin>>k;
					myArray.insert_at_end(k);
				}
				if (op==3){
					cout<<"Insertion at position"<<endl;
					cout<<"Enter the position:";
					int pos;
					cin>>pos;
					cout<<"Enter the key:";
					int k;
					cin>>k;
					myArray.insert_at_pos(pos,k);
				}
				if (op==4){
					cout<<"Deleting from beginning"<<endl;
					myArray.delete_from_beg();
				}
				if (op==5){
					cout<<"Deleting from end"<<endl;
					myArray.delete_at_end();
				}
				if (op==6){
					cout<<"Deleting from an index"<<endl;
					cout<<"Enter the index:";
					int ind;
					cin>>ind;
					myArray.delete_at_pos(ind);		
						
				}
				if (op==7){
					cout<<"Finding the index of an element"<<endl;
					cout<<"Enter the element:";
					int ele;
					cin>>ele;
					int ind=myArray.find_index(ele);
					if (ind==-1){
						cout<<"Element not found"<<endl;
					}
					else{
						cout<<"Element found at position:"<<ind<<endl;
					}
				}
				if (op==8){
					cout<<"The array is:";
					myArray.display();
				}
				cout<<"Do you want to continue(y/n)?:";
				cin>>ch;
			}
		}
		if (opt==2){
			Array<float> myArray;
			cout<<"Start operations(y/n)?:";
			char ch;
			cin>>ch;
			while(ch=='y'){
				cout<<"Enter 1 to insert elements to the beginning of the array"<<endl;
				cout<<"Enter 2 to insert elements to the end of the array"<<endl;
				cout<<"Enter 3 to insert element to a specified position"<<endl;
				cout<<"Enter 4 to delete an element from beginning"<<endl;
				cout<<"Enter 5 to delete an element from end"<<endl;
				cout<<"Enter 6 to delete an element from an index"<<endl;
				cout<<"Enter 7 to get the index of an element"<<endl;
				cout<<"Enter 8 to display"<<endl;
				cout<<"Enter your choice:";
				int op;
				cin>>op;
				if (op==1){
					cout<<"Insertion at beginning"<<endl;
					cout<<"Enter the key:";
					float k;
					cin>>k;
					myArray.insert_at_beg(k);
				}
				if (op==2){
					cout<<"Insertion at end"<<endl;
					cout<<"Enter the key:";
				    float k;
					cin>>k;
					myArray.insert_at_end(k);
				}
				if (op==3){
					cout<<"Insertion at position"<<endl;
					cout<<"Enter the position:";
					int pos;
					cin>>pos;
					cout<<"Enter the key:";
					float k;
					cin>>k;
					myArray.insert_at_pos(pos,k);
				}
				if (op==4){
					cout<<"Deleting from beginning"<<endl;
					myArray.delete_from_beg();
				}
				if (op==5){
					cout<<"Deleting from end"<<endl;
					myArray.delete_at_end();
				}
				if (op==6){
					cout<<"Deleting from an index"<<endl;
					cout<<"Enter the index:";
					int ind;
					cin>>ind;
					myArray.delete_at_pos(ind);	
				}
				if (op==7){
					cout<<"Finding the index of an element"<<endl;
					cout<<"Enter the element:";
					float ele;
					cin>>ele;
					int ind=myArray.find_index(ele);
					if (ind==-1){
						cout<<"Element not found"<<endl;
					}
					else{
						cout<<"Element found at position:"<<ind<<endl;
					}
				}
				if (op==8){
					cout<<"The array is:";
					myArray.display();
				}						
				
				cout<<"Do you want to continue(y/n)?:";
				cin>>ch;
			}
		}
		if (opt==3){
			Array<char> myArray;
			cout<<"Start operations(y/n)?:";
			char ch;
			cin>>ch;
			while(ch=='y'){
				cout<<"Enter 1 to insert elements to the beginning of the array"<<endl;
				cout<<"Enter 2 to insert elements to the end of the array"<<endl;
				cout<<"Enter 3 to insert element to a specified position"<<endl;
				cout<<"Enter 4 to delete an element from beginning"<<endl;
				cout<<"Enter 5 to delete an element from end"<<endl;
				cout<<"Enter 6 to delete an element from an index"<<endl;
				cout<<"Enter 7 to get the index of an element"<<endl;
				cout<<"Enter 8 to display"<<endl;
				cout<<"Enter your choice:";
				int op;
				cin>>op;
				if (op==1){
					cout<<"Insertion at beginning"<<endl;
					cout<<"Enter the key:";
					char k;
					cin>>k;
					myArray.insert_at_beg(k);
				}
				if (op==2){
					cout<<"Insertion at end"<<endl;
					cout<<"Enter the key:";
					char k;
					cin>>k;
					myArray.insert_at_end(k);
				}
				if (op==3){
					cout<<"Insertion at position"<<endl;
					cout<<"Enter the position:";
					int pos;
					cin>>pos;
					cout<<"Enter the key:";
					char k;
					cin>>k;
					myArray.insert_at_pos(pos,k);
				}
				if (op==4){
					cout<<"Deleting from beginning"<<endl;
					myArray.delete_from_beg();
				}
				if (op==5){
					cout<<"Deleting from end"<<endl;
					myArray.delete_at_end();
				}
				if (op==6){
					cout<<"Deleting from an index"<<endl;
					cout<<"Enter the index:";
					int ind;
					cin>>ind;
					myArray.delete_at_pos(ind);		
				}
				if (op==7){
					cout<<"Finding the index of an element"<<endl;
					cout<<"Enter the element:";
					char ele;
					cin>>ele;
					int ind=myArray.find_index(ele);
					if (ind==-1){
						cout<<"Element not found"<<endl;
					}
					else{
						cout<<"Element found at position:"<<ind<<endl;
					}
				}
				if (op==8){
					cout<<"The array is:";
					myArray.display();
				}
				cout<<"Do you want to continue(y/n)?:";
				cin>>ch;
			}
		}
		cout<<"Continue with another template(y/n):";
		cin>>choice ;
		}
	cout<<"Exiting program,Thank you!"<<endl;
}
