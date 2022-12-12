#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(){

   map<string,string> m;
   
   m.insert(pair<string,string>("apple","a"));
   m.insert(pair<string,string>("apple","a"));
   m.insert(pair<string,string>("mango","a"));
      m.insert(pair<string,string>("neel","a"));

   for(auto it : m){
      cout<<it.first<<"-"<<it.second<<endl;
   }

}