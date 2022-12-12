#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n=5;
    int m=n;
    int fun=(n&(n-1));
    int count=1;
    while (fun!=0)
    {
        count++;
        fun=fun&(fun-1);
        
        
    }
    
    cout<<count;
    

}

   