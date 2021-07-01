#include <iostream>
#include<vector>
using namespace std;
int main() {
  
  vector<int> v;
 
  vector<int> a(5,1);     // 5--> size of vector  1-->initialise value
  cout<<"print a"<<endl;
  for(int i:a) {
    cout<<i<<" ";
  }
 
  vector<int> last(a);      // last vector create hoga jisme a vector ke all elemnt hai
  
   cout<<"print last"<<endl;
  for(int i:last) {
    cout<<i<<" ";
  }
  cout<<endl;
 
  cout<<"Capacity-> "<<v.capacity()<<endl;     // capacity is different than size
 
  v.push_back(1);
  cout<<"Capacity-> "<<v.capacity()<<endl;
 
  v.push_back(2);
  cout<<"Capacity-> "<<v.capacity()<<endl;
 
  v.push_back(3);
  cout<<"Capacity-> "<<v.capacity()<<endl;
  cout<<"Size-> "<<v.size()<<endl;
 
  cout<<"Elemetn at 2nd Index" <<v.at(2)<<endl;
 
  cout<<"front " <<v.front()<<endl;
  cout<<"back " <<v.back()<<endl;
 
 cout<<"before pop"<<endl;
  for(int i:v) {
    cout<<i<<" ";
  }cout<<endl;
 
  v.pop_back();
 
  cout<<"after pop"<<endl;
  for(int i:v) {
    cout<<i<<" ";
  }
 
  cout<<"before clear size "<<v.size()<<endl;
  v.clear();
  cout<<"after clear size "<<v.size()<<endl;

}
