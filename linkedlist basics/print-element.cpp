#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node{
     public:
     int data;
     Node* next;
};


void print(Node* head){

     while(head!=NULL){
          cout<<head->data<<" ";
          head=head->next;
     }

}

int main(){

     Node* head = new Node();
     Node* sec = new Node();
     Node* third = new Node();
    

     head->data=11;
     head->next=sec;

     sec->data=22;
     sec->next=third;

     third->data=33;
     third->next=NULL;

print(head);



}