#include <iostream>
#define ll long long
using namespace std;

void bin(ll i){
   if(i>0){
       bin(i/2);
       cout<<i%2;
       
   }
}
int main() {
int t;cin>>t;while(t--){int n;cin>>n;bin(n);cout<<endl;}
}



