#include <iostream>
using namespace std;

struct node {
    int data;
    node* kiri;
    node* kanan;
};

node* akar = NULL;

void addNode(node** akar, int value) {
    if(*akar == NULL) {
        node* baru = new node;
        baru -> data = value;
        baru -> kiri = NULL;
        baru -> kanan = NULL;
        *akar = baru;
    }
}

void inOrder(node* akar) {
    if (akar != NULL){
        inOrder(akar -> kiri);
        cout << akar -> data << " ";
        inOrder(akar -> kanan);
    }
}

void preOrder(node* akar) {
    if(akar != NULL) {
        cout << akar -> data << " ";
        preOrder(akar -> kiri);
        preOrder(akar -> kanan);
    }
}

void postOrder(node* akar) {
    if (akar != NULL) {
        postOrder(akar -> kiri);
        postOrder(akar -> kanan);
        cout << akar -> data << " ";
    }
}

int main() {
    system("cls");

    // Membentuk sebuah tree
    addNode(&akar, 15);
    addNode(&akar -> kiri, 27);
    addNode(&akar -> kanan, 30);
    addNode(&akar -> kiri -> kiri, 25);
    addNode(&akar -> kiri -> kanan, 29);

    // Traversal tree
    // 1. In Order
    cout << "Tampilan InOrder : ";
    inOrder(akar);

    // 2. Pre Order
    cout << "Tampilan PreOrder : ";
    preOrder(akar);

    // 3. Post Order
    cout << "Tampilan PostOrder";
    postOrder(akar);
}