#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;


class student{
    
    public:
    string name;
    int number;
    student(string name,int number){
        this->name=name;
        this->number=number;
        cout<<"name is "<<name<< endl;
        cout<<"number is "<<number;
    }


};


int main(){

    int n;
    string str;
    cout<<"enter number 1 - "<<endl;
    cin>>n;
    cout<<" enter a string  - "<<endl;    
    cin>>str;5

   student std(str,n);
   
   



}