
int divisibleSumPairs(int n, int k, vector<int> ar) {
    for(auto &num: ar)
        num%=k;

    int count=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)    continue;
            if((ar[i]+ar[j])%k==0)
                ++count;
        }
    }
    return count/2;
}
