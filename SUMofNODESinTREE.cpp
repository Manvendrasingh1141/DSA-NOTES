#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left,*right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};

Node *Create(){
    int x;
    cin>>x;
    if(x==-1)return NULL;
    Node *node = new Node(x);
    node->left=Create();
    node->right=Create();
    return node;
}
void Sum(Node *root,int &sum){       //Without & → function gets a photocopy 📄 (works on copy);
                                    //With & → function gets the real paper 📄 (works on original variable).
    if(root==NULL)return;        

    sum+=root->data;
    Sum(root->left,sum);
    Sum(root->right,sum);
    
}

int main(){
    int sum=0;
    Node *root = Create();
    Sum(root,sum);
    cout<<"sum : "<<sum;

}
