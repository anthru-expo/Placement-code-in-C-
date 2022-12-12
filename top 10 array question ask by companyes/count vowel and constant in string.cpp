#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;
//reverse string
int main(){
    string str="aeiouop";
    
    transform(str.begin(),str.end(),str.begin(), ::tolower);
    int v=0;
    int c=0;
    for(int i=0;i<=str.size();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            v++; continue;
        }else c++;


    }

    cout<<"vowels count "<<v<<endl;
    cout<<"constant count"<<c;
}
