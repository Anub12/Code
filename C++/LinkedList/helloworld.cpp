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

void print(Node *head) {
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int length(Node* head) {
    int counter = 0;
    while(head != NULL) {
        head = head->next;
        counter++;
    }
    return counter;
}

Node* insertNode(Node* head, int i, int data) {
    if(head == NULL)
        return NULL;
        
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

Node* deleteNode(Node* head, int i){
    if(i < 1)
        return NULL;
    
    if(head == NULL)
        return NULL;
    
    if(i == 1){
        Node* res = head->next;
        delete(head);
        return res;
    }
    
    head->next = deleteNode(head->next, i-1);
    return head;
}

int main(){
    Node* head = takeInput();
    int len = length(head);
    print(head);
    cout << "Length of Linked List is: " << len << endl;
    head = insertNode(head, 3, 4);
    print(head);

    return 0;
}