#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<string>
using namespace std;

int main(){
     int n;
     cout<<"enter number "<<endl;
     cin>>n;
    int count=0;
      for(int i=1;i<n;i++){
        if(n%i==0){
            count++;
        }
      }
      if(count==1){
        cout<<"is a prime num";
      }else cout<<"not prime ";

     return 0;
}