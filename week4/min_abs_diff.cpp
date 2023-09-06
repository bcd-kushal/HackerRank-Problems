
int minimumAbsoluteDifference(vector<int> arr) {
    int global_abs_diff=INT_MAX;
    sort(arr.begin(),arr.end());

    for(int i=1;i<arr.size();i++){
        global_abs_diff = min(global_abs_diff,abs(arr[i]-arr[i-1]));
    }

    return global_abs_diff;
}
