

//DOUBLE LINKEDLIST using RECCURSION
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next,*prev;
    Node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};

Node *Create(int arr[],int i,int n,Node *back){
    if(i==n)return NULL;
    
    Node *temp = new Node(arr[i]);
    temp->prev = back;
    temp->next = Create(arr,i+1,n,temp);
    return temp;

}


void display(Node *root){
    Node *ptr = root;
    // while(ptr->next){
    //     ptr = ptr->next;  //backward direction 
    // }
    while(ptr){
        cout<<ptr->data<<" ";
        ptr = ptr->prev;
        
    }    
}

int main(){
    int arr[] = {1,2,3,4,5};
    Node *root = Create(arr,0,5,NULL);
    display(root);
}





