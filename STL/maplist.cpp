#include<iostream>
#include<string>
#include<map>
#include<list>

using namespace std;

int main(){

   map<string,list<string>> m;

   list<string> car {"ford","farari","lambo"};
   list<string> truck {"truck1","truck2","truck3"};

   m.insert(pair<string,list<string>>("gadi",car));
   m.insert(pair<string,list<string>>("truck",truck));

   for(auto it:m){
      cout<<it.first<<"-";

      for(auto i:it.second)
         cout<<i<<", ";
      cout<<endl;
   }


}