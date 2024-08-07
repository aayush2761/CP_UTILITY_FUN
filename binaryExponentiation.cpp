// calcu;ate a^n in O(log n ) time complexity 

void bionomialExp(int n , int a ){
    int res=1;
    while(n--){
        if(n%2==0){
            res*=2;
            n--;
        } 
        else{
            n/=2;
            a*=a;
        }
    }
    return res;
}