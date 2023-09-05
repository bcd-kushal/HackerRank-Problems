
int sockMerchant(int n, vector<int> ar) {
    unordered_map<int,int> sock_count;
    int pairs = 0;

    for(auto color: ar){
        sock_count[color]+=1;
        if(sock_count[color]>0 && sock_count[color]%2==0){
            ++pairs;
            sock_count[color]-=2;
        }
    }

    return pairs;
}
