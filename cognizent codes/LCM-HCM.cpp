
#include<iostream>

using namespace std;
    
    int HCF(int, int);
    int LCM(int, int);

int main() {
    int num1, num2, result;
    cout<<"Enter two numbers\n";
    cin>>num1;
    cin>>num2;
    result = LCM ( num1, num2 );
    cout<<endl<<"The output is\n";
    cout<< result;
    return 0;
    
}

int HCF (int num1, int num2) {
    if (num2 == 0)  
    return num1;
    return HCF(num2, num1 % num2);
}

int LCM (int num1, int num2) {
    return (num1 * num2) / HCF(num1, num2);
}