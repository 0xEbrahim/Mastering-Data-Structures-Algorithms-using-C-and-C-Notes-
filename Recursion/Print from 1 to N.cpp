#include <iostream>
using namespace std;

int rec(int i){
if(i>0){
    rec(i-1);
    cout<<i<<endl;
}

  return 0;
}
int main() {
int n;cin>>n;
rec(n);

}
