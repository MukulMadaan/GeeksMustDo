bool cmp(pair<int,int> a, pair<int,int> b)
{
    if(a.second!=b.second)
        return a.second > b.second;
    return a.first < b.first;    
}

vector<int> sortByFreq(int a[],int n)
{
    unordered_map<int, int> m;
    for(int i = 0 ; i < n ; i++)
        m[a[i]]++;

    vector<pair<int,int>> v( m.begin() , m.end() );
    sort(v.begin(),v.end(), cmp );
    vector<int> res;
    int i=0;
    for(int i = 0 ; i < v.size(); i++){
        while(v[i].second--) res.push_back(v[i].first);
    }
    return res;
}
