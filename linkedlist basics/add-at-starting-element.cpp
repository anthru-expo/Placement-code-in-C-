#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node{
     public:
     int data;
     Node* next;
};



void push(Node* head,int n){
     Node* nn=new Node();
     nn->data=n;
     nn->next=head;
     *head=*nn;

}




int main(){

     Node* head = new Node();
     Node* sec = new Node();
     Node* third = new Node();
    

     cout<<"enter the value that you want to put in front ";
     int n;
     cin>>n;

     head->data=11;
     head->next=sec;

     sec->data=22;
     sec->next=third;

     third->data=33;
     third->next=NULL;


     push(head,n);
     print(head);



}