#include <iostream>
#include "Node.h"
using namespace std;

Node* takeInput(){
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
        else{
            tail->next = newNode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

Node* removeDuplicates(Node* head){
    Node* temp = head;
    while(temp->next != NULL && temp != NULL) {
        if(temp->data == temp->next->data) {
            temp->next = temp->next->next;
        }
        else {
            temp = temp->next;
        }
    }
    return head;
}

void print(Node* head) {
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    Node* head = takeInput();
    Node* temp;
    temp = removeDuplicates(head);
    print(temp);


    return 0;
}