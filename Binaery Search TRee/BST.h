#include<iostream>
using namespace std;
template<class T>
class Node{
	public:
		Node(T);
		T data;
		Node* left;
		Node* right;
};
template<class T>
class Tree{
	Node<T>* root;
	public:
		Tree();
		Node<T>* insertH(Node<T>*,int);
		bool searchH(Node<T>*,int);
		void insert(int);
		bool search(int);
		void inOrder();
		void inorderTraversal(Node<T>*);
		Node<T>* findminNode(Node<T>*);
		Node<T>* deleteH(Node<T>*,int);
		void deletenode(int);
		
};
