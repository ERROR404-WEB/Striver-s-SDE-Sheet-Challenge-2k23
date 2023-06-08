
Node *addTwoNumbers(Node *a, Node *b)
{
   Node* ans=new Node();
   Node *temp=ans;
    int carry=0;
    while(a!=NULL or b!=NULL or carry)
    {
        int sum=0;
        if(a!=NULL)
        {
            sum+=a->data;
            a=a->next;
        }
        if(b!=NULL)
        {
            sum+=b->data;
            b=b->next;
        }

        sum+=carry;
        carry=sum/10;

        Node *New=new Node(sum%10);
        temp->next=New;
        temp=temp->next;
    }

   return ans->next;
}


// https://www.codingninjas.com/codestudio/problems/add-two-numbers-as-linked-lists_8230833?challengeSlug=striver-sde-challenge&leftPanelTab=1