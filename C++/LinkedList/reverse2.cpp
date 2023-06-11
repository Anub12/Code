#include <iostream>
#include "Node.cpp"
using namespace std;

Node* reverse(Node* head) {
    if(head == NULL || head->next == NULL){
        return head;
    }
    
    Node *smallAns = reverse(head->next);
    Node *temp = smallAns;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    
    temp->next = head;
    head->next = NULL;
    return smallAns;
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
            Node* temp = head;
            while(temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cin >> data;
    }
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
    head = reverse(head);
    print(head);

    return 0;
}