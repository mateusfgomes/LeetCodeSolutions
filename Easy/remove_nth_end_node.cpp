/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode *front = head;
    ListNode *back = head;
    int count = 0;
    
    //If the list has only 1 element
    if(front->next == NULL){
        return NULL;
    }

    while(count < n){
        front = front->next;
        count++;
    }
    
    while(front != NULL && front->next != NULL){
        back = back->next;
        front = front->next;
    }
    
    if(back == head && front == NULL){
        head = head->next;
    }
    
    back->next = back->next->next;
    
    return head;
}