
int lonelyinteger(vector<int> a) {
    unordered_map<int,int> hash;

    for(auto num: a)
        hash[num]+=1;

    for(auto x: hash)
        if(x.second==1)
            return x.first;

    return 0;
}
