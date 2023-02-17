void print(int n){
    for(int i = 0 ; i < n ; i++){
        cout<<"*";
    }
    cout<<endl;
}
void print_triangle(int n){
if(n==0){
    return;
}
    print(n);
    print_triangle(n-1);
}
int main() {
    spd();
    fileIO();
    int n;cin>>n;
    print_triangle(n);
}
