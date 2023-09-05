
int pageCount(int n, int p) {
    if((p/2+1) > (n/2+1)/2)
        return n/2-p/2;
    return p/2;
}
