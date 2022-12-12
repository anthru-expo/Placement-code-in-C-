#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;
//reverse string
int main(){
    int a[5]={20,30,40,50};
    
    int n=10;
    for(int i=0;i<=4;i++){
        if(a[i]==n){
            cout<<"element found"; break;
        }else cout<<"not found"; break;
    }
}
