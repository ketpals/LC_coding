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
int len(Node* head){
    Node* temp = head;
    int cnt =0;
    while(temp){
    temp = temp->next;
cnt++;
    }
    return cnt;
}
Node* delpos(Node* head, int k) {
    if (head == NULL || len(head) < k) {
        return NULL;
    }
    Node* temp = head;
    // Case 1: Deleting the head node (k = 1)
    if (k == 1) {
        head = head->next;
        delete temp; // Use 'delete' for a single object
        return head;
    }

    // Case 2: Deleting a node after the head
    int cnt = 1;
    Node* prev = NULL;
    while (temp != NULL) {
        if (cnt == k) {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
        cnt++;
    }
    return head;
}
int main(){
    vector<int> v = {3,5,6,1,88};
    int k = 5;
    Node* head = arr2LL(v);
    Node* temp = delpos(head,k);
    while(temp){
        cout<<temp->data<<" ";
        temp= temp->next;
    }

}


