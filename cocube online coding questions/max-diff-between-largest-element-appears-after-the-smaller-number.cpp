#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){

     cout<<"enter the size of element ";
     int n;
     cin>>n;
     int arr[n];

     vector<int > vec;

     for(int i=0;i<n;i++){
        cin>>arr[i];
     }

     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                int d=(arr[j]-arr[i]);
                vec.push_back(d);
            }else continue;
        }
     }

     int siz=vec.size();
     int ans=0;
     for(int i=0;i<siz;i++){
        if(vec[i]>ans){
            ans=vec[i];
        }else continue;
     }

     cout<<ans;

}