// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// Node *Create(int arr[],int n){
//     Node *start=NULL,*current=NULL;
//     for(int i=0;i<n;i++){
//         if(start==NULL){
//             start = new Node(arr[i]);
//             current = start;
//         }else{
        
//             Node *node = new Node(arr[i]);
//             current->next = node;
//             current = node;
//         }
//     }
//     return start;
// }


// Node *Reverse(Node *start){
//     Node *current=start->next,*prev=start;
//     int pos=5;
//     while(pos--){
//         Node *temp = current->next;
//         current->next = prev;
//         prev = current;
//         if(temp == NULL)return current;
//         current = temp;
        
        
//     }
//         start->next = NULL;
//         return current;
// }

// void display(Node *root){
//     Node *ptr = root;
//     while(ptr){
//         cout<<ptr->data<<" ";
//         ptr = ptr->next;
        
//     }    
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     Node *root = Create(arr,5);
//     Node *newRoot = Reverse(root);
//     display(newRoot);
// }
























#include<iostream>
#include<vector>
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


void Reverse(Node *start){
    Node *temp=start;
    vector<int>v;
    while(temp){
        v.push_back(temp->data);
        temp = temp->next;
    }
    
    int n = v.size()-1;
    temp = start;
    
    while(temp){
        temp->data = v[n];
        temp = temp->next;
        n--;
    }
    
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
    Reverse(root);
    display(root);
}
