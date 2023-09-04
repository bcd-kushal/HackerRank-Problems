#include <bits/stdc++.h>
using namespace std;

void combine(string str){

}



void split(string str){
    string ans="";
    for(int i=0;i<str.size();i++){
        if(i==0 && (int)(str[i])>90)
            str[i]-=32;

        if(str[i]>=65 && str[i]<=90){
            ans.push_back(' ');
            ans.push_back(str[i]+32);
            i+=1;
            while(str[i]>=97 && str[i]<=122){
                ans.push_back(str[i]);
                i+=1;
            }

        }

    }

    cout << ans.substr(1);
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string str="";
    cin >> str;

    if(str[2]=='M')
        str = str.substr(0,str.size()-2);

    if(str[0]=='S')
        split(str.substr(4));
    else
        combine(str.substr(4));

    return 0;
}

