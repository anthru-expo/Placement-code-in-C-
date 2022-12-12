#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stack>
#include<string.h>
#include<string>


using namespace std;

int main(){

    string s;
    cout<<"enter string ";
    cin>>s;

    int n = s.size();
    sort(s.begin(),s.end());


    vector<int > in;
    vector<char> ch;
    
    int count=1;

    for(int i=0;i<n;i++){

        if(s[i]==s[i+1]){
            count++;
        }else {
            in.push_back(count);
            count=1;
            continue;
        }

    }

    for(int i=0;i<n;i++){
        if(s[i]!=s[i+1]){
            ch.push_back(s[i]);
        }else continue;
    }

    int m = in.size();
    for(int i=0;i<m;i++){
        cout<<ch[i]<<in[i];
    }


}

    

