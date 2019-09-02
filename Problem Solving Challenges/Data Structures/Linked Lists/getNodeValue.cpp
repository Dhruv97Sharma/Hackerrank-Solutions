int getNode(SinglyLinkedListNode* head, int positionFromTail) {
int totalLen = 0;//total length of the list
SinglyLinkedListNode* temp = head;// pointer denoting the elements of the list
while(temp != NULL){
    totalLen++;
    temp = temp->next;
}
int count = (totalLen - positionFromTail) - 1;// calculating pos from the head
temp = head;// resetting the ptr temp back to head
while(count--){
temp = temp->next;
}
return temp->data;
}