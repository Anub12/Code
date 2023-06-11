#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

// template <typename T>
// class Node{
// public:
//     T data;
//     Node* next;

//     Node(T data) {
//         this->data = data;
//         next = NULL;
//     }
// }; 