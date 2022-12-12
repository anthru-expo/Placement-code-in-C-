#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<string>
#include<stack>


using namespace std;

int main(){
    
    string s="neel##lasd#fa#";
  
    vector<char> a;
    vector<char> b;

    for(int i=0;i<s.length();i++){
        if(s[i]=='#'){
            a.push_back(s[i]);
        }else {
            b.push_back(s[i]);
        }
    }

    for(int i=0;i<a.size();i++){
        cout<<a[i];
    }
    for(int i=0;i<b.size();i++){
        cout<<b[i];
    }
    
}