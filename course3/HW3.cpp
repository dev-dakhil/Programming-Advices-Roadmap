#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void push(Node** head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}

void deleteAll(Node** head) {
    Node* current = *head;
    Node* nextNode;

    while (current != NULL) {
        nextNode = current->next; 
        cout << "Deleting node with data: " << current->data << endl;
        delete current;
        current = nextNode;
    }
    
    *head = NULL;
}

void displayList(Node* node) {
    if (node == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    while (node != NULL) {
        cout << node->data << " -> ";
        node = node->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;

    push(&head, 30);
    push(&head, 20);
    push(&head, 10);
    push(&head, 5);

    cout << "Current List: ";
    displayList(head);

    cout << "\nstarting deletion process..." << endl;
    deleteAll(&head);

    cout << "\nlist after deletion: ";
    displayList(head);
    return 0;
}