
vector<int> closestNumbers(vector<int> arr) {
    sort(arr.begin(),arr.end());

    int smallest_diff=INT_MAX;
    for(int i=0;i<arr.size()-1;i++)
        smallest_diff=min(smallest_diff,abs(arr[i]-arr[i+1]));

    vector<int> ans;
    for(int i=0;i<arr.size()-1;i++){
        if(abs(arr[i]-arr[i+1])==smallest_diff){
            ans.push_back(arr[i]);
            ans.push_back(arr[i+1]);
        }
    }
    return ans;
}
