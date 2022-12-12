#include<iostream>
#include<math.h>
using namespace std;



//try for reversing the array
int reve(int arr[],int n){
        int start=0;
        int end=n-1;
        while (start<=end)
        {
                swap(arr[start],arr[end]);
                start++;
                end--;
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
  
    int n;

    int num[10];
    
    cout<<"enter value - ";
    cin>>n;
    
/*active for finding the value in array
    int m;
    cout<<"enter value for m - ";
    cin>>m;
*/
    for (int i = 0; i < n; i++)
    {
        cin>>num[i];
        cout<<endl;
    }
    
    reve(num,n);
    printarray(num,n);
    
   
    

}

   