#include <iostream>
#include <list>

using namespace std;
  
int main(){
    // declaring the lists
    // initially sorted
    list<int> list1 = { 910, 100, 30 };
    list<int> list2 = { 40, 500, 560 };
  
    // merge operation
    list2.merge(list1);
  
    cout << "Merged List:  ";
  
    for (auto it = list2.begin(); it != list2.end(); ++it)
        cout << *it << " ";
    
    cout<<endl;

    list2.sort();
    cout << "after sorting Merged List:  ";
  
    for (auto it = list2.begin(); it != list2.end(); ++it)
        cout << *it << " ";
    
    cout<<endl;
    
    return 0;
}