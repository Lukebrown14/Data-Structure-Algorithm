// A linear DS that in non-contigous which consits of a series of nodes that are connected
// by series of pointers. Each node contains data and pointer/reference to the next node.

// Terminologies
// Head: A pointer to the first node of the linked list
// Node: linked list is made of nodes which contain data and pointer to the next node

// Operations
// Inseration: insert into the beginning, end or a certain index
// Deletion: delete into the beginning, end or certain index
// Traverse: This process displays the elements of a Single-linked list.
// Search: It is a process of determining and retrieving a specific node
//  either from the front, the end or anywhere in the list.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int new_deta){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = new_deta;
    new_node->next = NULL;

    return new_node;
}

void printList(struct Node* head) {
    while (head != NULL) {
        printf(" %d", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = createNode(2);
    head->next = createNode(3);
    head->next->next = createNode(4);
    head->next->next->next = createNode(5);
    head->next->next->next->next = createNode(6);

    printf("Linked List:");
    printList(head);

    return 0;
}
