#include<iostream>
#include<stdio.h>

using namespace std;

int main(){

    cout<<"enter row number ";
    int n;
    cin>>n;
    cout<<"enter col number";
    int m;
    cin>>m;

    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }



}