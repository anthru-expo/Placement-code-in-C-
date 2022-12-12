#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main(){
   
   int arr[]={2,3,5,6};
   int n=sizeof(arr)/sizeof(arr[0]);

   for(int i=0;i<n-1;i++){
      if((arr[i]+1)==arr[i+1]){
         continue;
      }else cout<<(arr[i]+1); break;
   }
   return false;
}