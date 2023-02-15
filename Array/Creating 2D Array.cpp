#include <iostream>
using namespace std;
int main(){
 int **ptr;
 ptr = new int*[3];
 ptr[0] = new int[3];
 ptr[1] = new int[3];
 ptr[2] = new int[3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            ptr[i][j]=5;
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout<<ptr[i][j]<<" ";
        }
        cout<<endl;
    }
}
