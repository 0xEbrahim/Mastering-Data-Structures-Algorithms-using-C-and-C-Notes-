#include <bits/stdc++.h>
using namespcae std;
long long powerRecursion(int num, int n){
    if(n==0)return 1;
    return num* powerRecursion(num,n-1);
}
using namespace std;
int main() {
    spd();
cout<<powerRecursion(2,5);
}
