//SLIDING WINDOW
using namespace std;

int maxFun(vector<int> arr, int s, int k){
    int res = INT_MIN;
    for(int i = s ;  i < s + k; i++){
	     res = max(arr[i], res);
	}
	return res;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int> arr;
	    vector<int> res;
	    for(int i = 0 ; i < n; i++){
	        int x;
	        cin>>x;
	        arr.push_back(x);
	    }
	    int val = maxFun(arr, 0, k);
	    res.push_back(val);
	    int j = 0;
	    for(int i = k; i < n; i++){
	        if(arr[i] >= val) val = arr[i];
	        else if(arr[j] == val) val = maxFun(arr, j + 1, k);
	        res.push_back(val);
	        j++;
	    }
	    for(int i = 0 ; i < res.size(); i++) cout<<res[i]<<" ";
	    cout<<endl;
	}
	return 0;
}

//DEQUE
#include<bits/stdc++.h>
using namespace std;

void fun(){
    int n,k;
	cin>>n;
	cin>>k;
	int A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	deque<int> deque;
	
	for(int i = 0;i < k && i < n; i++){
		while(!deque.empty() && A[i] > deque.back()){
			deque.pop_back();		
		}
		deque.push_back(A[i]);
	}
	
	cout<<deque.front()<<" ";
	
	for(int i = 1; i <= n - k; i++){
	    
		if(A[i - 1] == deque.front()){
			deque.pop_front();
		}
		
		while(!deque.empty() && A[i + k - 1] > deque.back()){
			deque.pop_back();		
		}
		
		deque.push_back(A[ i + k - 1]);
		
		cout<<deque.front()<<" ";
	}
	
}
int main() {
	int TestCase;
	cin>>TestCase;
	while(TestCase > 0){
        fun();
        cout<<"\n";
	    TestCase--;
	}
	return 0;
}
