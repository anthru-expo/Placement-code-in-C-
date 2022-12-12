

#include <bits/stdc++.h>

using namespace std;


//print array
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<< " ";
    }
    
}

int main(){
  
    int arr[]={1,5,8,9,10,7};
    int n= sizeof(arr) / sizeof(arr[0]);

    sort(arr,arr+n);

    printarray(arr,n);

    int count=1;
    int ans=-1;
   
    for (int i = n; i >n-3; --i)
    {
        ans=ans+ arr[i]*count;
        count++;
    }
    cout<<ans;
}

   