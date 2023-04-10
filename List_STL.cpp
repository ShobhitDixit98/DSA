#include <iostream>
#include<list>
#include<vector>
using namespace std;

int main() {
  list<int> l;

  list<int> n(5,100);
  cout<<"Printing n"<<endl;
  for(int i:n) {
    cout<<i<<" ";
  }cout<<endl;
  l.push_back(1);
  l.push_front(2);

  for(int i:l) {
    cout<<i<<" ";
  }
  cout<<endl;
  
  l.erase(l.begin());
  cout<<"after erase"<<endl;
  for(int i:l) {
    cout<<i<<" ";
  }cout<<endl;

  //l.begin()
  cout<<"size of list "<<l.size()<<endl;

  list<int> ll={1,2,3,4,5};
  list<int>::iterator it = ll.begin();

  ll.insert(it,100);

  list<int> new_l= {10,20,30,40,50};
  new_l.insert(new_l.begin(),ll.begin(),ll.end());

  for(int i:new_l) {
    cout<<i<<" ";
  }cout<<endl;

  ll.insert(ll.begin(),3,10);

  for(int i:ll) 
  {
    cout<<i<<" ";
  }cout<<endl;
  
  cout<<"Empty or not " <<ll.empty()<<endl;
  cout<<"First Element " <<ll.front()<<endl;
  cout<<"Last Element " <<ll.back()<<endl;

  cout<<"Sort in ascending order "<<endl;

  ll.sort();
  for(int i:ll) {
    cout<<i<<" ";
  }cout<<endl;
  
  cout<<"Reverse the list"<<endl;
  ll.reverse();
  for(int i:ll) {
    cout<<i<<" ";
  }cout<<endl;

  list<int> l1={1,3,5};
  list<int> l2={2,4,6};

  l1.merge(l2);

  for(int i:l1) {
    cout<<i<<" ";
  }cout<<endl;
  
  
}
