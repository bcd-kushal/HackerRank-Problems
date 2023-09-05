vector<int> maximumPerimeterTriangle(vector<int> sticks) {

    sort(sticks.begin(), sticks.end(), greater<int>());

    for(int i=0; i<sticks.size()-2; i++) {
        if(sticks[i] < sticks[i+1] + sticks[i+2]) {
            vector<int> triangle = {sticks[i+2],sticks[i+1],sticks[i]};
            return triangle;
        }
    }

    return {-1};
}
