//
//  doublyLinkedList.cpp
//  Module 3
//
//  Created by Navjot Thind on 2/17/25.
//

#include <stdio.h>
#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Insert node at the end
void insertEnd(Node** head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    if (*head == nullptr) {
        *head = newNode;
    } else {
        Node* last = *head;
        while (last->next != nullptr) {
            last = last->next;
        }
        last->next = newNode;
        newNode->prev = last;
    }
}

// Display list from head to tail
void displayForward(Node* node) {
    cout << "Forward: ";
    while (node != nullptr) {
        cout << node->data << " <-> ";
        node = node->next;
    }
    cout << "NULL\n";
}

// Display list from tail to head
void displayBackward(Node* node) {
    if (node == nullptr) return;
    while (node->next != nullptr) {
        node = node->next;
    }
    cout << "Backward: ";
    while (node != nullptr) {
        cout << node->data << " <-> ";
        node = node->prev;
    }
    cout << "NULL\n";
}

// Delete a node from the doubly linked list
void deleteNode(Node** head, int key) {
    if (*head == nullptr) return;

    Node* temp = *head;

    while (temp != nullptr && temp->data != key) {
        temp = temp->next;
    }

    if (temp == nullptr) return;

    if (temp->prev != nullptr) {
        temp->prev->next = temp->next;
    } else {
        *head = temp->next;
    }

    if (temp->next != nullptr) {
        temp->next->prev = temp->prev;
    }

    delete temp;
}

int main() {
    cout << "\nWelcome to Doubly Linked Lists!\n";

    Node* head = nullptr;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);

    cout << "\nOriginal List:\n";
    displayForward(head);
    displayBackward(head);

    deleteNode(&head, 30);
    cout << "\nList after deleting 30:\n";
    displayForward(head);
    displayBackward(head);

    return 0;
}
