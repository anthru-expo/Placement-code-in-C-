#include<iostream>
#include<math.h>

using namespace std;


//swap alternate

void alterswap(int arr[],int n){
    
    for (int i = 0; i < n; i+=2)
    {
        if (i+1<n)
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
    
}

//print array
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
}

int main(){
  

   
    int even[4]={1,2,3,4};

    
    
    alterswap(even,4);
    printarray(even,4);
    
   
    

}

   