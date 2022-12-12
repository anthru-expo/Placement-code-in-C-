#include<iostream>

#include<queue>
using namespace std;

int main(){

    priority_queue<int> maxi;

    priority_queue<int,vector<int>,greater<int>> mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(1);

    
   // cout<<maxi.top();
     
    //for min heap 

    mini.push(1);
    mini.push(2);
    mini.push(3);

    int n=mini.size();
    for(int i=0; i<n;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
     

    
}