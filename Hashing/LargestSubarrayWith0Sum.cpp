unordered_map<int, int> M;
	    M[0] = 1;
	    for(int i = 0; i < n; i++){
	        cin>>arr[i];
	    }
	    int sum = 0;
	    int res = 0;
	    for(int i = 0 ; i < n; i++){
	        sum += arr[i];
	        if(M.find(sum) != M.end()) res += M[sum];
	        M[sum]++;
	    }
