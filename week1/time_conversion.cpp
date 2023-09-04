#include <bits/stdc++.h>
using namespace std;

string timeConversion(string s) {
    if(s[8]=='A'){      //AM CASE
        if(s.substr(0,2)=="12")
            s.replace(0,2,"00");
        return s.substr(0,8);
    } else {            // PM CASE
		
        if(s.substr(0,2)!="12"){
            int hr = (s[0]-48)*10 + s[1]-48;
            cout << hr << "\n";
            hr+=12;

            if(hr<10)
                s.replace(0,1,"0");
            else
                s.replace(0,1,"1");

            s.replace(1,1,string(1,(char)((hr%10)+48)));
        }
        return s.substr(0,8);
    }
}
int main(){
	cout << timeConversion("11:59:59PM");
	return 0;
}
