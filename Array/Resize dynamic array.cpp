#include <iostream>
using namespace std;
int main(){
    int *ptr = new int[5];
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;
    int *ptr2 = new int[10];
    for(int i = 0 ; i < 5 ; i++){
        ptr2[i] = ptr[i];
    }
    free(ptr);
    ptr = ptr2;
    ptr2 = nullptr;
    ptr[5] = 6;
    ptr[6] = 7;
    ptr[7] = 8;
    ptr[8] = 9;
    ptr[9] = 10;
    for(int i = 0 ; i < 10 ; i++){
        cout << ptr[i] << endl;
    }
}
