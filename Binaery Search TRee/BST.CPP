#include"BST.h"
template<class T>
Node<T>::Node(T data){
	this->data=data;
	this->left=NULL;
	this->right=NULL;
}
template<class T>
Node<T>* Tree<T>::insertH(Node<T>* curnode,int val){
	if(curnode==NULL){
		return new Node<T>(val);
	}
	if(val<curnode->data){
		curnode->left=insertH(curnode->left,val);
	}
	if(val>curnode->data){
		curnode->right=insertH(curnode->right,val);
	}
	return curnode;
}
template<class T>
bool Tree<T>::searchH(Node<T>* curnode,int val){
	if(curnode==NULL){
		return false;
	}
	else if(val<curnode->data){
		return searchH(curnode->left,val);
	}
	else if(val>curnode->data){
		return searchH(curnode->right,val);
	}
}
template<class T>
void Tree<T>::inorderTraversal(Node<T>* curnode){
	if(curnode!=NULL){
		inorderTraversal(curnode->left);
		cout<<curnode->data<<" ";
		inorderTraversal(curnode->right);
	}
}
template<class T>
Tree<T>::Tree(){
	root=NULL;
}
template<class T>
void Tree<T>::insert(int val){
	root=insertH(root,val);
}
template<class T>
bool Tree<T>::search(int val){
	return searchH(root,val);
}
template<class T>
void Tree<T>::inOrder(){
	inorderTraversal(root);
	cout<<endl;
}
template<class T>
Node<T>* Tree<T>::findminNode(Node<T>* curnode){
	while(curnode->left!=NULL){
		curnode=curnode->left;
	}
	return curnode;
}
template<class T>
Node<T>* Tree<T>::deleteH(Node<T>* curnode,int val){
	if(curnode==NULL){
		return NULL;
	}
	if(val<curnode->data){
		 curnode->left = deleteH(curnode->left, val);
        }
        else if (val > curnode->data) {
            curnode->right = deleteH(curnode->right, val);
        }
        else {
            if (curnode->left == NULL) {
                Node<T>* temp = curnode->right;
                delete curnode;
                return temp;
            } 
			else if (curnode->right == NULL) {
                Node<T>* temp = curnode->left;
                delete curnode;
                return temp;
            }
            Node<T>* temp = findminNode(curnode->right);
            curnode->data = temp->data;
            curnode->right = deleteH(curnode->right, temp->data);
        }
        return curnode;
    }
template<class T>
void Tree<T>:: deletenode(int val) {
        root = deleteH(root, val);
    }
