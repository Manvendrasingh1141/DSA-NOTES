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

Node* Create(int arr[],int i,int s,Node *prev){
    if(i==s){
        return prev;
    }
    
    Node *temp = new Node(arr[i]);
    temp->next = prev;
    return Create(arr,i+1,s,temp);
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
    Node *start = Create(arr,0,4,NULL);
    Display(start);
}
