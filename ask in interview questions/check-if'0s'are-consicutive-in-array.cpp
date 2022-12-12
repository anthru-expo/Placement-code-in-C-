#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

int main(){

   cout<<"Enter no of the os and 1s as input ";
   int m;
   cin>>m;
   int count=0;
   int arr[m];

   for(int i=0;i<m;i++){
      cin>>arr[i];
   }

   for(int i=0;i<m;i++){
      if(arr[i]==0 && arr[i+1]==0){
         count++;
         break;
      }else{
         continue;
      }
      
   }
   if(count>0){
      cout<<"yes";
   }else cout<<"no";

}