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
        curr = curr->next;
    }
    return head;
}

Node* insertpos(Node* head, int val, int k, vector<int>&v){
    if(head == NULL) return NULL;
    Node* temp = head;
    int cnt =1;
    Node* n = new Node(val);
    Node* prev  = NULL;
   
        if(k ==1){
            n->next = head;
            head = n;
            return head;
        }
    
    while(temp!= NULL){
        if(cnt == k){
            n->next = temp;
            prev->next = n;
            break;
        }
        prev = temp;
        temp = temp->next;
     cnt++;
    }
     if(k == v.size()+1 && prev != NULL){
        prev->next = n; 
        n->next = nullptr;
        return head;
    }
    
    return head;
}
int main(){
    vector<int> v = {2,3,5,7,6};
    int k = 5;
    int val = 9;
    Node* head = arr2LL(v);
    Node* temp = insertpos(head,val,k,v);
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}