
Node* findIntersection(Node *firstHead, Node *secondHead)
{
    Node *a=firstHead,*b=secondHead;
    if(a==NULL or b==NULL) return NULL;

    while(a!=b)
    {
        if(a==NULL) a=secondHead;
        else a=a->next;
        
        if(b==NULL) b=firstHead;
        else b=b->next;
    }
    
    return a; 
}

// https://www.codingninjas.com/codestudio/problems/intersection-of-two-linked-lists_8230688?challengeSlug=striver-sde-challenge&leftPanelTab=0