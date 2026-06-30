
//Circular LINKEDLIST
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
    current->next = start;
    return start;
    
}

void display(Node *start){
    Node *ptr = start;
    do{
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }while(ptr!=start);
}

int main(){
    int arr[] = {1,2,3,4,5};
    Node *root = Create(arr,5);
    display(root);
}
