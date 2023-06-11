#include <iostream>
#include "Node.cpp"
using namespace std;

Node* takeInput(){
    int data;
    cin >> data;
    Node* head = NULL;
    Node* tail = NULL;
    while(data != -1) {
        Node* newNode = new Node(data);
        if(head == NULL) {
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

void print(Node* head) {
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

bool isCircular(Node* head) {
    if(head == NULL) {
        return true;
    }
    Node *node = head->next;
    while(node != NULL && node != head) {
        node = node->next;
    }
    if(node == head) {
        return true;
    }
    return false;
} // If at any point in the given list we got head is pointing towards tail then this means list is circular

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next = head;
    if(isCircular(head)) {
        cout << "The list is circular list";
    }
    else {
        cout << "The list is not circular list";
    }


    return 0;
}