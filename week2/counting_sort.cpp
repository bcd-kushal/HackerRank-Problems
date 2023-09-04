
vector<int> countingSort(vector<int> arr) {
    vector<int> freq(100,0);

    for(auto num: arr)
        freq[num]+=1;

    return freq;
}
