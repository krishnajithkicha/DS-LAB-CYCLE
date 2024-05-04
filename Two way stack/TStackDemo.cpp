#include"TStack.cpp"
int main(){
	cout<<"Enter 1 to push an element to the front of the stack"<<endl;
    cout<<"Enter 2 to push an element to the back of the stack"<<endl;
    cout<<"Enter 3 to pop an element from the front of the stack"<<endl;
    cout<<"Enter 4 to pop an element from the back of the stack"<<endl;
    cout<<"Enter 5 to peek at the front element of the stack"<<endl;
    cout<<"Enter 6 to peek at the back element of the stack"<<endl;
    cout<<"Enter 7 to display the stack"<<endl;
    cout<<endl;
    cout<<"Start the program (y/n)?:";
    char choice;
    cin>>choice;
    cout<<endl;
    while (choice=='y') {
		cout<<"Enter 1 to create integer stack"<<endl;
		cout<<"Enter 2 to create floating point stack"<<endl;
		cout<<"Enter 3 to create character stack"<<endl;
		cout<<"Enter your choice:";       
        int opt;
        cin>>opt;
        cout<<endl;
        if (opt==1) {
        	cout<<"Enter size:";
        	int s;
        	cin>>s;
            TStack<int> myStack(s);
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
                    cout<<"Pushing an element to the front"<<endl;
                    cout<<"Enter the data:";
                    int data;
                    cin>>data;
                    myStack.pushfront(data);
                    cout<<endl;
                }
                if (op==2) {
	                cout<<"Pushing an element to the back"<<endl;
	                cout<<"Enter the data:";
	                int data;
	                cin>>data;
	                myStack.pushback(data);
	                
	                cout<<endl;
	            }
	            if (op==3) {
	                cout<<"Popping an element from the front"<<endl;
	                myStack.popfront();
	                cout<<endl;
	            }
	            if (op==4) {
	                cout<<"Popping an element from the back"<<endl;
	                myStack.popback();
	                cout<<endl;
	            }
	            if (op==5) {
	                cout<<"Peeking at the front element"<<endl;
	                int peeked=myStack.peekfront();
	                cout<<"Front element:"<<peeked<<endl;
	                cout<<endl;
	            }
	            if (op==6) {
	                cout<<"Peeking at the back element"<<endl;
	                int peeked=myStack.peekback();
	                cout<<"Back element:"<<peeked<<endl;
	                cout<<endl;
	            }
	            if (op==7) {
	                cout<<"Displaying the stack"<<endl;
	                myStack.display();
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
			TStack<float> myStack(s);
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
                    cout<<"Pushing an element to the front"<<endl;
                    cout<<"Enter the data:";
                    float data;
                    cin>>data;
                    myStack.pushfront(data);
                    cout<<endl;
                }
                if (op==2) {
	                cout<<"Pushing an element to the back"<<endl;
	                cout<<"Enter the data:";
	                float data;
	                cin>>data;
	                myStack.pushback(data);
	                cout<<endl;
	            }
	            if (op==3) {
	                cout<<"Popping an element from the front"<<endl;
	                myStack.popfront();
	                cout<<endl;
	            }
	            if (op==4) {
	                cout<<"Popping an element from the back"<<endl;
	                myStack.popback();
	                cout<<endl;
	            }
	            if (op==5) {
	                cout<<"Peeking at the front element"<<endl;
	                float peeked=myStack.peekfront();
	                cout<<"Front element:"<<peeked<<endl;
	                cout<<endl;
	            }
	            if (op==6) {
	                cout<<"Peeking at the back element"<<endl;
	                float peeked=myStack.peekback();
	                cout<<"Back element:"<<peeked<<endl;
	                cout<<endl;
	            }
	            if (op==7) {
	                cout<<"Displaying the stack"<<endl;
	                myStack.display();
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
			TStack<char> myStack(s);
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
                    cout<<"Pushing an element to the front"<<endl;
                    cout<<"Enter the data:";
                    char data;
                    cin>>data;
                    myStack.pushfront(data);
                    cout<<endl;
                }
                if (op==2) {
	                cout<<"Pushing an element to the back"<<endl;
	                cout<<"Enter the data:";
	                char data;
	                cin>>data;
	                myStack.pushback(data);;
	                cout<<endl;
	            }
	            if (op==3) {
	                cout<<"Popping an element from the front"<<endl;
					myStack.popfront();
	                cout<<endl;
	            }
	            if (op==4) {
	                cout<<"Popping an element from the back"<<endl;
					myStack.popback();
	                cout<<endl;
	            }
	            if (op==5) {
	                cout<<"Peeking at the front element"<<endl;
	                char peeked=myStack.peekfront();
	                cout<<"Front element:"<<peeked<<endl;
	                cout<<endl;
	            }
	            if (op==6) {
	                cout<<"Peeking at the back element"<<endl;
	                char peeked=myStack.peekback();
	                cout<<"Back element:"<<peeked<<endl;
	                cout<<endl;
	            }
	            if (op==7) {
	                cout<<"Displaying the stack"<<endl;
	                myStack.display();
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
