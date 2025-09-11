#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data1 = data;
        next1 = next;
    }
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


int main() {
 vector<int> v = {88,2,3,4};
 Node *y = arr2LL(v);
 Node* temp = y;
 while(temp){
    cout<<temp->data<<" ";
    temp = temp->next;
 }
}
