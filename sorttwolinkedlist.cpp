#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
      ListNode() : val(0), next(nullptr) {}  // Default constructor
    ListNode(int x) : val(x), next(nullptr) {}  // Constructor with value
    ListNode(int x, ListNode* nextNode) : val(x), next(nextNode) {}  // Constructor with value and next node

};
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Create a dummy node to act as the starting point for the merged list
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;

        // Traverse both lists and merge them
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                temp->next = list1;  // Append list1 node
                list1 = list1->next; // Move list1 pointer to the next node
            } else {
                temp->next = list2;  // Append list2 node
                list2 = list2->next; // Move list2 pointer to the next node
            }
            temp = temp->next;  // Move temp pointer to the next node
        }

        // If one of the lists still has remaining elements, append it
        if (list1 != nullptr) {
            temp->next = list1;
        } else {
            temp->next = list2;
        }

        // Return the merged list starting from dummy->next (skipping the dummy node)
        return dummy->next;
    }
};

// Function to print the linked list
void printList(ListNode* node) {
    while (node != nullptr) {
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}

// Helper function to create a linked list from an array
ListNode* createList(const vector<int>& arr) {
    if (arr.empty()) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for (int i = 1; i<arr.size(); ++i) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

int main() {
    // Example 1
    vector<int> list1Arr = {1, 2, 4};
    vector<int> list2Arr = {1, 3, 4};

    // Create the linked lists from the arrays
    ListNode* list1 = createList(list1Arr);
    ListNode* list2 = createList(list2Arr);

    // Solution instance
    Solution solution;
    ListNode* mergedList = solution.mergeTwoLists(list1, list2);

    // Print the merged list
    cout << "Merged List: ";
    printList(mergedList);

    return 0;
}