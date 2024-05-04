#include"Queue.cpp"
int main(){
	cout<<"Do you like to perform operations on Queue using Linked List(y/n)?:";
	char ch;
	cin>>ch;
	string choice;
	cout<<"The various operations on Queue using Linked List are:\na. Insert elements to the Rear of the queue\nb. Delete elements from the Front of the queue.\nc. IS EMPTY\nd. IS FULL\ne. UNDERFLOW\nf. OVERFLOW\ng. Display \n";
	string datatype;
	cout<<"Enter the datatype(int/float/char):";
	cin>>datatype;
	int limit;
	cout<<"Enter the size:";
	cin>>limit;
	LinkedQueue<double>myLQueue;
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
	    		myLQueue.EnQueue(key);
    			}		
			}
			else if(choice=="b"){
				myLQueue.DeQueue();
				cout<<"After deleting from the front end :";
				myLQueue.display();
			}
			else if(choice=="c"){
				bool empty=myLQueue.isEmpty();
				if(empty==true){
					cout<<"Queue is empty \n";
				}
				else{
					cout<<"Queue isnt empty \n";
					myLQueue.display();
				}
			}
			/*else if(choice=="d"){
				bool full=myLQueue.isFull();
				if(full==true){
					cout<<"Queue is full \n";
				}
				else{
					cout<<"Queue isnt full \n";
				}
			}*/
			else if(choice=="e"){
				int i;
				for(i=limit;i>=-1;i--){
					myLQueue.DeQueue();
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
					myLQueue.EnQueue(key);
				}
				if(i==limit){
					cout<<"Enter the values :";
					cin>>key;
					myLQueue.EnQueue(key);
					cout<<"Queue overflow \n";
				}
			}
			else if(choice=="g"){
				myLQueue.display();
			}
			else{
				cout<<"Kindly enter a valid choice \n";
			}
		}
		else if(datatype=="float"){
			//Queue<int>myQueue;
			if(choice=="a"){
				float key;
				for(int i=0;i<limit;i++){
				cout<<"Enter the element to insert to queue:";
	    		cin>>key;
	    		myLQueue.EnQueue(key);
    			}		
			}
			else if(choice=="b"){
				myLQueue.DeQueue();
				cout<<"After deleting from the front end :";
				myLQueue.display();
			}
			else if(choice=="c"){
				bool empty=myLQueue.isEmpty();
				if(empty==true){
					cout<<"Queue is empty \n";
				}
				else{
					cout<<"Queue isnt empty \n";
					myLQueue.display();
				}
			}
			/*else if(choice=="d"){
				bool full=myLQueue.isFull();
				if(full==true){
					cout<<"Queue is full \n";
				}
				else{
					cout<<"Queue isnt full \n";
				}
			}*/
			else if(choice=="e"){
				int i;
				for( i=limit;i>=-1;i--){
					myLQueue.DeQueue();
				}
				if(i==-1){
					cout<<"Queue underflow \n";
				}
			}
			else if(choice=="f"){
				float key;
				int i;
				for(i=0;i<limit;i++){
					cout<<"Enter the values :";
					cin>>key;
					myLQueue.EnQueue(key);
				}
				if(i==limit){
					cout<<"Enter the values :";
					cin>>key;
					myLQueue.EnQueue(key);
					cout<<"Queue overflow \n";
				}
			}
			else if(choice=="g"){
				myLQueue.display();
			}
			else{
				cout<<"Kindly enter a valid choice \n";
			}
		}
		else if(datatype=="char"){
			//Queue<int>myQueue;
			if(choice=="a"){
				char key;
				for(int i=0;i<limit;i++){
				cout<<"Enter the element to insert to queue:";
	    		cin>>key;
	    		myLQueue.EnQueue(key);
    			}		
			}
			else if(choice=="b"){
				myLQueue.DeQueue();
				cout<<"After deleting from the front end :";
				myLQueue.display();
			}
			else if(choice=="c"){
				bool empty=myLQueue.isEmpty();
				if(empty==true){
					cout<<"Queue is empty \n";
				}
				else{
					cout<<"Queue isnt empty \n";
					myLQueue.display();
				}
			}
			/*else if(choice=="d"){
				bool full=myQueue.isFull();
				if(full==true){
					cout<<"Queue is full \n";
				}
				else{
					cout<<"Queue isnt full \n";
				}
			}*/
			else if(choice=="e"){
				int i;
				for( i=limit;i>=-1;i--){
					myLQueue.DeQueue();
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
					myLQueue.EnQueue(key);
				}
				if(i==limit){
					cout<<"Enter the values :";
					cin>>key;
					myLQueue.EnQueue(key);
					cout<<"Queue overflow \n";
				}
			}
			else if(choice=="g"){
				myLQueue.display();
			}
			else{
				cout<<"Kindly enter a valid choice \n";
			}
		}
		else{
			cout<<"Kindly enter a valid choice\n";
		}
		cout<<"Do you want to perform more operations on Queue using Linked List(y/n)?:";
		cin>>ch;
		}
}


