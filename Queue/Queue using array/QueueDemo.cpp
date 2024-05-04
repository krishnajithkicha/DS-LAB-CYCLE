#include"Queue.cpp"
int main(){
	cout<<"Do you like to perform operations on Queue(y/n)?:";
	char ch;
	cin>>ch;
	string choice;
	cout<<"The various operations on Queue are:a. Insert elements to the Rear of the queue\nb. Delete elements from the Front of the queue.\nc. IS EMPTY\nd. IS FULL\ne. UNDERFLOW\nf. OVERFLOW\ng. Display \n";
	string datatype;
	cout<<"Enter the datatype(int/float/char):";
	cin>>datatype;
	int limit;
	cout<<"Enter the size:";
	cin>>limit;
	Queue<double>myQueue;
	while(ch=='y'){
		cout<<"Enter your choice:";
		cin>>choice;
		if(datatype=="int"){
			//Queue<int>myQueue;
			if(choice=="a"){
				int key;
				for(int i=0;i<limit;i++){
				cout<<"Enter the element to insert to queue:";
	    		cin>>key;
	    		myQueue.EnQueue(key);
    			}		
			}
			else if(choice=="b"){
				myQueue.DeQueue();
				cout<<"After deleting from the front end :";
				myQueue.display();
			}
			else if(choice=="c"){
				bool empty=myQueue.isEmpty();
				if(empty==true){
					cout<<"Queue is empty \n";
				}
				else{
					cout<<"Queue isnt empty \n";
					myQueue.display();
				}
			}
			else if(choice=="d"){
				bool full=myQueue.isFull();
				if(full==true){
					cout<<"Queue is full \n";
				}
				else{
					cout<<"Queue isnt full \n";
				}
			}
			else if(choice=="e"){
				int i;
				for( i=limit;i>=-1;i--){
					myQueue.DeQueue();
				}
				if(i==-1){
					cout<<"Queue underflow \n";
				}
			}
			else if(choice=="f"){
				int key,i;
				for( i=0;i<limit;i++){
					cout<<"Enter the values :";
					cin>>key;
					myQueue.EnQueue(key);
				}
				if(i==limit){
					cout<<"Enter the values :";
					cin>>key;
					myQueue.EnQueue(key);
					cout<<"Queue overflow \n";
				}
			}
			else if(choice=="g"){
				myQueue.display();
			}
			else{
				cout<<"Kindly enter a valid choice \n";
			}
		}
		else if(datatype=="float"){
			//Queue<int>myQueue;
			if(choice=="a"){
				int key;
				for(int i=0;i<limit;i++){
				cout<<"Enter the element to insert to queue:";
	    		cin>>key;
	    		myQueue.EnQueue(key);
    			}		
			}
			else if(choice=="b"){
				myQueue.DeQueue();
				cout<<"After deleting from the front end :";
				myQueue.display();
			}
			else if(choice=="c"){
				bool empty=myQueue.isEmpty();
				if(empty==true){
					cout<<"Queue is empty \n";
				}
				else{
					cout<<"Queue isnt empty \n";
					myQueue.display();
				}
			}
			else if(choice=="d"){
				bool full=myQueue.isFull();
				if(full==true){
					cout<<"Queue is full \n";
				}
				else{
					cout<<"Queue isnt full \n";
				}
			}
			else if(choice=="e"){
				int i;
				for( i=limit;i>=-1;i--){
					myQueue.DeQueue();
				}
				if(i==-1){
					cout<<"Queue underflow \n";
				}
			}
			else if(choice=="f"){
				int key,i;
				for( i=0;i<limit;i++){
					cout<<"Enter the values :";
					cin>>key;
					myQueue.EnQueue(key);
				}
				if(i==limit){
					cout<<"Enter the values :";
					cin>>key;
					myQueue.EnQueue(key);
					cout<<"Queue overflow \n";
				}
			}
			else if(choice=="g"){
				myQueue.display();
			}
			else{
				cout<<"Kindly enter a valid choice \n";
			}
		}
		else if(datatype=="char"){
			//Queue<int>myQueue;
			if(choice=="a"){
				int key;
				for(int i=0;i<limit;i++){
				cout<<"Enter the element to insert to queue:";
	    		cin>>key;
	    		myQueue.EnQueue(key);
    			}		
			}
			else if(choice=="b"){
				myQueue.DeQueue();
				cout<<"After deleting from the front end :";
				myQueue.display();
			}
			else if(choice=="c"){
				bool empty=myQueue.isEmpty();
				if(empty==true){
					cout<<"Queue is empty \n";
				}
				else{
					cout<<"Queue isnt empty \n";
					myQueue.display();
				}
			}
			else if(choice=="d"){
				bool full=myQueue.isFull();
				if(full==true){
					cout<<"Queue is full \n";
				}
				else{
					cout<<"Queue isnt full \n";
				}
			}
			else if(choice=="e"){
				int i;
				for( i=limit;i>=-1;i--){
					myQueue.DeQueue();
				}
				if(i==-1){
					cout<<"Queue underflow \n";
				}
			}
			else if(choice=="f"){
				int key,i;
				for( i=0;i<limit;i++){
					cout<<"Enter the values :";
					cin>>key;
					myQueue.EnQueue(key);
				}
				if(i==limit){
					cout<<"Enter the values :";
					cin>>key;
					myQueue.EnQueue(key);
					cout<<"Queue overflow \n";
				}
			}
			else if(choice=="g"){
				myQueue.display();
			}
			else{
				cout<<"Kindly enter a valid choice \n";
			}
		}
		else{
			cout<<"Kindly enter a valid choice\n";
		}
		cout<<"Do you want to perform more operations on Queue(y/n)?:";
		cin>>ch;
		}
		}

