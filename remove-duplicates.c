struct ListNode* deleteDuplicates(struct ListNode* head)
{
    struct ListNode* c= head;
    while(c!=NULL && c->next != NULL)
    {
        if(c->val == c->next->val)
        {
            c->next = c->next->next;
        }
        else
        {
            c = c->next;
        }
    }
    return head;
}
