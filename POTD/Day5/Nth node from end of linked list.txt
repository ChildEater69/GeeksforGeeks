int getNthFromLast(Node *head, int n)
{
    Node *mainPtr = head;
    Node *refPtr = head;

    // Move refPtr n nodes ahead
    for (int i = 0; i < n; i++)
    {
        if (refPtr == nullptr)
            return -1; // n is greater than the number of nodes
        refPtr = refPtr->next;
    }

    // Move both pointers until refPtr reaches the end
    while (refPtr != nullptr)
    {
        mainPtr = mainPtr->next;
        refPtr = refPtr->next;
    }

    // mainPtr is now pointing to the nth node from the end
    return mainPtr->data;
}
