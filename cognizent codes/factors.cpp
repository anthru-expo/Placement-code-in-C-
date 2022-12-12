#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){
    cout<<"enter number ";

    int n;
    cin>>n;
    n=abs(n);

    
    for(int i=1;i<n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }else continue;
    }
    
    cout<<n;
}