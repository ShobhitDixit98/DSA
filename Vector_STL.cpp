#include <iostream>
#include<vector>
using namespace std;
int main() {
  
  vector<int> v;

  vector<int> a(5,2);

  for(int i=0;i<a.size();i++ )
  { 
    cout<<a[i]<< " ";
  }cout<<endl;
  
  vector<int> last(a);
  
  cout<<"print last"<<endl;
  for(int i:last) 
  {
    cout<<i<<" ";
  }cout<<endl;

  cout<<"Capacity-> "<<v.capacity()<<endl;
  cout<<"Size-> "<<v.size()<<endl;
  
  v.push_back(1);
  cout<<"Capacity-> "<<v.capacity()<<endl;
  cout<<"Size-> "<<v.size()<<endl;

  v.push_back(2);
  cout<<"Capacity-> "<<v.capacity()<<endl;
  cout<<"Size-> "<<v.size()<<endl;

  v.push_back(3);
  cout<<"Capacity-> "<<v.capacity()<<endl;
  cout<<"Size-> "<<v.size()<<endl;

 cout<<"before pop"<<endl;
  for(int i:v) 
  {
    cout<<i<<" ";
  }cout<<endl;

  v.pop_back();

  cout<<"after pop"<<endl;
  for(int i:v) 
  {
    cout<<i<<" ";
  }cout<<endl;

  cout<<"before clear size "<<last.size()<<endl;
  last.clear();
  cout<<"after clear size "<<last.size()<<endl;

  v.push_back(3);

  cout<<"First Element " <<v.front()<<endl;
  cout<<"Element at 2nd Index " <<v.at(2)<<endl;
  cout<<"Last Element " <<v.back()<<endl;

  for(int i:v) 
  {
    cout<<i<<" ";
  }cout<<endl;

  v.insert(v.begin(), 0);
  v.insert(v.end(), 4);
  v.erase(v.begin()+2);
  v.insert(v.begin()+2, 5);

  for(int i:v) 
  {
    cout<<i<<" ";
  }cout<<endl;

  a.swap(v);
  
  for(int i:v) 
  {
    cout<<i<<" ";
  }cout<<endl;

  
  

}
 
