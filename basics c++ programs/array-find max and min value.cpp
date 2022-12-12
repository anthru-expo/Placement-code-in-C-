#include<iostream>
#include<math.h>

using namespace std;



int getmax(int arr[],int size){

     int max= INT32_MIN;

    for (int i = 0; i < size; i++)
    {
       if (arr[i]>max)
       {
            max=arr[i];
       }
       
    }return max;
    
}

int main(){
  
    int n;

    int num[100];
    cout<<"enter value - ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>num[i];
    }
    
    cout<<getmax(num,n);

}

   