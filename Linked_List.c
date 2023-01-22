#include <stdio.h>
#include <stdlib.h>

// Create node
struct Node
{
    int data;
    struct Node *next;
};

// Print list or Traversal at each node
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Count the number of nodes
int countNodes(struct Node *ptr)
{   int count = 0;
    while (ptr != NULL)
    {   
        count++;
        ptr = ptr->next;
    }
    return count;
}

// Insert an element at beginning
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = head;
    return ptr;
}

// Insert an element at a given index
struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// Insert an element at last
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// Insert an element after given node
struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
}

// Delete the first element
struct Node *deleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// Delete the element at a given index 
struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
}

// Delete the last element
struct Node *deleteAtLast(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
    return head;
}

// Delete the element of a given value
struct Node *deleteOfValue(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

// Reverse the linked list
static void reverse(struct Node **head)
{
    struct Node *prev = NULL;
    struct Node *current = *head;
    struct Node *next = NULL;
    while (current != NULL)
    {
        // Store next
        next = current->next;

        // Reverse current node's pointer
        current->next = prev;

        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    *head = prev;
}

// Search a node
int searchNode(struct Node **head, int key)
{
    struct Node *current = *head;

    while (current != NULL)
    {
        if (current->data == key)
            return 1;
        current = current->next;
    }
    return 0;
}

// Sort the linked list
void sortLinkedList(struct Node **head)
{
    struct Node *current = *head, *index = NULL;
    int temp;

    if (head == NULL)
    {
        return;
    }
    else
    {
        while (current != NULL)
        {
            // index points to the node next to current
            index = current->next;

            while (index != NULL)
            {
                if (current->data > index->data)
                {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    printf("Linked list before insertion\n");
    linkedListTraversal(head);
    // head = insertAtFirst(head, 56);
    // head = insertAtIndex(head, 56, 1);
    // head = insertAtEnd(head, 56);
    head = insertAfterNode(head, third, 45);
    printf("\nLinked list after insertion\n");
    linkedListTraversal(head);
    printf("\n");

    // head = deleteFirst(head); // For deleting first element of the linked list
    // head = deleteAtIndex(head, 2);
    head = deleteAtLast(head);
    printf("Linked list after deletion\n");
    linkedListTraversal(head);
    printf("\n");

    int item = 3;
    if (searchNode(&head, item))
    {
        printf("%d is found\n", item);
    }
    else
    {
        printf("%d is not found\n", item);
    }

    sortLinkedList(&head);
    printf("\nSorted List: \n");
    linkedListTraversal(head);

    int x = countNodes(head);
    printf("The number of nodes is %d\n", x);

    return 0;
}


// Adding two polynomials
// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     float coeff;
//     int expo;
//     struct node *link;
// };

// struct node *insert(struct node *head, float co, int ex)
// {
//     struct node *temp;
//     struct node *newP = malloc(sizeof(struct node));
//     newP->coeff = co;
//     newP->expo = ex;
//     newP->link = NULL;

//     if (head == NULL || ex > head->expo)
//     {
//         newP->link = head;
//         head = newP;
//     }
//     else
//     {
//         temp = head;
//         while (temp->link != NULL && temp->link->expo >= ex)
//             temp = temp->link;
//         newP->link = temp->link;
//         temp->link = newP;
//     }
//     return head;
// }

// struct node *create(struct node *head)
// {
//     int n, i;
//     float coeff;
//     int expo;

//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     for (i = 0; i < n; i++)
//     {
//         printf("Enter the coefficient for term %d: ", i + 1);
//         scanf("%f", &coeff);

//         printf("Enter the exponent for term %d: ", i + 1);
//         scanf("%d", &expo);

//         head = insert(head, coeff, expo);
//     }
//     return head;
// }

// void print(struct node *head)
// {
//     if (head == NULL)
//         printf("No Polynomial.");
//     else
//     {
//         struct node *temp = head;
//         while (temp != NULL)
//         {
//             printf("(%.1fx^%d)", temp->coeff, temp->expo);
//             temp = temp->link;
//             if (temp != NULL)
//                 printf(" + ");
//             else
//                 printf("\n");
//         }
//     }
// }

// void polyAdd(struct node *head1, struct node *head2)
// {
//     struct node *ptr1 = head1;
//     struct node *ptr2 = head2;
//     struct node *head3 = NULL;
//     while (ptr1 != NULL && ptr2 != NULL)
//     {
//         if (ptr1->expo == ptr2->expo)
//         {
//             head3 = insert(head3, ptr1->coeff + ptr2->coeff, ptr1->expo);
//             ptr1 = ptr1->link;
//             ptr2 = ptr2->link;
//         }
//         else if (ptr1->expo > ptr2->expo)
//         {
//             head3 = insert(head3, ptr1->coeff, ptr1->expo);
//             ptr1 = ptr1->link;
//         }
//         else if (ptr1->expo < ptr2->expo)
//         {
//             head3 = insert(head3, ptr2->coeff, ptr2->expo);
//             ptr2 = ptr2->link;
//         }
//     }

//     while (ptr1 != NULL)
//     {
//         head3 = insert(head3, ptr1->coeff, ptr1->expo);
//         ptr1 = ptr1->link;
//     }
//     while (ptr2 != NULL)
//     {
//         head3 = insert(head3, ptr2->coeff, ptr2->expo);
//         ptr2 = ptr2->link;
//     }
//     printf("Added polynomial is: ");
//     print(head3);
// }

// int main()
// {
//     struct node *head1 = NULL;
//     struct node *head2 = NULL;
//     printf("Enter the First polynomial\n ");
//     head1 = create(head1);
//     printf("Enter the second polynomial\n ");
//     head2 = create(head2);

//     polyAdd(head1, head2);
//     return 0;
// }