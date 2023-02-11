// head recursion
// all commands on the recursive function get excuted on the return time..

#include <bits/stdc++.h>
using namespace std;
void headRecursion(int n){
    if(n>=0){
        headRecursion(n-1);
        printf("%d ",n);

    }
}
int main() {
    headRecursion(5);
    return 0;
}

//output => 0  1  2  3  4  5
