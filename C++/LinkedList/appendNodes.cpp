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

Node* appendNodes(Node* head, int n) {
    Node* temp = head; // temp pointer will hold rest of the nodes.
    Node* t = head; // t will reach upto the point where how many nodes are to be append
    int i = -n;
    while(temp->next != NULL) {
        if(i >= 0) {
            t = t->next;
        }
        temp = temp->next;
        i++;
    }
    temp->next = head;
    head = t->next;
    t->next = NULL;
    return head;
}

int main(){
    Node* head = takeInput();
    head = appendNodes(head, 3);
    print(head);


    return 0;
}