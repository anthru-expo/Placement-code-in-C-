#include <iostream>
using namespace std;

int main()
{
    // Write C++ code here
    int n=3;
    int count=0;
    for (int i=0; i<n; i++) {
        
        for(int j=0; j<n;j++){
            count++;
            cout<<count;
        }
        cout<<endl;
      
    }

    return 0;
}