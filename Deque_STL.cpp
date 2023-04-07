#include <iostream>
#include<deque>

using namespace std;
int main() 
{
  
  deque<int> d;
  d.push_back(1);
  d.push_back(3);
  d.push_back(4);
  d.push_front(2);

 //d.pop_front();
  cout<<endl;

  for(int i:d) 
  {
    cout<<i<<" ";
  }cout<<endl;

  cout<<"Print First INdex Element-> "<<d.at(1)<<endl;
  
  cout<<"front "<<d.front()<<endl;
  cout<<"back "<<d.back()<<endl;
  
  cout<<"Empty or not " <<d.empty()<<endl;

  int a[]={7,8,9};
  deque<int> dq(a,a+3);
  for(int i:dq) 
  {
    cout<<i<<" ";
  }cout<<endl;

  d.insert(d.begin(),a,a+3);
  
  cout<<"Before erase Size " <<d.size()<<endl;
  for(int i:d) 
  {
    cout<<i<<" ";
  }cout<<endl;
  d.erase(d.begin(),d.begin()+2);
  cout<<"After erase Size " <<d.size()<<endl;
  for(int i:d) 
  {
    cout<<i<<" ";
  }cout<<endl;

  

}
