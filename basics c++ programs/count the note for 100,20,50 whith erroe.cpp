#include<iostream>
#include<math.h>
using namespace std;

int main(){

    const int n=125000;
    

        int ans=n;
    while(n!=0){
    
        switch (n)
        {
        case n>100:
            cout<<"number of 100 is:"<<int(n/100)<<endl;
            n=n%100;
            
        case n>50:
            cout<<"number of 50 is:"<<int(n/50)<<endl;
            n=n%50;
        case n<50:
            cout<<"number of 10 is:"<<int(n/10)<<endl;
            
        default: cout<< "OK";
       
        

        }   
    n++;
    }
        

        
       
    }
    
