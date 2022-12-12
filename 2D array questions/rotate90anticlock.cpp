#include<iostream>
#include<stdio.h>
#include<math.h>
#include<array>

using namespace std;

int main(){

    cout<<"enter row number ";
    int n;
    cin>>n;
    cout<<"enter col number ";
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
        for(int j=i;j<m;j++){
            
            swap(arr[i][j],arr[j][i]);

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