vector<int> showZigZag(vector<int> arr){
    sort(arr.begin(),arr.end());
    int n=arr.size();
    int k=(n+1)/2;
    for(int i=k-1;i<=n-1;i++){
        int t = arr[i-k-1];
        arr[i-k-1]=arr[k-1];
        arr[k-1]=t;
    }
    sort(arr.begin()+k,arr.end(),greater<int>());
    return arr;
}
