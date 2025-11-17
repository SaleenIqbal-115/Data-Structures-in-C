#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to create a linked list from user input
struct Node* createList(int n) {
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;
    int value;

    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &value);
        newNode = createNode(value);

        if (head == NULL)
            head = temp = newNode;
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    return head;
}

// Function to merge two sorted linked lists
struct Node* mergeLists(struct Node* head1, struct Node* head2) {
    struct Node *head3 = NULL, *tail = NULL;

    while (head1 != NULL && head2 != NULL) {
        struct Node* newNode;
        if (head1->data <= head2->data) {
            newNode = createNode(head1->data);
            head1 = head1->next;
        } else {
            newNode = createNode(head2->data);
            head2 = head2->next;
        }

        if (head3 == NULL)
            head3 = tail = newNode;
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Attach remaining nodes
    while (head1 != NULL) {
        struct Node* newNode = createNode(head1->data);
        tail->next = newNode;
        tail = newNode;
        head1 = head1->next;
    }

    while (head2 != NULL) {
        struct Node* newNode = createNode(head2->data);
        tail->next = newNode;
        tail = newNode;
        head2 = head2->next;
    }

    return head3;
}

// Function to print linked list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    int n1, n2;
    struct Node *head1 = NULL, *head2 = NULL, *merged = NULL;

    printf("Enter number of nodes in first sorted list: ");
    scanf("%d", &n1);
    head1 = createList(n1);

    printf("\nEnter number of nodes in second sorted list: ");
    scanf("%d", &n2);
    head2 = createList(n2);

    printf("\nList 1: ");
    printList(head1);

    printf("List 2: ");
    printList(head2);

    merged = mergeLists(head1, head2);

    printf("\nMerged Sorted List: ");
    printList(merged);

    return 0;
}

