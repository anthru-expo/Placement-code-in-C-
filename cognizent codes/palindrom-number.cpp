#include<iostream>
#include<stdio.h>

using namespace std;

int main(){

    int m;
    cin>>m;

    int arr[m];

    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<m;i++){
        if(arr[i]==arr[m-1-i]){
            continue;
        }else count++;
    }

    if(count==0){
        cout<<"palindro number";
    }else cout<<"not";


    
}