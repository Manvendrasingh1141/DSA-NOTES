
//DOUBLE LINKED LIST

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

Node *Create(int arr[],int n){
    Node *start=NULL,*current=NULL;
    for(int i=0;i<n;i++){
        if(start==NULL){
            start = new Node(arr[i]);
            current = start;
        }else{
        
            Node *node = new Node(arr[i]);
            current->next = node;
            node->prev = current;
            current = node;
        }
    }
    return start;
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
    Node *root = Create(arr,5);
    display(root);
}



