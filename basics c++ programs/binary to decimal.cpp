#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n=110;
     int ans=0;
     int a=0;
     for(int i=0;i!=n;i++){
        int digit= n%10;

        if (digit==1)
        {
          ans=pow(2,a) +ans;
        }
        n=n/10;
       a++; 
        
     }
        cout<<ans<<endl;
}