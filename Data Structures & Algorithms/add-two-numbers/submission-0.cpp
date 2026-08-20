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

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      int n1=0,n2=0;
      ListNode* temp1=l1;
      while(temp1){
        n1=n1*10+temp1->val;
        temp1=temp1->next;
      } 
      ListNode* temp2=l2;
      while(temp2){
        n2=n2*10+temp2->val;
        temp2=temp2->next;
      }
      int r1=0,r2=0;
      while(n1){
        r1=r1*10+(n1%10);
        n1/=10;
      }
      while(n2){
        r2=r2*10+(n2%10);
        n2/=10;
      }
      int s=r1+r2;
        ListNode* head = nullptr;
        ListNode* tail = nullptr;

while (s) {
    ListNode* newNode = new ListNode(s % 10);

    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }

    s = s / 10;
}

return head;
    }
};
