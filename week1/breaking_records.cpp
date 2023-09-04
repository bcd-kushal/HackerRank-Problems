
vector<int> breakingRecords(vector<int> scores) {
    int min=scores[0], max=scores[0];
    vector<int> record(2,0);

    for(int i=1;i<scores.size();i++){
        if(scores[i]<min){
            min=scores[i];
            record[1]+=1;
        }
        if(scores[i]>max){
            max=scores[i];
            record[0]+=1;
        }
    }

    return record;
}
