ll lucky(ll n,ll f,ll s,ll ans){
   if(n<=ans){
       if(f==s){
           return ans;
       }
   }
   if(ans>1e9){
       return 4444477777;
   }
   ll f1 = lucky(n,f+1,s,ans*10+4);
   ll f2 = lucky(n,f,s+1,ans*10+7);
   return min(f1,f2);
}
//-----------------------------------------------------------------------------------------------------//
int series(int n){

   if(n==1){
    return 1;
   }
   cout<<n<<" ";
   if(n%2==0){
       return 1 + series(n/2);
   }else{
       return 1 + series(3*n+1);
   }
}
//-----------------------------------------------------------------------------------------------------//
int power(int val, int pow){
   if(pow == 0)return 1;
   return val*power(val,pow-1);

}
//-----------------------------------------------------------------------------------------------------//
int mx = INT_MIN;
int maxOfArr(vi&v,int n,int id){
   if(id==n) {
       return mx;
   }
mx = max(mx,v[id]);
 return maxOfArr(v,n,id+1);
}
//-----------------------------------------------------------------------------------------------------//
int maxOfArr(vi&v,int n){
   if(n==1){
       return v[0];
   }
   int sub = maxOfArr(v,n-1);
   return max(sub,v[n-1]);
}
//-----------------------------------------------------------------------------------------------------//
int sumOfArray(vi&v,int n){
   if(n==1){
       return v[0];
   }
   int sub = sumOfArray(v,n-1);
   return sub+v[n-1];
}
//-----------------------------------------------------------------------------------------------------//
double averageOfArray(vi&v ,int n){
   if(n==1){
       return v[0];
   }
   double sub = averageOfArray(v,n-1)*(n-1);
   return (sub+v[n-1])/n;
}
//-----------------------------------------------------------------------------------------------------//
void array_increament(vi&v,int n){
   if(n==0){
       return;
   }
   array_increament(v,n-1);
   v[n-1]+=n-1;
}
//-----------------------------------------------------------------------------------------------------//
void accumulate_arr(vi&v,int n){
   if(n==1){
       return;
   }
   accumulate_arr(v,n-1);
   v[n-1]+=v[n-2];
}
//-----------------------------------------------------------------------------------------------------//
void left_max(vi&v, int len){
if(len == 1){
    return;
}
   left_max(v,len-1);
v[len-1] = max(v[len-1],v[len-2]);

}
