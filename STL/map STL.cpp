#include<iostream>
//map is alrady sorted and in unorderded map in not sorted
//map will take one key and one value
//key has to be unique and value or 2 or more key can be same
#include<map>
using namespace std;

int main(){
    map<int,string> m;
    //1st way to insert value
    m[1]="neel";
    m[5]="lakum";
    m[8]="rajesh";
    m[7]="kumud";

    //2nd way to add value
    m.insert({9,"bhai"});


    for(auto i : m){
        cout<<i.first<<i.second<<" ";
    }


//using .find() through iterater 
    auto it=m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<< " ";
    }


}