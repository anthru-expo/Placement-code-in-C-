#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n=3;
    int m=n;
    int mask=0;

    if(n==0){
        return 1;
    }
    for(int i=m; i>0;i--){
        mask=(mask<<1) | 1;
    }
    int ans;
    ans= (~n) & mask;

    cout<<ans;
}