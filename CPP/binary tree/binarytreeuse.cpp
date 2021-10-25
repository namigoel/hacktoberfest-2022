#include<iostream>
#include "binarytree.h"
#include<queue>
using namespace std;


void printTree(BinaryTreeNode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root-> data<<":";
    if(root-> left != NULL){
        cout<<"L"<<root->left->data;
    }
    if(root-> right != NULL){
        cout<<"R"<<root->right->data;
    }
    cout<<endl;
    printTree(root->left);
    printTree(root->right);

}
//taking input
BinaryTreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter Root data"<<endl;
    cin>>rootData;

    if(rootData == -1){
        return NULL;
    }
    BinaryTreeNode<int>* root = new  BinaryTreeNode<int> (rootData);
    BinaryTreeNode<int>* leftchild = takeInput();
    BinaryTreeNode<int>* rightchild = takeInput();
    root->left = leftchild;
    root->right = rightchild;
    return root;
}
//TAKING INPUT LEVELWISE
BinaryTreeNode<int>* takeInputLevelWise(){
   int rootData;
    cout<<"Enter Root data"<<endl;
    cin>>rootData;

    if(rootData == -1){
        return NULL;
    }
    BinaryTreeNode<int>* root = new  BinaryTreeNode<int> (rootData);
    queue <BinaryTreeNode<int>*>pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size() != 0){
        BinaryTreeNode<int>* front = pendingnodes.front();
        pendingnodes.pop();
        cout<<"enter left child"<< front->data<<endl;

        int leftChildData;
        cin>>leftChildData;
        if(leftChildData != -1){
          BinaryTreeNode<int>* child= new BinaryTreeNode<int>(leftChildData);
          front->left =child;
          pendingnodes.push(child);
        }
        cout<<"enter right child"<< front->data<<endl;
        int rightChildData;
        cin>>rightChildData;
        if(rightChildData != -1){
          BinaryTreeNode<int>* child= new BinaryTreeNode<int>(rightChildData);
          front->right =child;
          pendingnodes.push(child);
        }
        return root;

    }


}

// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1 
int main(){
 /*
  BinaryTreeNode<int>* root = new BinaryTreeNode<int>(1);
  BinaryTreeNode<int>* node1 = new BinaryTreeNode<int>(2);
  BinaryTreeNode<int>* node2  = new BinaryTreeNode<int>(3);
  root->left =node1;
  root->right =node2;
  */
  BinaryTreeNode<int>* root = takeInputLevelWise();
  printTree(root);
  
  delete(root);
}
