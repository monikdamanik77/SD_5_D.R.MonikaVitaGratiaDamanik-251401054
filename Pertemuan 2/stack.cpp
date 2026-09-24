#include <iostream>
using namespace std;

struct node {
    int value;
    node* next;
};

node* head = NULL;
node* tail = NULL;

// insert last
void insertLast (int n) {
    node *newnode = new node;
    newnode -> value = n;
    newnode -> next = NULL;

    if (head == NULL) {
        head == newnode;
        tail = head;
    } else {
        tail -> next = newnode;
        tail = newnode;
    }
}

// delete first
void deleteFirst() {
    if(head==NULL) {
        cout << "List Kosong!" << endl;
        return;
    }

    node *temp = head;
    head = head -> next;
    if (head == NULL) tail == NULL;
    delete temp;
}

void display() {
    node* temp = head;
    cout << "isi linked list: ";
    while (temp != NULL) {
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    system ("cls");

    insertLast(20);
    display();
    insertLast(10);
    display();
    insertLast(5);
    display();
    deleteFirst();
    display();

    return 0;
}