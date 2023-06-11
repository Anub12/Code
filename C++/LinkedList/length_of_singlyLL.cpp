#include <iostream>
#include "Node.cpp"
using namespace std;

Node* takeInput() {
    int data;
    cin >> data;
    Node* head = NULL;
    Node* tail = NULL;
    while(data != -1) {
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int len(Node* head) {
    int counter = 0;
    while(head != NULL) {
        counter++;
        head = head->next;
    }
    return counter;
    // if you pass this function then your head will be turned to NULL in your linked list
}

int main() {
    Node* head = takeInput();
    int z = len(head);
    cout << "Length is: " << z;


    return 0;
}