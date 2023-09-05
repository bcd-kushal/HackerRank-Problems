string caesarCipher(string s, int k) {
    for(int i=0;i<s.size();i++){
        if(tolower(s[i])>=97 && tolower(s[i])<=122){
            char x = 97 + (tolower(s[i])-97+k)%26;
            if(s[i]>=97)
                s[i]=x;
            else
                s[i]=x-32;
        }
    }
    return s;
}
