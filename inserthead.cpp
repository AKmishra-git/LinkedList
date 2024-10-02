#include<iostream>
#include<vector>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;

    Node(int data,Node* next){
        this->data = data;
        this->next = NULL;

    }
};

Node* conversion(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i =1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}


int main(){
    vector<int> arr = {2,4,5,3};
    Node* head = conversion(arr);
    head = new Node(6,head);
    
    cout<<head->data<<" "<<head->next;

    
}