void b(int n);
void a(int n){
    if(n>0){
        cout << n << " ";
        b(n - 1);
    }
}
void b(int n){
    if(n/1){
        cout << n << " ";
        a(n / 2);
    }
}
int main() {
    spd();
b(20);
// OutPut => 20 10 9 4 3 1
   return 0;
}
