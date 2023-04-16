#include<bits/stdc++.h>
using namespace std ;
int main()
{
// declaring multiset.
  multiset < int > ms;
// elemets added to multiset . 
  ms . insert ( 14 ) ;
  ms . insert ( 10 ) ;
  ms . insert ( 20 ) ;
  ms . insert ( 5 )  ;
  ms . insert ( 14 ) ;    // duplicate element added . 
  ms . insert ( 25 ) ;
  ms . insert ( 25 ) ;   //  duplicate element added . 
  ms . insert ( 29 ) ;

  cout <<"Elements of set before deletion :" <<endl;
  for (auto i : ms)
    {
      cout<<" "<<i;
    }cout<<endl;

  ms.erase(14);
  cout <<"Elements of set after deletion using value :" <<endl;
  for (auto i : ms)
    {
      cout<<" "<<i;
    }cout<<endl;

  ms.erase(ms.find(25));
  cout <<"Elements of set before deletion using find :" <<endl;
  for (auto i : ms)
    {
      cout<<" "<<i;
    }cout<<endl;
  

}
