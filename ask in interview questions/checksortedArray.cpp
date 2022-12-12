#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main(){

   int m;
   cout<<"enter the size of array you want to check ";
   cin>>m;
   cout<<endl;

   int arr[m];

   //taking input from user and put it into array

   for(int i=0;i<m;i++){
      cin>>arr[i];
   }
   
   for(int i=0;i<=m;i++){
      if(arr[i]>arr[i+1]){
         cout<<"not sorted";
         break;
      }else continue;
   }
   cout<<"sorted arr";
}