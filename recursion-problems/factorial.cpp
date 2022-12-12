#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int fact(int n){
    
    if(n==1){
        return 1;
    }
    n=n*(fact(n-1));
    return n;
}



int main(){
    
    cout<<"enter a number that you want to factorial of ";
    int n;
    cin>>n;

    int ans= fact(n);
    cout<<"factorial of "<<n<<" is "<<ans;

}