#include <iostream>
#define ll long long
using namespace std;

int rec(ll i){

if(i>0) {
    rec(i/10);
        cout<<i%10<<" ";
    }

  return 0;
}
int main() {
ll n;cin>>n;
while(n--){
   ll t;cin>>t;
   if(t==0)
       cout<<'0';
   else
       rec(t);
   cout<<endl;
}


}
