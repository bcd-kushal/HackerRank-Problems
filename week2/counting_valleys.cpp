
int countingValleys(int steps, string path) {
    int valleys=0,lvl=0,i=0;
    while(i<steps){
        if(lvl!=0){
            while(lvl!=0){
                if(path[i]=='U')    lvl+=1;
                if(path[i]=='D')    lvl-=1;
                i+=1;
            }
        }

        if(path[i]=='U')    lvl+=1;
        if(path[i]=='D'){
            lvl-=1;
            ++valleys;
        }

        i+=1;
    }
    return valleys;
}
