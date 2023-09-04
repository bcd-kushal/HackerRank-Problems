
long flippingBits(long n) {
    long ans=0;
    int i=0;
    while(i<32){
        if(n%2==0)
            ans+= pow(2,i);
        n/=2;
        i+=1;
    }
    return ans;
}
