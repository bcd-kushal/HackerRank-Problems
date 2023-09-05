#include <bits/stdc++.h>
using namespace std;

string getXOR(string s,string t){
    for(int i=0;i<s.size();i++){
        if(s[i]=='1')
            s[i]=(t[i]=='1')?'0':'1';
        else
            s[i]=(t[i]=='1')?'1':'0';
    }
    return s;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s,t;
    cin>>s>>t;
    cout << getXOR(s,t);
    return 0;
}

