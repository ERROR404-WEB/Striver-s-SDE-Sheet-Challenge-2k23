int l=1;
    Node *temp=head;
    while(temp->next)
    {
         temp=temp->next;
         l++;
    }
    
    temp->next=head;
    k=k%l;
    k=l-k;
    for(int i=0;i<k-1;i++)
    {
         head=head->next;
    }
    temp=head->next;
    head->next=NULL;
    return temp;

    // https://www.codingninjas.com/codestudio/problems/rotate-linked-list_8230752?challengeSlug=striver-sde-challenge&leftPanelTab=1