#include<vector>
#include<iostream>
#include<list>
#include<queue>

using namespace std;
int main()
{
	//vector
	vector<int>v;
	for(int i=1;i<=10;i++)
	{
		v.push_back(i); //push_back() function inserts element into the vector
	}
	cout<<"Elements in the vector : ";
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";
	cout<<"\nSize of the vector v is : "<<v.size()<<endl;//v.size() compute the size of the vector
	cout<<endl<<endl;
	
	//list
	list<int>l1,l2;
	for(int i=1;i<11;i++)
	{
		l1.push_back(i); // push_back() inserts the element from the back of the list
		l2.push_front(i); // push_front() inserts the element from the front of the list
	}
	cout<<"Elements in list1 : ";
	for(auto i=l1.begin();i!=l1.end();i++)
	cout<<*i<<" ";
	cout<<"\nElements in list2 : ";
	for(auto i=l2.begin();i!=l2.end();i++)
	cout<<*i<<" ";
	cout<<"\nSize of list1 : "<<l1.size()<<endl; // l1.size() tells how many elements are there in list
	cout<<"size of list2 : "<<l2.size()<<endl;
	//front() returns the element present at the front of the list and back() returns the element present at the end of the list
	cout<<"Element at the front of list1 and list2 respectively : "<<l1.front()<<"   "<<l2.front()<<endl;
	cout<<"Element at the back of list1 and list2 respectively : "<<l1.back()<<"  "<<l2.back();
	// pop_fornt() removes element front the front of the list and pop_back() removes element from the back of the list
	l1.pop_front();
	l2.pop_back();
	cout<<endl;
	cout<<"Lists1 after pop_front : ";
	for(auto i=l1.begin();i!=l1.end();i++)
	cout<<*i<<" ";
	cout<<endl;
	cout<<"List2 after pop_back :";
	for(auto i=l2.begin();i!=l2.end();i++)
	cout<<*i<<" ";
	cout<<endl<<endl;
	
	//deque
	deque<int>dq; 
    dq.push_back(5); //push_back() inserts element from the back,  and push_front inserts element from the front of the dque
    dq.push_front(2); 
    dq.push_back(10); 
    dq.push_front(9); 
    cout << "The deque elements is : "; 
    for(auto i=dq.begin();i!=dq.end();i++)
	cout<<*i<<" "; 
  
    cout << "\ndq.size() : " << dq.size(); 
    cout << "\ndq.max_size() : " << dq.max_size(); 
  
    cout << "\ndq.at(2) : " << dq.at(3); //returns the element at the specific position
    cout << "\ndq.front() : " << dq.front(); //returns the front element
    cout << "\ndq.back() : " << dq.back(); // returns the element present at the back
  
    cout << "\ndq.pop_front() : "; //pops the element from the front
    dq.pop_front(); 
    for(auto i=dq.begin();i!=dq.end();i++)
	cout<<*i<<" "; 
  
    cout << "\ndq.pop_back() : "; 
    dq.pop_back(); // pops element from the back of the dque
    for(auto i=dq.begin();i!=dq.end();i++)
	cout<<*i<<" "; 
}


