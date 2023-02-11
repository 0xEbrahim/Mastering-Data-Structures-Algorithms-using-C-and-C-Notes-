#include <bits/stdc++.h>
using namespace std;
void treeRecursion(int n){
    if(n>0){
        printf("%d ",n); // => excuted
        treeRecursion(n-1); // => excuted with recursive return
        
        treeRecursion(n-1); // => excuted on the return of the first
    }
}
int main() {
    treeRecursion(5);
// output => 5 4 3 2 1 1 2 1 1 3 2 1 1 2 1 1 4 3 2 1 1 2 1 1 3 2 1 1 2 1 1
    return 0;
}
