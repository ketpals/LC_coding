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

Node* arr2LL(vector<int>&v){
    Node* head = new Node(v[0]);
    Node* curr = head;

    for(int i=1; i<v.size(); i++){
        Node* temp = new Node(v[i]);
        curr->next = temp;
        curr= curr->next;
    }
    return head;
}

Node* insertnodehead(Node* head, int val){
    if(head == NULL) return NULL;
Node* temp = head;
Node* n = new Node(val);
n->next = temp;
head = n;
return head;
}


int main() {
 vector<int> v = {88,2,3,4};
 int val = 7;
 Node *head = arr2LL(v);
 Node* temp = insertnodehead(head,val);
 while(temp){
    cout<<temp->data<<" ";
    temp = temp->next;
 }
}
