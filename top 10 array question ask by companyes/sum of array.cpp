#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<string>
using namespace std;

int main(){
     int arr[100];

    int n;
    cout<<"enter a number "<<endl;
    cin>>n;
    int ans=0;
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }

     for (int i = 0; i < n; i++)
     {
        ans=ans+arr[i];
     }
     

     cout<<"sum is "<<ans;

}