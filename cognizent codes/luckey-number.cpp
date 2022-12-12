#include<iostream>
#include<stdio.h>

using namespace std;

int main(){

    int m;
    cin>>m;

    int arr[m];

    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    
    int ans=0;
    for(int i=0;i<m;i++){
        ans=ans+arr[i];
    }

    if(ans%3==0 || ans%5==0 || ans%7==0){
        cout<<"luckey number";

    }else cout<<"not luckey num";

    
}