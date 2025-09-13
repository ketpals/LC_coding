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
    for(int i=1; i<v.size(); i++){
        Node* temp = new Node(v[i]);
        curr->next = temp;
        curr = curr->next;
    }
    return head;
}
 Node* delhead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
        head = head->next;
        free(temp);
        return head;
 }

int main(){
    vector<int> v = {2,5,6,4};
    Node* head = arr2LL(v);
    Node* temp = delhead(head); // current head = 2 is deleted
    while(temp){
        cout<<temp->data<<" "; // new head = 5
        temp = temp->next;
    }
}