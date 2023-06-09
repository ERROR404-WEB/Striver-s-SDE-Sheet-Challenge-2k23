
bool detectCycle(Node *head)
{
	Node *slow=head,*fast=head->next;
    if(head==NULL) return false;
    while(fast and fast->next)
    {
        if(slow==fast) return true;
        fast=fast->next->next;
        slow=slow->next;
    }
    return false;
}


Node *firstNode(Node *head)
{
    
    Node *slow=head,*fast=head;
    if(head==NULL) return NULL;
    while(fast and fast->next)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast)
        {
             while (head != slow) {
                head = head->next;
                slow = slow->next;
            }
            return slow;
        }
        
    }

   
    return NULL;

}

// https://www.codingninjas.com/codestudio/problems/linked-list-cycle-ii_8230823?challengeSlug=striver-sde-challenge&leftPanelTab=1