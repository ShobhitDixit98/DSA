#include <iostream>      
#include <queue> 

using namespace std;   
     
int main ()
{
  queue <int> q;
    
  q.push(2);
  q.push(3);
  q.push(4);

  cout<<"Empty or not " <<q.empty()<<endl;
  cout<<"First Element " <<q.front()<<endl;
  cout<<"Last Element " <<q.back()<<endl;
  cout<<"Size of Queue " <<q.size()<<endl;

  q.pop();

  cout<<"First Element " <<q.front()<<endl;
  cout<<"Last Element " <<q.back()<<endl;
  cout<<"Size of Queue " <<q.size()<<endl;

  queue <int> qu;
  qu.push(1);

  q.swap(qu);
  cout<<"First Element " <<q.front()<<endl;
  cout<<"Last Element " <<q.back()<<endl;
  cout<<"Size of Queue " <<q.size()<<endl;
  

  
}
