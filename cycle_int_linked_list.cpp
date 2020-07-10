https://www.interviewbit.com/problems/list-cycle/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 //AN ALTERNATIVE METHOD IS RUNNING TWO POINTERS AT DIFFERENT SPEEDS.
ListNode* Solution::detectCycle(ListNode* A) 
{
    ListNode* head=A;
    ListNode* ans=NULL;
    int count=1;
    ListNode* temp = new ListNode(0);
    while(head)
    {
       if(head->next==NULL)
       return NULL;
       if(head->next==temp)
       {
           ans=head;
           //ans->next=NULL;
           return ans;
       }
       else
       {
           ListNode* t =head;
           head=head->next;
           t->next=temp;
           
       }
    }
    return NULL;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
