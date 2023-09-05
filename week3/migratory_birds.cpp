
int migratoryBirds(vector<int> arr) {
    sort(arr.begin(),arr.end(),greater<int>());

    unordered_map<int,int> hash;
    int max_sights=0;

    for(auto el: arr){
        hash[el]+=1;
        if(hash[el]>max_sights)
            max_sights = hash[el];
    }

    for(auto x: hash){
        if(x.second==max_sights)
            return x.first;
    }

    return 0;
}
