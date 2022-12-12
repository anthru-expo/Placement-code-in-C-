#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

int main(){
     int n=15454656;
     string str=to_string(n);
     sort(str.begin(),str.end());
    n=stoi(str);
     cout<<n;
}