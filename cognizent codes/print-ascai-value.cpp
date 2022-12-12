#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int m;
    cout<<"enter values to convert into ascai value -";
    cin>>m;

    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }

    for(int i=0;i<m;i++){
        cout<< arr[i]<<" "<<(char)arr[i]<<endl;
    }

}