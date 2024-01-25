// #include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Node{
    public:
        int value;
        Node * next;
};

Node * head;
Node * one = NULL;
Node * two = NULL;
Node * three = NULL;

int main(){
    one = new Node();
    two = new Node();
    three = new Node();

    one->value = 1;
    two->value = 2;
    three->value = 3;

    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;


    // // Insert at the beginning 
    // Node * newNode;
    // newNode = new Node();
    // newNode->value = 4;
    // newNode->next = head;
    // head = newNode;

    // // Insert at the end
    // Node * newNode;
    // newNode = new Node();
    // newNode->value = 5;
    // newNode->next = NULL;
    // // temporary variable
    // Node * temp;
    // temp = head;
    // while(temp->next != NULL){
    //     temp = temp->next;
    // }
    // temp->next = newNode;

    // // Insert at the middle
    // Node * newNode;
    // newNode = new Node();
    // newNode->value = 7;
    // newNode->next = NULL;
    // Node * temp = head;
    // for(int i=1;i<2;i++){
    //     temp = temp->next;
    // }
    // newNode->next = temp->next;
    // temp->next = newNode;

    // // Delete from beginning
    // head = head->next;

    // // Delete from end
    // Node * temp = head;
    // while(temp->next->next != NULL){
    //     temp = temp->next;
    // }
    // temp->next = NULL;

//     // Delete from the middle
//     Node * temp = head;
    
//     for(int i=2;i<2;i++){
//         if(temp->next != NULL){
//             temp = temp->next;
//         }
//     }
// temp->next = temp->next->next;

    while(head != NULL){
        cout << head->value << endl;
        head = head->next;
    }


    return 0;
}
