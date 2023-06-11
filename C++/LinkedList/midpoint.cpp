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

int len(Node* head) {
    int counter = 0;
    while(head != NULL) {
        head = head->next;
        counter++;
    }
    return counter;
}

/*void midPoint(Node* head) {
    if(head) {
        Node* temp = head;
        int length = len(head);
        int midIndx = (length -1) / 2;
        while(midIndx--) {
            temp = temp->next;
        }
        cout << "The middle element is [" << temp->data << "]" <<  endl;
    }
} */ // This method is O(n) time and O(1) space

void midPoint(Node* head) {
    Node* slow = head;
    Node* fast = head;
    if(head != NULL) {
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        cout << "Mid point is [" << slow->data << "]";
    }
}

// This method is O(n) time and O(1) space

int main(){

    Node* head = takeInput();
    midPoint(head);


    return 0;
}