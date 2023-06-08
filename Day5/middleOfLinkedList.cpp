
Node *findMiddle(Node *head) {
    Node *slow=head;
    Node *fast=head;
    while(fast!=NULL and fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}



// https://www.codingninjas.com/codestudio/problems/middle-of-linked-list_8230764?challengeSlug=striver-sde-challenge&leftPanelTab=1