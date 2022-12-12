#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n=123;
    int ans=0;

    for(int i=0; i<n;i++){
        int digit = n%1;
        ans=(pow(10,i )*(i+1)) +i;
        n=n>>1;

    }

    cout<<ans<<endl;
}