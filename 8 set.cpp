#include <iostream>
#include<set>    //implementation is done using BST
                    // set is slowe than unordered set
using namespace std;
int main() {
  set<int> s;     //O(logn)--> set insert,erase,find,count
                //O(1)-->begin,size,end,empty
  s.insert(5);
  s.insert(5);
  s.insert(5);
  s.insert(1);
  s.insert(6);
  s.insert(6);
  s.insert(0);
  s.insert(0);
  s.insert(0);
 
  for(auto i : s) {
    cout<<i<<endl;
  }cout<<endl;
 
set<int>::iterator it = s.begin();
it++;
 
  s.erase(it);
 
  for(auto i : s) {
    cout<<i<<endl;
  }
cout<<endl;
cout<<"-5 is present or not -> "<<s.count(-5)<<endl;
 
set<int>::iterator itr = s.find(5);
 
for(auto it=itr;it!=s.end();it++) {
  cout<<*it<<" ";
}cout<<endl;
 
}
