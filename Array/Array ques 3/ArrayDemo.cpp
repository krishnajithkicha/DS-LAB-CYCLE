#include "Array.cpp"
using namespace std;
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
				cout<<"Enter 9 to search using Linear search"<<endl;
				cout<<"Enter 10 to search using Binary search"<<endl;
				cout<<"Enter 11 to sort using selection sort"<<endl;
				cout<<"Enter 12 to sort using bubble sort"<<endl;
				cout<<"Enter 13 to sort using insertion sort"<<endl;
				cout<<"Enter 14 to sort using quick sort"<<endl;
				cout<<"Enter 15 to sort using merge sort"<<endl;
				cout<<"Enter 16 to rotate clockwise"<<endl;
				cout<<"Enter 17 to rotate anticlockwise"<<endl;
				cout<<"Enter 18 to find distinct element"<<endl;
				cout<<"Enter 19 to find frequency of elements"<<endl;
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
				if(op==9){
					int elem;
					cout<<"Enter the element to search:";
					cin>>elem;
					int lin=myArray.linear_search(elem);
					cout<<"Element found at :"<<lin<<endl;
				}
				if(op==10){
					int ele;
					cout<<"Enter the element to search:";
					cin>>ele;
					int bin=myArray.binary_search(ele);
					cout<<"Element found at:"<<bin<<endl;
				}
				if(op==11){
					myArray.selection_sort();
					cout<<"After selection sort:"<<myArray<<endl;
				}
				if(op==12){
					myArray.bubble_sort();
					cout<<"After bubble sort:"<<myArray<<endl;
				}
				if(op==13){
					myArray.insertion_sort();
					cout<<"After insertion sort:"<<myArray<<endl;
				}
				if(op==14){
					int lb=myArray.get_LB();
					int ub=myArray.get_UB();
					myArray.quick_sort(lb,ub);
					cout<<"After quick sort:"<<myArray<<endl;
				}
				if(op==15){
					int lb=myArray.get_LB();
					int ub=myArray.get_UB();
					myArray.merge_sort(lb,ub);
					cout<<"After merge sort:"<<myArray<<endl;
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
				cout<<"Enter 9 to search using Linear search"<<endl;
				cout<<"Enter 10 to search using Binary search"<<endl;
				cout<<"Enter 11 to sort using selection sort"<<endl;
				cout<<"Enter 12 to sort using bubble sort"<<endl;
				cout<<"Enter 13 to sort using insertion sort"<<endl;
				cout<<"Enter 14 to sort using quick sort"<<endl;
				cout<<"Enter 15 to sort using merge sort"<<endl;
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
				if(op==9){
					float elem;
					cout<<"Enter the element to search:";
					cin>>elem;
					int lin=myArray.linear_search(elem);
					cout<<"Element found at :"<<lin<<endl;
				}
				if(op==10){
					float ele;
					cout<<"Enter the element to search:";
					cin>>ele;
					int bin=myArray.binary_search(ele);
					cout<<"Element found at:"<<bin<<endl;
				}
				if(op==11){
					myArray.selection_sort();
					cout<<"After selection sort:"<<myArray<<endl;
				}
				if(op==12){
					myArray.bubble_sort();
					cout<<"After bubble sort:"<<myArray<<endl;
				}
				if(op==13){
					myArray.insertion_sort();
					cout<<"After insertion sort:"<<myArray<<endl;
				}
				if(op==14){
					int lb=myArray.get_LB();
					int ub=myArray.get_UB();
					myArray.quick_sort(lb,ub);
					cout<<"After quick sort:"<<myArray<<endl;
				}
				if(op==15){
					int lb=myArray.get_LB();
					int ub=myArray.get_UB();
					myArray.merge_sort(lb,ub);
					cout<<"After merge sort:"<<myArray<<endl;
				}
				if(op==16){
					
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
				cout<<"Enter 9 to search using Linear search"<<endl;
				cout<<"Enter 10 to search using Binary search"<<endl;
				cout<<"Enter 11 to sort using selection sort"<<endl;
				cout<<"Enter 12 to sort using bubble sort"<<endl;
				cout<<"Enter 13 to sort using insertion sort"<<endl;
				cout<<"Enter 14 to sort using quick sort"<<endl;
				cout<<"Enter 15 to sort using merge sort"<<endl;
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
				if(op==9){
					char elem;
					cout<<"Enter the element to search:";
					cin>>elem;
					int lin=myArray.linear_search(elem);
					cout<<"Element found at :"<<lin<<endl;
				}
				if(op==10){
					char ele;
					cout<<"Enter the element to search:";
					cin>>ele;
					int bin=myArray.binary_search(ele);
					cout<<"Element found at:"<<bin<<endl;
				}
				if(op==11){
					myArray.selection_sort();
					cout<<"After selection sort:"<<myArray<<endl;
				}
				if(op==12){
					myArray.bubble_sort();
					cout<<"After bubble sort:"<<myArray<<endl;
				}
				if(op==13){
					myArray.insertion_sort();
					cout<<"After insertion sort:"<<myArray<<endl;
				}
				if(op==14){
					int lb=myArray.get_LB();
					int ub=myArray.get_UB();
					myArray.quick_sort(lb,ub);
					cout<<"After quick sort:"<<myArray<<endl;
				}
				if(op==15){
					int lb=myArray.get_LB();
					int ub=myArray.get_UB();
					myArray.merge_sort(lb,ub);
					cout<<"After merge sort:"<<myArray<<endl;
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
