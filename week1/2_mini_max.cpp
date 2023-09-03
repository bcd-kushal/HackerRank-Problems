/*
Given five positive integers, find the minimum and maximum values that
can be calculated by summing exactly four of the five integers.
Then print the respective minimum and maximum values as a single line
of two space-separated long integers.

Example
arr=[1,3,5,7,9]
The minimum sum is 16 and the maximum sum is 24. The function prints

16 24
*/

void miniMaxSum(vector<int> arr) {
    int min=INT_MAX-10,max=INT_MIN+10;
    long int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];

        if(arr[i]<min)
            min=arr[i];

        if(arr[i]>max)
            max=arr[i];
    }
    cout << (sum-max) << " " << (sum-min);
}

