#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
   cout<<"enter the number that you want factoprial of ";
   int m;
   cin>>m;
   int ans=1;
   for(int i=1;i<=m;i++){
      ans=ans*i;
   }
   cout<<ans;

}