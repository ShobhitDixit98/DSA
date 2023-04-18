#include<iostream>
#include<map>
#include<string>
 
using namespace std;
 
int main()
{
    // Map is an associative array
  map<string, int>  marksMap;
  marksMap["Atul"] = 58;
  marksMap["Rohit"] = 57;
  marksMap["Kishlay"] = 78;
 
  map<string,int> :: iterator iter;
  for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }

  map<int,string> m{{1,"Nikhilesh"},{2,"Shrikant"},{3,"Ashish"}};
   
  cout << m.at(1)<<endl;
  cout << m.at(2)<<endl;
  cout << m[3]<<endl;
  
  for(auto i:m) {
    cout<<i.first<<" "<<i.second<<endl;
  }cout<<endl;
  
  m.at(1)= "Vikas";
  m[2]= "Navneet";
  m[4] = "Doodrah";
//m.at(5) = "Umeshwa";     // Produces an error 
  m.insert( {5,"Bheem"});
  
  for(auto i:m) {
    cout<<i.first<<" "<<i.second<<endl;
  }cout<<endl;

  map<int,string> ::iterator x,y;
  x = m.find(2);    // points to entry having key =2
  y = m.find(5);

  m.erase(4);
  for(auto i:m) {
    cout<<i.first<<" "<<i.second<<endl;
  }cout<<endl;

  m.erase(x,y);
  for(auto i:m) {
    cout<<i.first<<" "<<i.second<<endl;
  }cout<<endl;

  cout<<"Empty or not " <<m.empty()<<endl;
  cout<<"Size of the Map: "<<m.size()<<endl;           
  cout<<"Max Size: "<<m.max_size()<<endl;

  m.clear();
  cout<<"Empty or not " <<m.empty()<<endl;

  map<int, int> mp;
  
  mp[3] = 54;
  mp[7] = 63;
  mp[6] = 16;
  mp[8] = 60;


  if (mp.find(3) != mp.end())
      cout << "The element with key " << 3 << " is present in the map" << endl;

  cout << "The occurrence of the key " << 5 << " is " << mp.count(5) << endl;

  auto it1 = mp.lower_bound(6);
  cout << "The key is " << it1->first << " and the value is " << it1->second << endl;

  auto it2 = mp.upper_bound(6);
  cout << "The key is " << it2->first << " and the value is " << it2->second << endl;

  auto it3 = mp.equal_range(6);
  cout << "The lower bound for key 6 is " << it3.first->second << " and the upper bound for key 6 is " << it3.second->second << endl;
  
}
