#include <iostream>
#include <stack>

using namespace std;

int main()
{
  stack<int> s;
  s.push(2);
  s.push(3);
  s.push(4);

  cout<<"Empty or not " <<s.empty()<<endl;
  cout<<"Top Element " <<s.top()<<endl;
  cout<<"Size of Stack " <<s.size()<<endl;
  
  s.pop();
  cout<<"Top Element " <<s.top()<<endl;
  cout<<"Size of Stack " <<s.size()<<endl;

  stack<int> st;
  st.push(1);

  s.swap(st);
  cout<<"Top Element " <<s.top()<<endl;
  cout<<"Size of Stack " <<s.size()<<endl;
}
