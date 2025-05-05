#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int d) : data(d), next(nullptr), prev(nullptr) {}
};

Node* head = nullptr;

int countNodes() {
    int count = 0;
    Node* temp = head;
    while (temp) {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtBeginning(int value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    cout << "Inserted " << value << " at the beginning.\n";
}

void insertAtEnd(int value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    cout << "Inserted " << value << " at the end.\n";
}

void insertAtPosition(int value, int pos) {
    int count = countNodes();
    if (pos < 1 || pos > count + 1) {
        cout << "Invalid position\n";
        return;
    }
    if (pos == 1) {
        insertAtBeginning(value);
        return;
    }
    Node* newNode = new Node(value);
    Node* temp = head;
    for (int i = 1; i < pos - 1; ++i) {
        temp = temp->next;
    }
 
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
 
    
    cout << "Inserted " << value << " at position " << pos << ".\n";
}

void insertAtMiddle(int value) {
    int count = countNodes();
    if (count == 0) {
        cout << "List is empty.\n";
        return;
    }
    int middle = count / 2 + 1;
    insertAtPosition(value, middle);
}

void deleteFromBeginning() {
    if (!head) {
        cout << "List is empty.\n";
        return;
    }
    Node* toDelete = head;
    head = head->next;
    if (head) {
        head->prev = nullptr;
    }
    cout << "Deleted " << toDelete->data << " from the beginning.\n";
    delete toDelete;
}

void deleteFromEnd() {
    if (!head) {
        cout << "List is empty.\n";
        return;
    }
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    if (temp->prev) {
        temp->prev->next = nullptr;
    }
    cout << "Deleted " << temp->data << " from the end.\n";
    delete temp;
}

void deleteFromPosition(int pos) {
    int count = countNodes();
    if (pos < 1 || pos > count) {
        cout << "Invalid position.\n";
        return;
    }
    if (pos == 1) {
        deleteFromBeginning();
        return;
    }
    Node* temp = head;
    for (int i = 1; i < pos; ++i) {
        temp = temp->next;
    }
    if (temp->prev) {
        temp->prev->next = temp->next;
    }
    if (temp->next) {
        temp->next->prev = temp->prev;
    }
    cout << "Deleted " << temp->data << " from position " << pos << ".\n";
    delete temp;
}

void deleteMiddle() {
    int count = countNodes();
    if (count == 0) {
        cout << "List is empty.\n";
        return;
    }
    int middle = count / 2 + 1;
    deleteFromPosition(middle);
}

void searchByValue(int value) {
    Node* temp = head;
    int pos = 1;
    while (temp) {
        if (temp->data == value) {
            cout << "Value " << value << " found at position " << pos << ".\n";
            return;
        }
        temp = temp->next;
        ++pos;
    }
    cout << "Value " << value << " not found.\n";
}

void searchByPosition(int pos) {
    int count = countNodes();
    if (pos < 1 || pos > count) {
        cout << "Invalid position.\n";
        return;
    }
    Node* temp = head;
    for (int i = 1; i < pos; ++i) {
        temp = temp->next;
    }
    cout << "At position " << pos << ", data = " << temp->data
         << ", next = " << (temp->next ? to_string(temp->next->data) : "NULL")
         << ", prev = " << (temp->prev ? to_string(temp->prev->data) : "NULL") << ".\n";
}

void convertToArrayAndPrint() {
    int count = countNodes();
    if (count == 0) {
        cout << "List is empty, array is empty.\n";
        return;
    }
    int* arr = new int[count];
    Node* temp = head;
    for (int i = 0; i < count; ++i) {
        arr[i] = temp->data;
        temp = temp->next;
    }
    cout << "Array contents: ";
    for (int i = 0; i < count; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    delete[] arr;
}

void printCircular() {
    if (!head) {
        cout << "List is empty.\n";
        return;
    }
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = head; // make circular
    head->prev = temp;

    cout << "Circular doubly linked list: ";
    temp = head;
    do {
        cout << temp->data << " <-> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(back to head)\n";

    // Restore original list
    temp->next = nullptr;
    head->prev = nullptr;
}

void traverseReverse() {
    if (!head) {
        cout << "List is empty.\n";
        return;
    }
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    cout << "Reverse order: ";
    while (temp) {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "NULL\n";
}

void display() {
    if (!head) {
        cout << "List is empty.\n";
        return;
    }
    Node* temp = head;
    cout << "List: ";
    while (temp) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    int choice, value, pos;
    while (true) {
        cout << "\n--- Doubly Linked List ---\n"
             << "1. Insert at beginning\n"
             << "2. Insert at end\n"
             << "3. Insert at position\n"
             << "4. Insert at middle\n"
             << "5. Delete from beginning\n"
             << "6. Delete from end\n"
             << "7. Delete from position\n"
             << "8. Delete from middle\n"
             << "9. Search by value\n"
             << "10. Search by position\n"
             << "11. Count nodes\n"
             << "12. Convert to array & display\n"
             << "13. Convert to circular & display\n"
             << "14. Traverse in reverse order\n"
             << "15. Display list\n"
             << "0. Exit\n"
             << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Value: "; cin >> value;
                insertAtBeginning(value);
                break;
            case 2:
                cout << "Value: "; cin >> value;
                insertAtEnd(value);
                break;
            case 3:
                cout << "Value and position: ";
                cin >> value >> pos;
                insertAtPosition(value, pos);
                break;
            case 4:
                cout << "Value: "; cin >> value;
                insertAtMiddle(value);
                break;
            case 5:
                deleteFromBeginning();
                break;
            case 6:
                deleteFromEnd();
                break;
            case 7:
                cout << "Position: "; cin >> pos;
                deleteFromPosition(pos);
                break;
            case 8:
                deleteMiddle();
                break;
            case 9:
                cout << "Value: "; cin >> value;
                searchByValue(value);
                break;
            case 10:
                cout << "Position: "; cin >> pos;
                searchByPosition(pos);
                break;
            case 11:
                cout << "Total nodes: " << countNodes() << "\n";
                break;
            case 12:
                convertToArrayAndPrint();
                break;
            case 13:
                printCircular();
                break;
            case 14:
                traverseReverse();
                break;
            case 15:
                display();
                break;
            case 0:
                cout << "Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice.\n";
        }
    }
    return 0;
}