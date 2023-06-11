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

int findNode(Node* head, int n) {
    int index = 0;
    Node* temp = head;
    while(temp != NULL) {
        if(temp->data == n) {
            return index;
        }
        temp = temp->next;
        index++;
    }
    return index;
}

int main(){
    Node* head = takeInput();
    int z = findNode(head, 3);
    cout << "Index is: " << z;


    return 0;
}