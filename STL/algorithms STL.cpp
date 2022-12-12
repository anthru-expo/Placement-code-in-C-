#include<iostream>
//algorithms implemntation using stl
#include<algorithm>
#include<vector>
using namespace std;

int main(){
 
  vector<int> v;

  v.push_back(1);
  v.push_back(3);
  v.push_back(5);
  v.push_back(7);
  v.push_back(8);
  
  v.push_back(9);
  

  cout<<"using binary search "<<binary_search(v.begin(),v.end(),8);
  cout<<endl;

  cout<<"showing upper bound "<<upper_bound(v.begin(),v.end(),8)-v.begin()<<endl;
    cout<<"showing lower bound "<<lower_bound(v.begin(),v.end(),8)-v.begin();
    cout<<endl;

    //reverse the string

    string abcd ="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<abcd<<endl;


    //rotate element inside vector

    rotate(v.begin(),v.begin()+3,v.end());
    cout<<"after rotation"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    //sorting in vector 

    sort(v.begin(),v.end());
    cout<<"after sorting"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
}