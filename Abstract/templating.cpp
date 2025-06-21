#include <iostream>
using namespace std;

template <class T>
class node {
    T val;
    node* next;

    node* start() {
        return this;
    }
};

int main() {
    node<int>* head = new node<int>;
}