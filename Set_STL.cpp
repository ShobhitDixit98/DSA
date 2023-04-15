#include<iostream>
#include<set>

using namespace std;
 
int main()
{
 
    // Empty Set
    set<int> set1;
    // set1 = {}
 
    // Empty Set - Decreasing Order
    set<int, greater<int>> set2;
    // set2 = {} 
 
    // Set with values
    set<int, greater<int>> set3 = {6, 10, 5, 1};
    // set3 = {10, 6, 5, 1}
 
    // Initialize Set using other set
    set<int, greater<int>> set4(set3);
    // set4 = {10, 6, 5, 1} 
 
    // Initializing a set from array
    int arr[] = {10, 4, 5, 6};
    set<int> set5(arr, arr+4);  // Since the array has four elements, thus arr+4 

     // Defining iterator for the set
    set<int> :: iterator it;

    //Printing a set using for loop – (1)
    for (auto it = set5.begin(); it!=set5.end();it++)
    {
        cout<<" "<<*it;
    }cout<<endl;

    set1.insert( 60 ) ;
    set1.insert( 10 ) ;
    set1.insert( 20 ) ;
    set1.insert( 20 ) ;
    set1.insert( 70 ) ;

    for (auto i : set1)
      {
        cout<<" "<<i;
      }cout<<endl;
  
    for (auto it = set5.rbegin(); it!=set5.rend();it++)
    {
        cout<<" "<<*it;
    }cout<<endl;

    cout<< *set1.lower_bound(20)<<endl;
    cout<< *set1.lower_bound(23)<<endl;
    cout<< *set1.upper_bound(20)<<endl;

    cout<<"Empty or not " <<set1.empty()<<endl;
    cout<<"\nSize of the set: "<<set1.size();           
    cout<<"\nMax Size: "<<set1.max_size();
    set1.erase(set1.begin());                    // 
    set1.erase(20);
    cout<<"\nSize of the set: "<<set1.size()<<endl;
    set1.clear(); 
    cout<<"Empty or not " <<set1.empty()<<endl;

    set3.erase(set3.find(6));
    for (auto i : set3)
      {
        cout<<" "<<i;
      }cout<<endl;
    cout<<"Before erase (set4): "<<endl;
    for (auto i : set4)
      {
        cout<<" "<<i;
      }cout<<endl;
    set4.erase(set4.find(6),set4.find(1));
    for (auto i : set4)
      {
        cout<<" "<<i;
      }cout<<endl;

    for (auto i : set5)
      {
        cout<<" "<<i;
      }cout<<endl;

    set<int> :: iterator x,y;
    x=set5.find(4);
    y=set5.find(6);
    
    set5.erase(x,y);
    for (auto i : set5)
      {
        cout<<" "<<i;
      }cout<<endl;
  
  
}
