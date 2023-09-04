
string pangrams(string s) {
    vector<int> alphabets(26,0);
    for(int i=0;i<s.size();i++)
        alphabets[toupper(s[i])-65]+=1;

    for(int i=0;i<26;i++)
        if(alphabets[i]==0)
            return "not pangram";

    return "pangram";

}
