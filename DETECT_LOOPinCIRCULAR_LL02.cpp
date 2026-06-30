
//detect_Loop LINKEDLIST
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
            Node *node = new Node(arr[i]);
            current->next = node;
            current = node;
        }
    }
    current->next = start;
    return start;
    
}

void detect_Loop(Node *start){
    Node *slow = start,*fast = start;
    while(fast->next && fast){
        slow=slow->next;
        fast=fast->next->next;
        
        if(slow==fast)cout<<"Loop detected";     //break
        else cout<<"Loop not found";             //break
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    Node *root = Create(arr,5);
    detect_Loop(root);
}
