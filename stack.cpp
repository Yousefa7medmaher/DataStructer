#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

void push(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    cout << value << " is pushed onto the stack." << endl;
}

void pop() {
    if (head == nullptr) {
        cout << "The stack is empty." << endl;
        return;
    }
    cout << "Popped: " << head->data << endl;
    Node* temp = head;
    head = head->next;
    delete temp;
}

void getTop() {
    if (head == nullptr) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Top of the stack: " << head->data << endl;
    }
}

void display() {
    if (head == nullptr) {
        cout << "The stack is empty." << endl;
        return;
    }
    Node* temp = head;
    cout << "Stack elements:" << endl;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int choice, value;
    do {
        cout << "\nStack Menu:\n";
        cout << "1. Push\n2. Pop\n3. Get Top\n4. Display\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                getTop();
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
