//void right_max(vi&v,int n,int st = 0){
//    if(st==n-1){
//        return;
//    }
//    right_max(v,n,st+1);
//    v[st] = max(v[st],v[st+1]);
//}

//void right_max(vi&v,int n){
//    if(n==0){
//        return ;
//    }
//
//    v[n-1] = max(v[n],v[n-1]);
//    right_max(v,n-1);
//}
//int suffix(vi&v,int n,int N){
//    if(N==0){
//        return 0;
//    }
//    return v[n-1]+ suffix(v,n-1,N-1);
//}
//int prefix(vi&v,int n,int N){
//if(N==0){
//    return 0;
//}
//return v[N-1]+ prefix(v,n,N-1);
//}

//bool is_palindrome(vi&v,int n,int st = 0){
//    if(st==n){
//        return true;
//    }
//  if(v[st]!=v[n]){
//      return false;
//  }
//  if(st<n+1){
//      return is_palindrome(v,n-1,st+1);
//  }
//}
//bool is_pre(string s,string p,int st = 0){
//    if(st == p.size())return true;
//    if(s[st]!=p[st])return false;
//    if(p.size()==0)return true;
//    return is_pre(s,p,st+1);
//}
//bool is_prime(int n,int st = 2){
//    if(n<=2){
//        return true;
//    }
//    if(st>sqrt(n)){
//        return true;
//    }
//    if(n%st == 0)return false;
//    return is_prime(n,st+1);
//}
//
//int count_prime(int st,int ed){
//    if(st>ed){
//        return 0;
//    }
//    if(is_prime(st)){
//        return 1 + count_prime(st+1,ed);
//    }
//    return count_prime(st+1,ed);
//}
