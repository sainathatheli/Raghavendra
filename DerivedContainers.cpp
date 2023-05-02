#include<iostream>
#include<stack>
#include<queue>
#include<iterator>

using namespace std;
int main()
{
	//STACK
	stack <int> s,s1; 
    s.push(20); 
    s.push(4); 
    s.push(2); 
    s.push(7); 
    s.push(50);  
  
    cout << "\ns.size() : " << s.size(); 
    cout << "\ns.top() : " << s.top(); 
    s1=s;
    
    cout<<"\nStack is : ";
    while(!s1.empty())
    {
    	int a=s1.top();
    	s1.pop();
    	cout<<a<<" ";
	}
    cout << "\ns.pop() : "; 
    s.pop(); 
    while(!s.empty())
	{
		int a=s.top();
		s.pop();
		cout<<a<<" ";
	}
	cout<<endl;
	
	//QUEUE
	queue<int> q,q1;
    q.push(2);
    q.push(4);
    q.push(8);
    q.push(7);
    q.push(70);
 
    cout << "\nq.size() : " << q.size();
    cout << "\nq.front() : " << q.front();
    cout << "\nq.back() : " << q.back();
    
    q1=q;//assigning q to q1
    cout<<endl<<"Queue q is : ";
    while(q1.empty()==false)
    {
    	int a=q1.front();
    	q1.pop();
    	cout<<a<<" ";
	}
 
    cout << "\nq.pop() : ";
    q.pop();
    
 
    // We can also use front and back as
    // iterators to traverse through the queue
    cout << "Using iterators : ";
    for (auto i = q.front(); i != q.back(); i++) {
        cout << i << " ";
    } 
}