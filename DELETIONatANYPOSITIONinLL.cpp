#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data = val;
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
            current = node;
        }
    }
    return start;
}


void Deletion(Node *start,int pos){
    Node *current=start,*prev=NULL;
    for(int i=0;i<pos-1;i++){
        prev = current;
        current=current->next;
    }
    
    prev->next = current->next;
    delete current;
}

void display(Node *root){
    Node *ptr = root;
    while(ptr){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
        
    }    
}

int main(){
    int arr[] = {1,2,3,4,5};
    Node *root = Create(arr,5);
    Deletion(root,2);
    display(root);
}
