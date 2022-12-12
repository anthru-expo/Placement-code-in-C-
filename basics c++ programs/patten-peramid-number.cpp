#include <iostream>
using namespace std;

int main()
{
    // Write C++ code here
    int n=8;
    int count=0;
    for (int i=1; i<n; i++) {
        
        for(int j=1; j<=i;j++){
            count++;
            cout<<count;
        }
        cout<<endl;
      
    }

    return 0;
}