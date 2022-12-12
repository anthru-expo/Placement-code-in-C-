#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int mask=0;
    int n=5;
    int m=n;
    
    while (m!=0)
    {
        mask=(mask<<1) | 1;  
        m=m>>1; 
    }
    int ans;
    ans=(~n)&mask;
    cout<<ans;
    
}
