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

void deleteNNodesAfterMNodes(Node *head, int M, int N) {
    Node* current = head, *temp;
    int count;
    while(current) {
        for(count = 1; count < M && current != NULL; count++) {
            current = current -> next;
        }
        if(current == NULL)
            return;
        temp = current->next;
        for(count = 1; count <= N && temp != NULL; count++) {
            Node *deletingNode = temp;
            temp = temp->next;
            delete(deletingNode);
        }
        current->next = temp;
        current = temp;
    }
}

int main(){
    Node* head = takeInput();
    deleteNNodesAfterMNodes(head, 3, 2);
    print(head);

    return 0;
}