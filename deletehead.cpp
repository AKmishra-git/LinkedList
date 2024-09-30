#include<iostream>
#include<vector>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;

    }
};



Node* conversion(vector<int> &arr){ //convert array into linklist
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i =1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* removehead(Node* head){ // deletion of head 
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

int main(){
    vector<int> arr = {2,4,5,3};


    
    Node* head = removehead(head);
    cout<<head->data<<" "<<head->next;

    
}