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

ListNode* middleNode(ListNode* head) {
    ListNode *front = head;
    ListNode *back = head;
    
    if(front == NULL || front->next == NULL){
        return front;
    }
    
    while(front != NULL && front->next != NULL){
        front = front->next->next;
        back = back->next;
    }
    
    return back;
    
}