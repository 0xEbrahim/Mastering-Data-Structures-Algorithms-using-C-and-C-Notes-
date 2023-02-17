bool is_prime(int n,int i = 2){
    if(n<2){
        return false;
    }
    if(i>sqrt(n)){
        return true;
    }
    if(n%i==0) { return false; }
    return is_prime(n,i+1);
}

int count_primes(int st, int ed){

    if(st>ed){
        return 0;
    }
    if(is_prime(st)){
        return 1 + count_primes(st+1,ed);
    }
       return  count_primes(st+1,ed);
}
