

Node* removeKthNode(Node* head, int k)
{
    Node *ans=new Node();
    ans->next=head;
    Node *slow=ans,*fast=ans;
    while(k--) fast=fast->next;
    while(fast->next!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=slow->next->next;
    return ans->next;
}

// https://www.codingninjas.com/codestudio/problems/delete-kth-node-from-end_8230725?challengeSlug=striver-sde-challenge&leftPanelTab=1