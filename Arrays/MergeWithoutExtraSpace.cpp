//TLE
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n ,m;
	    cin>>n>>m;
	    vector<int> arr(m + n, -1);
	    vector<int> srr;
	    for(int i = 0; i < n; i++){
	        int x;
	        cin>>x;
	        arr[i] = x;
	    }
	    for(int i = 0; i < m; i++){
	        int x;
	        cin>>x;
	        srr.push_back(x);
	    }
	    int i = 0, j = 0;
	    while(i < m + n && j < m){
	        if(arr[i] == -1 && arr[i] <= srr[j]) arr[i++] = srr[j++];
	        else if(arr[i] <= srr[j]) i++;
	        else {
	            int b = srr[j];
	            int pos = i;
	            while(pos < m + n){
	                int a = arr[pos];
	                arr[pos] = b;
	                b = a;
	                pos++;
	            }
	            i++;
	            j++;
	        }
	     
	    }
	    for(int i = 0 ; i < n + m; i++) cout<<arr[i]<<" ";
	    cout<<endl;
	}
	return 0;
}

//TLE
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n ,m;
	    cin>>n>>m;
	    vector<int> arr;
	    vector<int> srr;
	    for(int i = 0; i < n; i++){
	        int x;
	        cin>>x;
	        arr.push_back(x);
	    }
	    for(int i = 0; i < m; i++){
	        int x;
	        cin>>x;
	        srr.push_back(x);
	    }
	    int i = 0, j = 0;
	    while(i < n && j < m){
	        if(arr[i] <= srr[j]) i++;
	        else {
	            arr.insert(arr.begin() + i, srr[j]);
	            j++;
	        }
	    }
	    while(j < m) arr.push_back(srr[j++]);
	    for(int i = 0 ; i < n + m; i++) cout<<arr[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
