
int isPrime[1000001];

void seive(){
    int maxN= 1000000;
    // initially all are marked prime
    for(int i=1; i<=maxN; i++) isPrime[i]=1;
    // 0 and 1 are not prime 
    isPrime[0]= isPrime[1]= 0;
    for(int i=2; i*i<=maxN; i++){
        if(isPrime[i]){
            for(int j=i*i ; j<=maxN; j+=i) isPrime[j]=0;
        }
    }
}
