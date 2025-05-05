#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};

Node* head = nullptr;

void insertAtBeginning(int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    cout << "Inserted " << value << " at the beginning.\n";
}

void insertAtEnd(int value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }
    cout << "Inserted " << value << " at the end.\n";
}

int countNodes() {
    int count = 0;
    Node* temp = head;
    while (temp) {
        ++count;
        temp = temp->next;
    }
    return count;
}

void insertAtPosition(int value, int pos) {
    int n = countNodes();
    if (pos < 1 || pos > n + 1) {
        cout << "Invalid position. List has " << n << " nodes.\n";
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
    cout << "Inserted " << value << " at position " << pos << ".\n";
}

void insertAtMiddle(int value) {
    int n = countNodes();
    int mid = n/2 + 1;
    insertAtPosition(value, mid);
}

void deleteFromBeginning() {
    if (!head) {
        cout << "List is empty.\n";
        return;
    }
    Node* toDelete = head;
    head = head->next;
    cout << "Deleted " << toDelete->data << " from the beginning.\n";
    delete toDelete;
}

void deleteFromEnd() {
    if (!head) {
        cout << "List is empty.\n";
        return;
    }
    if (!head->next) {
        cout << "Deleted " << head->data << " from the end.\n";
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while (temp->next->next) temp = temp->next;
    cout << "Deleted " << temp->next->data << " from the end.\n";
    delete temp->next;
    temp->next = nullptr;
}

void deleteFromPosition(int pos) {
    int n = countNodes();
    if (pos < 1 || pos > n) {
        cout << "Invalid position. List has " << n << " nodes.\n";
        return;
    }
    if (pos == 1) {
        deleteFromBeginning();
        return;
    }
    Node* temp = head;
    for (int i = 1; i < pos - 1; ++i) temp = temp->next;
    Node* toDelete = temp->next;
    temp->next = toDelete->next;
    cout << "Deleted " << toDelete->data << " from position " << pos << ".\n";
    delete toDelete;
}

void deleteMiddle() {
    int n = countNodes();
    if (n == 0) {
        cout << "List is empty.\n";
        return;
    }
    int mid = n/2 + 1;
    deleteFromPosition(mid);
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
    cout << "Value " << value << " not found in the list.\n";
}

void searchByPosition(int pos) {
    int n = countNodes();
    if (pos < 1 || pos > n) {
        cout << "Invalid position. List has " << n << " nodes.\n";
        return;
    }
    Node* temp = head;
    for (int i = 1; i < pos; ++i) temp = temp->next;
    cout << "At position " << pos << ", data = " << temp->data
         << ", next = " << (temp->next ? to_string(temp->next->data) : "NULL") << ".\n";
}

void convertToArrayAndPrint() {
    int n = countNodes();
    if (n == 0) {
        cout << "List is empty, array is empty.\n";
        return;
    }
    int* arr = new int[n];            // allocate array
    Node* temp = head;
    for (int i = 0; i < n; ++i) {
        arr[i] = temp->data;
        temp = temp->next;
    }
    cout << "Array contents: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    delete[] arr;                     // free memory
}

void printCircular() {
    if (!head) {
        cout << "List is empty.\n";
        return;
    }
    Node* last = head;
    while (last->next) last = last->next;
    last->next = head;            // make circular

    cout << "Circular list: ";
    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(back to head)\n";

    last->next = nullptr;         // restore linear
}

void traverseReverse(Node* node) {
    if (!node) return;
    traverseReverse(node->next);
    cout << node->data << " ";
}

void swapPairwise() {
    Node* temp = head;
    while (temp && temp->next) {
        swap(temp->data, temp->next->data);
        temp = temp->next->next;
    }
    cout << "Swapped elements pairwise.\n";
}

void display() {
    cout << "List: ";
    Node* temp = head;
    while (temp) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    int choice, value, pos;
    while (true) {
        cout << "\n--- Singly Linked List ---\n"
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
             << "14. Traverse in reverse\n"
             << "15. Swap pairwise\n"
             << "16. Display list\n"
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
                cout << "Reverse order: ";
                traverseReverse(head);
                cout << "\n";
                break;
            case 15:
                swapPairwise();
                break;
            case 16:
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
