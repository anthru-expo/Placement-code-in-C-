#include<stdio.h>
#include<bits/stdtr1c++.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){

     int arr[3]={10,50,30};
     int arr2[3]={1,5,60};

     

     vector<int > vec;

     for(int i=0;i<3;i++){
          vec.push_back(arr[i]);
          vec.push_back(arr2[i]);
     }

     int size=vec.size();
     
     sort(vec.begin(),vec.end());
     
     if(size%2==0){
          int o=((size-1)/2);
          cout<<"median is "<<((vec[o]+vec[o+1])/2 );
     }


}
