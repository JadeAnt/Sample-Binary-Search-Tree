#include <iostream>
using namespace std

struct BSTNode{
  int data;
  struct BSTNode* left;
  struct BSTNode* right;
};

BSTNode* GetNewNode(int data){
  BSTNode* newNode = new BSTNode();
  
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;
  
  return newNode;
}

BSTNode* Insert( BSTNode** root, int data){
  if (root == NULL){
    root = GetNewNode(data);
  }
  
  else if(data <= root->data){
    root -> left = Insert(root->left, data);
  }
  else if(data >= root->data){
    root->right = Insert(root->right, data);
  }
  
  return root;
}

BSTNode* Search(BSTNode** root, int data){
  if(root == NULL){
    return False;
  }
  
  else if(root->data == data){
    return True;
  }
  
  else if(data <= root->data){
    return Search(root->left, data);
  }
  
  else{
    return Search(root->right, data);
  }
  
}

int main(){
 BSTNode* root  NULL;
 int number;
 
\*Use insert function to insert 
values into the binary search tree*\

 cout<< "Input number to search for: \n";
 cin>>number;

 if(Search(root,number) == True){
  cout<< number << " Has been found. \n";
 }
 else
    cout<<"Number not found. \n";
    
}
