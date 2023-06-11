#include <iostream>
#include "Node.cpp"
using namespace std;

void print(Node* head) {
    while(head != NULL) {
        cout << head -> data << " ";
        head = head->next;
    }
    cout << endl;
}

bool hasCycle(Node* head) {
    if(head == NULL)
        return false;
    
    Node *slow = head;
    Node *fast = head;

    while(slow != fast) {
        if(fast == NULL || fast->next == NULL) {
            return false;
        }
        slow = slow->next;
        fast = fast->next;
    }
    return true;
}

// This is the basic approach we can use in detecting a loop find 
// a suitable way to give input to the array and also print the output

int main(){
    Node* head = new Node(1);
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
    head = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = &n2;

    if(hasCycle(head)){
        cout << "This linkedlist has a loop";
    }
    else {
        cout << "This linkedlist has no loop";
    }
    return 0;
}