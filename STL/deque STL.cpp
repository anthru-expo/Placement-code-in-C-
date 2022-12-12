#include<iostream>

#include<deque>
using namespace std;

int main(){

    deque<int> d;

    d.push_back(5);
    d.push_front(6);
    
    cout<<d.at(1);

    
}