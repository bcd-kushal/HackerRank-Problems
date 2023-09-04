int checkSOS(string sos){
    int changed=0;
    if(sos[0]!='S')     changed+=1;
    if(sos[1]!='O')     changed+=1;
    if(sos[2]!='S')     changed+=1;
    return changed;
}

int marsExploration(string s) {
    int x=0;
    for(int i=0;i<s.size();i+=3){
        x+=checkSOS(s.substr(i,i+3));
    }
    return x;
}
