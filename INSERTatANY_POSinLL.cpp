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

void Insert(Node *start,int pos,int el){
    Node*current = start;
    for(int i=0;i<pos-1;i++){
        current=current->next;
    }
    
    Node *temp;
    temp = new Node(el);
    temp->next = current->next;
    current->next = temp;
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
    Insert(start,2,55);
    Display(start);
}
