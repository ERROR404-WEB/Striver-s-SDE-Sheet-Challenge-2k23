
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    LinkedListNode<int> *newhead=NULL;
    while(head!=NULL)
    {
        LinkedListNode<int> *t=head->next;
        head->next=newhead;
        newhead=head;
        head=t;

    }
    return newhead;
}

// https://www.codingninjas.com/codestudio/problems/reverse-linked-list_8230724?challengeSlug=striver-sde-challenge&leftPanelTab=1