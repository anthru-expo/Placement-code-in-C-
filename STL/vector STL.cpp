#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

int main(){


//checking normal functionality for vector in STL
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);

    for(int i:v){
        cout<<i<<" ";
    }

    cout<<"after pop"<<" ";

    v.pop_back();
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;



    cout<<endl;

//chacking the vector copy function
    vector<int> a(5,1);
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    vector<int> sus(a);
    for(int i:sus){
        cout<<i<<" ";
    }cout<<endl;



    
}