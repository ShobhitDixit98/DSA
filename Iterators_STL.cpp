#include<iostream>
#include<vector>
using namespace std;

int main()
{
  vector<int> v(10) ;// create a vector of 10 0's
  for(int i=0; i<v.size(); i++)
  {
    v[i]=i;
  }
  for(int i:v) 
  {
    cout<<i<<" ";
  }cout<<endl;
  
  vector<int>::iterator i,j,k;
    
  i = v.begin();
  cout<<(*i)<<endl;
  
  advance(i,5);
  cout<<(*i)<<endl; 
  advance(i,-1);
  cout<<(*i)<<endl;

  j=v.begin();
  k=v.end();
  cout<<"Distance between 2 iterators : "<<distance(j,k)<<endl;
  

}
