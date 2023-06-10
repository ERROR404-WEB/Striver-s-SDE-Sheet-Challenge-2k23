// https://www.codingninjas.com/codestudio/problems/copy-list-with-random-pointer_8230734?challengeSlug=striver-sde-challenge&leftPanelTab=1
LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    LinkedListNode<int>* ans; bool f = 1;
        while(head != NULL){
        LinkedListNode<int>* tmp = new LinkedListNode<int>(head -> data);
        if(f) ans = tmp, f = 0;
        tmp -> next = head -> next;
        tmp -> random = head -> random;
        head = head -> next;
        tmp = tmp -> next;

        }
        return ans;
}
