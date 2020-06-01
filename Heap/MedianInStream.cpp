#include <bits/stdc++.h>
using namespace std;

int main() {
	priority_queue <int, vector<int>, greater<int> > pq;
	priority_queue <int> p;
	int n;
	cin>>n;
	int val;
	cin>>val;
	p.push(val);
	cout<<val<<endl;
	cin>>val;
	pq.push(val);
	cout<<(pq.top() + p.top())/2<<endl;
	n -= 2;
	while(n--){
	    cin>>val;
	    
	    if(val < p.top()){
	        p.push(val);
	    } else if(val > pq.top()){
	        pq.push(val);
	    }else
	        p.push(val);
	    
	    if(p.size() - pq.size() == 1){
	        cout<<p.top()<<endl;
	    }else if(p.size() - pq.size() == 2){
	        int x = p.top();
	        p.pop();
	        pq.push(x);
	        cout<<(pq.top() + p.top())/2<<endl;
	    } else{
	        cout<<(pq.top() + p.top())/2<<endl;
	    }
	}
	
	return 0;
}
