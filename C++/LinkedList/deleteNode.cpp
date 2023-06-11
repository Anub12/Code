#include<iostream>
#include "Node.cpp"
using namespace std;

Node* takeInput() {
    int data;
    cin >> data;
    Node* head = NULL;
    Node* tail = NULL;
    while(data != - 1) {
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

/* Node* deleteNode(Node* head, int i) {
    int count = 0;
    Node* temp = head;

    while(count < i-1) {
        temp = temp->next;
        count++;
    }
    if(temp != NULL) {
        Node* a = temp->next;
        Node* b = a->next;
        delete a;
    }
    return head;
} */  // Deleting Node iteratively

// Deleting Node recursively

Node* deleteNode(Node* head, int i) {
    if(i < 1)
        return head;
    
    if(head == NULL)
        return NULL;
    
    if(i == 1) {
        Node* res = head->next;
        delete(head);
        return res;
    }

    head->next = deleteNode(head->next, i-1);
    return head;
}

void print(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node* head = takeInput();
    // print(head);
    head = deleteNode(head, 3);
    print(head);

    return 0;
}