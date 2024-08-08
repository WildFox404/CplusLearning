#include<iostream>
using namespace std;

class Node{
  public:
    int data;
    Node *left;
    Node *right;

    Node(int value){
      data=value;
      left=nullptr;
      right=nullptr;
    }
};

class BinaryTree{
  public: 
    Node* root;

    BinaryTree(){
      root=nullptr;
    }

    void insert(int value){
      root =insertRecursive(root,value);
    }

    Node* insertRecursive(Node *root,int value){
      if(root==nullptr){
        return new Node(value);
      }

      if(value<root->data){
        root->left=insertRecursive(root->left,value);
      }else{
        root->right=insertRecursive(root->right,value);
      }

      return root;
    }
    
    void inorderTraversal(Node *root){
      if(root!=nullptr){
        inorderTraversal(root->left);
        cout<<root->data<<"";
        inorderTraversal(root->right);
      }
    }
};

int main(){
  BinaryTree tree;
  tree.insert(5);
  tree.insert(3);
  tree.insert(7);
  tree.insert(1);
  tree.insert(4);

  tree.inorderTraversal(tree.root);

  return 0;
}
