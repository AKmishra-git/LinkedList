#include<iostream>
using namespace std;

class Node{
    public:

    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }

};

int main(){
    Node* n = new Node(23);
    cout<<n->val<<" "<<n->next;
}


