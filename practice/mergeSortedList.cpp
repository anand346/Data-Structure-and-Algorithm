class Solution{
    public :
        mergeTwoSortedList(Node *l1,Node *l2){
            if(l1 == NULL) return l2;
            if(l2 == NULL) return l1;

            Node *finalHead = NULL;
            if(l1->val < l2->val){
                finalHead = l1;
                l1 = l1->next;
            }else{
                finalHead = l2;
                l2 = l2->next;
            }
            Node *p = finalHead;
            while(l1 && l2){
                if(l1->val < l2->val){
                    p->next = l1;
                    l1 = l1->next;
                }else{
                    p->next = l2;
                    l2 = l2->next;
                }
                p = p->next;
            }
            if(l1){
                p->next = l1;
            }else{
                p->next = l2;
            }
            return finalHead;
        }
        Node* mergeTwoSortedListRecursive(Node *l1,Node *l2){
            if(l1 == NULL) return l2;
            if(l2 == NULL) return l1;

            Node *finalHead = NULL;
            if(l1->val < l2->val){
                finalHead = l1;
                finalHead = mergeTwoSortedListRecursive(l1->next,l2);
            }else{
                finalHead = l2;
                finalHead = mergeTwoSortedListRecursive(l1,l2->next);
            }
            return finalHead;
        }
}