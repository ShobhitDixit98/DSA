#include<bits/stdc++.h>
using namespace std ;
int main()
{
// declaring multiset.
  unordered_set < int > us;
// elemets added to multiset . 
  us . insert ( 14 ) ;
  us . insert ( 10 ) ;
  us . insert ( 20 ) ;
  us . insert ( 5 )  ;
  us . insert ( 14 ) ;    // duplicate element added . 
  us . insert ( 25 ) ;
  us . insert ( 25 ) ;   //  duplicate element added . 
 

  cout <<"Elements of set before deletion :" <<endl;
  for (auto i : us)
    {
      cout<<" "<<i;
    }cout<<endl;

  us.erase(14);
  cout <<"Elements of set after deletion using value :" <<endl;
  for (auto i : us)
    {
      cout<<" "<<i;
    }cout<<endl;

  us.erase(us.find(25));
  cout <<"Elements of set before deletion using find :" <<endl;
  for (auto i : us)
    {
      cout<<" "<<i;
    }cout<<endl;

}
