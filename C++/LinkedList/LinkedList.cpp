#include <iostream>
#include "Node.h"
using namespace std;

Node* takeInput_Better(){
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

Node* takeInput(){
    int data;
    cin >> data;
    Node* head = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
        }
        else {
            Node* temp = head;
            while(temp != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }// I have to write something here... 
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = takeInput_Better();
    print(head);
    cout << endl << "Output: ";

    // Statically creating a node
    /*Node n1(5);
    Node *head = &n1;

    Node n2(10);
    Node n3(15);
    Node n4(20);
    Node n5(25);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    print(head);*/

    /*n1.next = &n2;

    cout << head->data << " ";
    cout << n1.data << " " << n2.data;

    // Dynamically creating a node
    Node *n3 = new Node(15);

    Node *head = n3;

    Node *n4 = new Node(20);
    n3->next = n4;*/
    

    return 0;
}