#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){

     
     vector<char > vec;

    string str;
    cout<<"enter string ";
    getline(cin,str);

    int len=str.length();

    for(int i=0;i<len;i++){
        vec.push_back(str[i]);
    }
    
    vector<char >vec2;
    int j=0;
    for(int i=0;i<len;i++){
        if(vec[i]==vec[len-j-1]){
            j++;
            continue;
        }else{
            vec2.push_back(vec[i]);
            
        }

    }

    int len2=vec2.size();

    for(int i=0;i<len2;i++){
        vec.push_back(vec2[i]);
    }    

    int len3=vec.size();

    for(int i=0;i<len3;i++){
        cout<<vec[i];
    }


}