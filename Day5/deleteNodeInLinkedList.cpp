void deleteNode(LinkedListNode<int> * node) {
    node->data=node->next->data;
    node->next=node->next->next;
}

// https://www.codingninjas.com/codestudio/problems/delete-node-in-a-linked-list_8230813?challengeSlug=striver-sde-challenge&leftPanelTab=1