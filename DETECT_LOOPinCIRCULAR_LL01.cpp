

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
    map<Node*,bool>add;
    Node *ptr = start;
    while(ptr){
        if(add[ptr]){
            cout<<"Yes";
            break;
        }else {
            cout<<"No";
            break;
        }
        
        add[ptr]=true;
        ptr=ptr->next;
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    Node *root = Create(arr,5);
    detect_Loop(root);
}
