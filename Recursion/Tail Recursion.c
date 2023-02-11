// tail recursion occurs when commands excuted in calling time..
// recursive function is the last thing to be excuted


#include <bits/stdc++.h>
using namespace std;
void tailRecursion(int n){
    if(n>=0){
        printf("%d ",n);
        tailRecursion(n-1);
    }
}
int main() {
    tailRecursion(5);
    return 0;
}

// output => 5 4 3 2 1 0
