#include<bits/stdc++.h>
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
            Node *temp = new Node(arr[i]);
            current->next = temp;
            current=temp;
        }
    }
    return start;
    
}

Node *Insert(Node *start,int el){
    if(start==NULL){
        start=new Node(el);
    }else{
        Node *temp = new Node(el);
        temp->next = start;
        start=temp;
    }
    return start;
}



void Display(Node *start){
    Node *ptr = start;
    while(ptr){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

int main(){

    int arr[] = {1,2,3,4};
    Node *start = Create(arr,4);
    Node *s = Insert(start,55);
    Display(s);
}
