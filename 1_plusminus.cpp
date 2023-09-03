/*
Given an array of integers, calculate the ratios of its elements that are positive,
negative, and zero. Print the decimal value of each fraction on a new line with
places after the decimal.

Example: arr=[1,1,0,-1,-1]
There are n=5 elements, two positive, two negative and one zero.
Their ratios are 2/5,2/5 and 1/5. Results are printed as:

0.400000
0.400000
0.200000
*/

void plusMinus(vector<int> arr) {
    int positives=0,negatives=0,zeroes=0;
    for(int i=0;i<arr.size();i++){
        if(arr.at(i)<0)         negatives+=1;
        else if(arr.at(i)>0)    positives+=1;
        else                    zeroes+=1;
    }
    double x = positives+negatives+zeroes;
    printf("%.6f",(double)(positives/x));
    printf("\n%.6f",(double)(negatives/x));
    printf("\n%.6f",(double)(zeroes/x));
}
