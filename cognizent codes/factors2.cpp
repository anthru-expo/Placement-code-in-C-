#include<iostream>
#include<stdio.h>

using namespace std;

int main(){

    int n;
    cout<<"enter";
    cin>>n;

    for(int i=1;i<n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    cout<<n;
    

}