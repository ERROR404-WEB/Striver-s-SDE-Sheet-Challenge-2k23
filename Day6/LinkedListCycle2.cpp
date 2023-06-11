
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
// https://www.codingninjas.com/codestudio/problems/628974?topList=striver-sde-sheet-problems