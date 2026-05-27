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

Node *Create(int arr[],int s,int n){
    if(s==n){
        return NULL;
    }
    
    Node *start = new Node(arr[s]);
    start->next = Create(arr,s+1,n); 
    return start;
}

void Display(Node *start){
    Node *ptr = start;
    while(ptr->next){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

int main(){

    int arr[] = {1,2,3,4};
    Node *start = Create(arr,0,5);
    Display(start);
}
