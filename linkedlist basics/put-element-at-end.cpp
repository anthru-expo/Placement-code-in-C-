#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node{
     public:
     int data;
     Node* next;
};

void end(Node* head,int n){

     Node* last=new Node();
     last->next=NULL;
     last->data=n;


     if(head->next==NULL){
          head->data=n;
          return;
     }

     while(head->next!=NULL){
          head=head->next;
     }

     head->next=last;
     last->data=n;


}


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
    

     cout<<"enter the value that you want to put in front ";
     int n;
     cin>>n;

     head->data=11;
     head->next=sec;

     sec->data=22;
     sec->next=third;

     third->data=33;
     third->next=NULL;


     
end(head,n);
print(head);


}