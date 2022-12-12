#include<iostream>

#include<set>
using namespace std;

int main(){

   set<int> a;

    a.insert(5);
    a.insert(2);
    a.insert(3);
    a.insert(7);
    a.insert(8);
    a.insert(6);

    
    for(int i :a){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"is 5 present->"<<a.count(6)<<endl;
     
    //using ittrater to delete the element at the potsition that itrater pointing

    set<int>::iterator it =a.begin();
    it++;   //incrimenting it value by one ...now its pointing it+1 th position

     a.erase(it);
    for(int i :a){
        cout<<i<<" ";
    }cout<<endl;

    //for loop in iterator data dtype is auto 

    set<int>::iterator itr=a.find(5);
    
    for(auto it=itr;it!=a.end();it++){
        cout<<*it<< " ";
    }
}