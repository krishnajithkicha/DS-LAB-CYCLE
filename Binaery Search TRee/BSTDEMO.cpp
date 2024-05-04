#include"BST.CPP"
int main(){
	Tree<int> bst;
    int val;
    int num;
    cout<<"Enter the number of nodes required:";
    cin>>num;
    for(int i=0;i<num;i++){
    	cout<<"Enter the value for node:";
    	cin>>val;
    	bst.insert(val);
	}
    cout << "Printing binary tree using inorder traversal: ";
    bst.inOrder();

    int sval;
    cout<<"Enter the value to search in Binary search tree:";
    cin>>sval;
    if(sval==bst.search(sval)){
		cout<<"Value present in BST"<<endl;    	
	}
	else{
		cout<<"Value not present in BST";
	}
	int dval;
	cout<<"Enter the node to delete:";
	cin>>dval;
	bst.deletenode(dval);
	cout<<"After deleting:";
    bst.inOrder();
    return 0;

}
