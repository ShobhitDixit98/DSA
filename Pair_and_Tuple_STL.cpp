#include <iostream>
#include<tuple>
using namespace std;    
int main ()
{
   pair<int,int> pair1, pair3;    
   pair<int,string> pair2;    
     
   pair1 = make_pair(1, 2);     
   pair2 = make_pair(3, "Hello"); 
   pair3 = make_pair(2, 4);
   cout<< "Pair1 First member: "<<pair1.first << endl;  
   cout<< "Pair2 Second member:"<<pair2.second << endl; 
   if(pair1 == pair3)
        cout<< "Pairs are equal" << endl;
   else
        cout<< "Pairs are not equal" << endl;



  tuple<int, int, int> tuple1;
      tuple<int, string, string> tuple2;
      tuple1 = make_tuple(1, 2,3);
      tuple2 = make_tuple(1,"Hello", "C++ Tuples");
      int id;
      string str1, str2;
      tie(id, str1, str2) = tuple2;
      cout << id <<" "<< str1 <<" "<< str2;
      return 0;
    
}
