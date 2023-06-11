#include <iostream>
#include "Node.cpp"
using namespace std;

Node* insertNode(Node* head, int i, int data){ 
    if(head == NULL) {
        return NULL;
    }
    if(i == 0) {
        Node* temp = new Node(data);
        temp->next = head;
        return temp;
    }

    if(i == 1) {
        Node* temp = new Node(data);
        temp->next = head->next;
        head->next = temp;
        return head;
    }
    Node* curr = insertNode(head->next, i-1, data);
    return head;
}

Node* takeInput() {
    int data;
    cin >> data;
    Node* head = NULL;
    Node* tail = NULL;
    while(data != -1) {
        Node* newNode = new Node(data);
        if (head == NULL) {
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

// Node* takeInput(){
//     int data;
//     cin >> data;
//     Node* head = NULL;
//     Node* tail = NULL;
//     while(data != -1) {
//         Node* newNode = new Node(data);
//         if (head == NULL) {
//             head = newNode;
//             tail = newNode;
//         }
//         else {
//             tail->next = newNode;
//             tail = tail->next;
//         }
//         cin >> data;
//     }
//     return head;
// }

void print(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    Node* head = takeInput();
    head = insertNode(head, 2, 99);
    print(head);

    return 0;
}