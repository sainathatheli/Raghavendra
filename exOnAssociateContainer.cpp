#include<iostream>
#include<map>
#include<set>
#include<iterator>

using namespace std;
int main()
{
	// empty map container 
    map<int, int> m; 
  
    // insert elements in random order 
    m.insert(pair<int, int>(1, 4)); 
    m.insert(pair<int, int>(2, 3)); 
    m.insert(pair<int, int>(3, 6)); 
    m.insert(pair<int, int>(4, 10)); 
    m.insert(pair<int, int>(5, 80)); 
    m.insert(pair<int, int>(6, 1)); 
    m.insert(pair<int, int>(7, 5)); 
  
    // printing map m 
    map<int, int>::iterator itr; 
    cout << "\nThe map m is : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = m.begin(); itr != m.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl; 
  
    // assigning the elements from m to n 
    map<int, int> n(m.begin(), m.end()); 
  
    // print all elements of the map n 
    cout << "\nThe map n after"
         << " assign from m are : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = n.begin(); itr != n.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl; 
  
    // remove all elements up to 
    // element with key=3 in n 
    cout << "\nn after removal of"
            " elements less than key=3 : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    n.erase(n.begin(), n.find(3)); 
    for (itr = n.begin(); itr != n.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
  
    // remove all elements with key = 4 
    int num; 
    num = n.erase(4); 
    cout << "\nn.erase(4) : "; 
    cout << num << " removed \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = n.begin(); itr != n.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
  
    cout << endl; 
  
    // lower bound and upper bound for map m key = 5 
    cout << "m.lower_bound(5) : "
         << "\tKEY = "; 
    cout << m.lower_bound(5)->first << '\t'; 
    cout << "\tELEMENT = "
         << m.lower_bound(5)->second << endl; 
    cout << "m.upper_bound(5) : "
         << "\tKEY = "; 
    cout << m.upper_bound(5)->first << '\t'; 
    cout << "\tELEMENT = "
         << m.upper_bound(5)->second << endl;
		 
	//SET
	// empty set container
    set<int,greater<int>> s1;
 
    // insert elements in random order
    s1.insert(10);
    s1.insert(8);
    s1.insert(9);
    s1.insert(2);
    s1.insert(60);
     
    // only one 80 will be added to the set
    s1.insert(80); 
    s1.insert(1);
 
    // printing set s1
    set<int,greater<int>>::iterator it; // iterator declaration
    cout << "\nThe set s1 is : \n";
    for (it = s1.begin(); it != s1.end(); it++) 
    {
        cout << *it<<" ";
    }
    cout << endl;
 
    // assigning the elements from s1 to s2
    set<int> s2(s1.begin(), s1.end());
 
    // print all elements of the set s2
    cout << "\nThe set s2 after assign from s1 is : \n";
    for (it = s2.begin(); it != s2.end(); it++)
    {
        cout << *it<<" ";
    }
    cout << endl;
 
    // remove all elements up to 2 in s2
    cout
        << "\ns2 after removal of elements less than 2 :\n";
    s2.erase(s2.begin(), s2.find(2));
    for (it = s2.begin(); it != s2.end(); it++) {
        cout <<*it<<" ";
    }
 
    // remove element with value 10 in s2
    int num1;
    num1 = s2.erase(10);
    cout << "\ns2.erase(10) : ";
    cout << num1 << " removed\n";
    for (it = s2.begin(); it != s2.end(); it++) 
    {
        cout <<*it<<" ";
    }
 
    cout << endl;
 
    // lower bound and upper bound for set s1
    cout << "s1.lower_bound(60) : \n"
         << *s1.lower_bound(60)
         << endl;
    cout << "s1.upper_bound(60) : \n"
         << *s1.upper_bound(60)
         << endl;
 
    // lower bound and upper bound for set s2
    cout << "s2.lower_bound(9) :\n"
         << *s2.lower_bound(9)
         << endl;
    cout << "s2.upper_bound(9) : \n"
         << *s2.upper_bound(9)
         << endl;
 
    return 0;	  
  
}