#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
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
bool searchLL(Node* head, int val){
    Node* temp = head;
    while(temp){
        if(temp->data == val) return true;
        temp = temp->next;
    }
    return false;
}

int main(){
    vector<int> v = {2,4,5,7};
    int val = 10;
    Node* head = arr2LL(v);
    Node* temp = head;
    bool ans = searchLL(temp,val);
    if(ans == 0) cout<<"False";
    else cout<<"True";
}