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

     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
    
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                count++;
            }else continue;
        }

        if(count==(n-i-1)){
            cout<<"leader values in arry is "<<arr[i]<<endl;
        }else continue;
    }


}