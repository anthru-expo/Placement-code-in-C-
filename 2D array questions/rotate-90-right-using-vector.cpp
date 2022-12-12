#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<vector>


using namespace std;

int main(){

     
     cout<<"enter row ";
     int r;
     cin>>r;
     cout<<"enter col ";
      int c;
     cin>>c;

     vector<vector<int> >vec(r, vector<int> (c,0));



     //taking input for 2d vector
     for(int i=0;i<r;i++){
          for(int j=0;j<c;j++){
               cin>>vec[i][j];
          }
     }


     //swaping the elements
     for(int i=0;i<r;i++){
          for(int j=i;j<c;j++){
               swap(vec[i][j],vec[j][i]);
          }
     }

     for(int i=0;i<r;i++){
          reverse(vec[i].begin(),vec[i].end());
     }


     //printing the elemets
     for(int i=0;i<r;i++){
          for(int j=0;j<c;j++){
               cout<<vec[i][j];
          }cout<<endl;
     }

     
} 