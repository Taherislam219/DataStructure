#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

// Enqueue: insert at end
void enqueue(Node*& head, int val) {
    Node* new_node = new Node;
    new_node->value = val;
    new_node->next = nullptr;

    if (head == nullptr) {
        head = new_node;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    cout << "Enqueued: " << val << endl;
}

// Dequeue: remove from front
void dequeue(Node*& head) {
    if (head == nullptr) {
        cout << "Queue is empty! Cannot dequeue." << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    cout << "Dequeued: " << temp->value << endl;
    delete temp;
}

// Print queue
void print_queue(Node* head) {
    if (head == nullptr) {
        cout << "Queue is empty." << endl;
        return;
    }
    cout << "Queue: front -> ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->value;
        if (temp->next != nullptr)
            cout << " -> ";
        temp = temp->next;
    }
    cout << " <- rear" << endl;
}

int main() {
    Node* head = nullptr;

    cout << "Initial queue state:" << endl;
    print_queue(head);
    cout << endl;

    enqueue(head, 10);
    print_queue(head);
    cout << endl;

    enqueue(head, 20);
    print_queue(head);
    cout << endl;

    enqueue(head, 30);
    print_queue(head);
    cout << endl;

    dequeue(head);
    print_queue(head);
    cout << endl;

    dequeue(head);
    print_queue(head);
    cout << endl;

    enqueue(head, 40);
    print_queue(head);
    cout << endl;

    dequeue(head);
    print_queue(head);
    cout << endl;

    dequeue(head);
    print_queue(head);

    return 0;
}
