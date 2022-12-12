#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n;
    cout<<"enter the number of input ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int a[9]={0};
    for(int i=0;i<n;i++){
        a[arr[i]]++;
    }

    for(int i=0;i<10;i++){
        cout<<i<<"-"<<a[i]<<endl;
    }
return 0;
}