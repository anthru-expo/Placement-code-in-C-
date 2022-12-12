#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

class car{
    private:
    string color="black";
    public:
    int tyer=4;
    
    car(int n,string str){
        this->tyer=n;
        
        
    }
    void setColor(string str){
        this->color=str;
    }
    string getColor(){
        return color;
    }
};

class maruti : public car{
    public:
    int tyre=7;
    int something;
};

int main(){

    int n;
    cout<<"enter the first value ";
    cin>>n;
    
    string m;
    cout<<"enter the second value ";
    cin>>m;
    

    maruti m;
    
    
    
    
    
    

   
}