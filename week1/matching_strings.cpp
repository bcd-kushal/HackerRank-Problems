#include <bits/stdc++.h>
using namespace std;

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> result(queries.size(),0);

    for(int i=0; i<queries.size();i++){
        for(auto string: strings){
            if(queries[i]==string)
                result[i]+=1;
        }
    }

    return result;
}
