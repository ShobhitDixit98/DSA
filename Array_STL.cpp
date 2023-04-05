#include <iostream>
#include<array>

using namespace std;
int main() 
{
  
  int basic[3] ={1,2,3};

  array<int,4> a = {1,2,3,4};

  int size = a.size();

  for(int i=0;i<size;i++ )
  { 
    cout<<a[i]<<endl;
  }

  cout<<"Element at 2nd Index-> "<<a.at(2)<<endl;
  cout<<"Element at 1st Index-> "<<a[1]<<endl;

  cout<<"Empty or not-> "<<a.empty()<<endl;

  cout<<"First Element-> "<<a.front()<<endl;
  cout<<"last Element-> "<<a.back()<<endl;

  array<int,4> b;
  b.fill(2);

  for(int i=0;i<size;i++ )
  { 
    cout<<b[i]<<endl;
  }
  a.swap(b);
  cout<<"After swap "<<endl;
  for(int i=0;i<size;i++ )
  { 
    cout<<b[i]<<endl;
  }

  cout<<"Iterator pointing at first element of array b: " <<b.begin()<<endl;
  cout<<"Iterator pointing at first element of array b: " <<b.begin()<<endl;

  array<int,3> c;
  c.fill(1);
  cout<<"Maximum size of the array : "<<c.max_size();
}
