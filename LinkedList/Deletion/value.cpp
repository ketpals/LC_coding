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
bool ispresent(Node* head, int val){
    Node* temp = head;
    while(temp){
    if(temp->data == val){
        return true;
    }
        temp = temp->next;
    
}
    return false;
}

Node* delval(Node* head, int val){
    //base condition
    if(head == NULL || !ispresent(head,val)){
        return NULL;
    }

    Node* temp = head;
    if(head->data == val){ // when the value to be deleted is the head
        head= head->next;
        free(temp);
        return head;
    }

    Node* prev = NULL;
    while(temp!=NULL){
    if(temp->data == val){
        prev->next = temp->next;
        free(temp);
        break;
    }
    prev = temp;
    temp = temp->next;
}
return head;
}


int main(){
    vector<int> v = {1,2,4,3,5};
    int val = 2;
    Node* head = arr2LL(v);
    Node* temp = delval(head,val);
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}