int a[101][101];
int b[101][101];
int res[101][101];
void sum(int r1,int c1,int row,int col){
    if(r1 == row || c1 == col){
        return;
    }
    // rows = > 2
    // columns = > 3
    if(r1<row-1){
        sum(r1+1,c1,row,col);
    }else{
        sum(0,c1+1,row,col);
    }

    res[r1][c1] = a[r1][c1]+b[r1][c1];
}
int main() {
    spd();
    int r,c;
    cin>>r>>c;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin>>b[i][j];
        }
    }
sum(0,0,r,c);
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout<<res[i][j]<<" ";
        }
        cout endl;
    }

   return 0;
}
