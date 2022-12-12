#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<array>
#include<vector>
using namespace std;

void print(vector<pair<int,int>> &v ){
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i].first<<" "<<v[i].second; 
        }
        cout<<endl;
}


int main(){

    
        vector<pair<int,int>> v;
        int n;
        cin>>n;
        for (int i = 0; i < n; ++i)
        {
            int x;
            int y;
            cin>>x;
            cin>>y;
            v.push_back(make_pair(x,y));
        }
    print(v);
        

}
