#ifndef LINKED_LIST_H_INCLUDED
#define LINKED_LIST_H_INCLUDED

// Node structure for the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data);

// Function to insert a node at the beginning of the list
struct Node* insertAtBeginning(struct Node* head, int data);

// Function to insert a node at the end of the list
struct Node* insertAtEnd(struct Node* head, int data);

// Function to display the linked list
void displayList(struct Node* head);

// Function to delete the entire linked list
void deleteList(struct Node* head);

#endif // LINKED_LIST_H_INCLUDED
