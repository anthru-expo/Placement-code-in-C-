#include<iostream>
#include<math.h>

using namespace std;

//get max nummber out of the array

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

//sum numbers


int sum(int arr[],int size){
    int s=0;
    for (int i = 0; i < size; i++)
    {
            s=s+arr[i];
    }
    return s;
}


//find the int value in the function
char ishere(int arr[],int size,int value){
        for (int i = 0; i < size; i++)
        {
            if (value==arr[i])
            {
                return true;
            }
            
        }return false;
        
}


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

   