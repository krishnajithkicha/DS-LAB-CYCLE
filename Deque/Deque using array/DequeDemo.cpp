#include"Deque.cpp"
int main() {
    cout<<"Enter 1 to insert an element to the front of the queue"<<endl;
    cout<<"Enter 2 to insert an element to the back of the queue"<<endl;
    cout<<"Enter 3 to delete an element from the front of the queue"<<endl;
    cout<<"Enter 4 to delete an element from the back of the queue"<<endl;
    cout<<"Enter 5 to display the queue"<<endl;
    cout<<endl;
    cout<<"Start the program (y/n)?:";
    char choice;
    cin>>choice;
    cout<<endl;
    while (choice=='y') {
		cout<<"Enter 1 to create integer queue"<<endl;
		cout<<"Enter 2 to create floating point queue"<<endl;
		cout<<"Enter 3 to create character queue"<<endl;
		cout<<"Enter your choice:";       
        int opt;
        cin>>opt;
        cout<<endl;
        if (opt==1) {
        	cout<<"Enter size:";
        	int s;
        	cin>>s;
            Deque<int> myqueue(s);
            cout<<"Start operations (y/n)?:";
            char ch;
            cin>>ch;
            cout<<endl;
            while (ch=='y') {
                cout<<"Enter your choice:";
                int op;
                cin>>op;
                cout<<endl;
                if (op==1) {
                    cout<<"inserting an element to the front"<<endl;
                    cout<<"Enter the data:";
                    int data;
                    cin>>data;
                    myqueue.insert_front(data);
                    cout<<endl;
                }
                if (op==2) {
	                cout<<"inserting an element to the back"<<endl;
	                cout<<"Enter the data:";
	                int data;
	                cin>>data;
	                myqueue.insert_back(data);
	                
	                cout<<endl;
	            }
	            if (op==3) {
	                cout<<"Deleting an element from the front"<<endl;
	                myqueue.pop_front();
	                cout<<endl;
	            }
	            if (op==4) {
	                cout<<"Deleting an element from the back"<<endl;
	                myqueue.pop_back();
	                cout<<endl;
	            }
	            if (op==5) {
	                cout<<"Displaying the queue"<<endl;
	                myqueue.display();
	                cout<<endl;
	            }
                cout<<"Do you want to continue (y/n)?:";
                cin>>ch;
                cout<<endl;
            }
        }
		if (opt==2){
			cout<<"Enter size:";
        	int s;
        	cin>>s;
			Deque<float> myqueue(s);
            cout<<"Start operations (y/n)?:";
            char ch;
            cin>>ch;
            cout<<endl;
            while (ch=='y') {
                cout<<"Enter your choice:";
                int op;
                cin>>op;
                cout<<endl;
                if (op==1) {
                    cout<<"inserting an element to the front"<<endl;
                    cout<<"Enter the data:";
                    float data;
                    cin>>data;
                    myqueue.insert_front(data);
                    cout<<endl;
                }
                if (op==2) {
	                cout<<"inserting an element to the back"<<endl;
	                cout<<"Enter the data:";
	                float data;
	                cin>>data;
	                myqueue.insert_back(data);
	                cout<<endl;
	            }
	            if (op==3) {
	                cout<<"Deleting an element from the front"<<endl;
	                myqueue.pop_front();
	                cout<<endl;
	            }
	            if (op==4) {
	                cout<<"Deleting an element from the back"<<endl;
	                myqueue.pop_back();
	                cout<<endl;
	            }
	            if (op==5) {
	                cout<<"Displaying the queue"<<endl;
	                myqueue.display();
	                cout<<endl;
	            }
                cout<<"Do you want to continue (y/n)?:";
                cin>>ch;
                cout<<endl;
            }
			
		}
		if (opt==3){
			cout<<"Enter size:";
        	int s;
        	cin>>s;
			Deque<char> myqueue(s);
            cout<<"Start operations (y/n)?:";
            char ch;
            cin>>ch;
            cout<<endl;
            while (ch=='y') {
                cout<<"Enter your choice:";
                int op;
                cin>>op;
                cout<<endl;
                if (op==1) {
                    cout<<"inserting an element to the front"<<endl;
                    cout<<"Enter the data:";
                    char data;
                    cin>>data;
                    myqueue.insert_front(data);
                    cout<<endl;
                }
                if (op==2) {
	                cout<<"inserting an element to the back"<<endl;
	                cout<<"Enter the data:";
	                char data;
	                cin>>data;
	                myqueue.insert_back(data);;
	                cout<<endl;
	            }
	            if (op==3) {
	                cout<<"Deleting an element from the front"<<endl;
					myqueue.pop_front();
	                cout<<endl;
	            }
	            if (op==4) {
	                cout<<"Deleting an element from the back"<<endl;
					myqueue.pop_back();
	                cout<<endl;
	            }
	            if (op==5) {
	                cout<<"Displaying the queue"<<endl;
	                myqueue.display();
	                cout<<endl;
	            }
                cout<<"Do you want to continue (y/n)?:";
                cin>>ch;
                cout<<endl;
            }
			
		}      
        cout<<"Continue with another data type (y/n):";
        cin>>choice;
        cout<<endl;
    }
    
    cout<<"Exiting program. Thank you!"<<endl;
    return 0;
}

