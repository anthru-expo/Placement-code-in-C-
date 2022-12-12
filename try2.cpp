#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class car {
    public:
    void method1(){
        cout<<"method 1 is called ";
    }
    int method1(int n){
        return n*n;
    }
};



int main(){

    int n;
    cin>>n;
    car c;
    cout<<c.method1(n);
}