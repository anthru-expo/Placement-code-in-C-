#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n=1;

    while (n!=5)
    {
        switch (n)
        {
        case 1:
            cout<<"one";
            break;
        case 2: exit(0);break;

        default : cout<<"hello";break;
        

        
        }
        n++;
    }
    
}
