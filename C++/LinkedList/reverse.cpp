#include <iostream>
#include "Node.cpp"
using namespace std;

Node* takeInput(){
    int data;
    cin >> data;
    Node* head = NULL;
    Node* tail = NULL;
    while(data != -1) {
        Node *newNode = new Node(data);
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

Node* reverse(Node* head) {
    if(head == NULL || head->next == NULL) {
        return head;
    }

    Node* rest = reverse(head->next);
    head->next->next = head;

    head->next = NULL;
    return rest;
}

void print(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    Node* head = takeInput();
    head = reverse(head);
    print(head);


    return 0;
}