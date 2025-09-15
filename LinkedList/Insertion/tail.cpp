#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* arr2LL(vector<int>& v){
    Node* head = new Node(v[0]);
    Node* curr = head;
    for(int i =1; i<v.size(); i++){
        Node* temp = new Node(v[i]);
        curr->next = temp;
        curr = curr->next;
    }
    return head;
}
Node* inserttail(Node* head, int val){
    Node* temp = head;
    Node * n = new Node(val);
    while(temp){
        if(temp->next == NULL){
             temp->next = n;
        n->next = nullptr;
        }
      temp = temp->next;

    }
    return head;
}


int main(){
    vector<int> v = {3,4,5,1,9};
    int val = 77;
    Node* head = arr2LL(v);
    Node* temp = inserttail(head,val);
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}