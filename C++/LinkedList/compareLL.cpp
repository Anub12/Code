#include <iostream>
#include "Node.cpp"
using namespace std;

bool compare_lists(Node* head1, Node* head2) {
    auto p1=head1; auto p2=head2;
    while(p1 != nullptr && p2 != nullptr && p1->data == p2->data) {
        p1 = p1->next;
        p2 = p2->next;
    }

    if(p1 == nullptr && p2 == nullptr) 
        return 1;
    else
        return 0;
}

int main() {


    return 0;
}