#include <iostream>
using namespace std;
void primeFactor(int n){

    // check if n is prime or not 
    for(int i=2; i*i<=n ; i++){
        if(n%i==0){
            int count=0;
            while(n%i){
                count++;
                n/=i;
            }
            cout<< i<<"^"<<endl;
        }

        if(n>1) cout<< i<<"^"<<1<<endl;
    }
}
// there exist a prime factor below the sqrt of a composite number n