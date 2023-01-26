#include <iostream>
using namespace std;

void pr(int i,int c){
    if(i!=0){
        cout<<c-i<<endl;
        pr(i-1,c);
    }
}
int main() {
// printing numbers from 1 -> n with recursion
int n;cin>>n;
int c = n+1;
pr(n,c);
}
