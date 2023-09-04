
int diagonalDifference(vector<vector<int>> arr) {
    int n = arr[0].size();
    int totalDiff = 0;

    for(int i=0;i<n;i++){
        totalDiff+=arr[i][i]-arr[i][n-i-1];
    }

    if(totalDiff<0)
        return -1*totalDiff;
    return totalDiff;
}
