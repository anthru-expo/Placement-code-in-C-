#include<iostream>
#include<math.h>
using namespace std;






//print array
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
}



int un(int arr[],int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum^arr[i];
    }
    cout<<sum;
}


int main(){
  
    

    int num[5]={1,1,2,2,3};
    
 
    un(num,5);
   

}

   