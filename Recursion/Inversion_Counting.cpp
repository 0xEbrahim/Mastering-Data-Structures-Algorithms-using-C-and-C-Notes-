#include <bits/stdc++.h>
#include <list>
#include <queue>
#include <unordered_set>
#include <utility>
#include <string>
//#include <boost/multiprecision/cpp_int.hpp>
#define int64 long long
#define all(v) ((v).begin()), ((v).end())
#define sz(v) ((int)(v).size())
#define ON(n , k) ((n) | (1<<k))
#define uint unsigned long long
#define pb push_back
#define OFF(n , k) ((n) & ~(1<<k))
#define isON(n , k) (((n)>>(k))&1)
#define FLIP(n , k) ((n)^(1<<k))
#define int long long
#define output(v) for(auto&it:v){cout<<it<<" ";}cout<<"\n"
#define input(v) for(auto&it:v){cin>>it;}
#define ll long long
#define endl '\n'
#define ordered_set tree< int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
void NARUTO_UZUMAKI(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void UCHIHA_SASUKI(void) {
#ifndef ONLINE_JUDGE
    freopen("/home/ebrahimelsayed/Desktop/NEW/input.txt", "r", stdin);
    //  freopen("output.txt", "w", stdout);

#endif
}
void preCalc()
{

}
/*
 * auto calc = [&](int x) -> int  {
    return x;
};

 * */


const int MX = 1e6 + 7 ;
const int INF = 1e18;
vector<bool>vis,path;
//bool used[MX];
int graph[200][200];
vector<vector<int>>adj;
void make_graph(int y){
    for(int i = 0 ; i < y ; i++ ){
        int u , v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
}
int o = 0 ;
void merge(vector<int>&v , int s , int e){
    int i = s ;
    int mid = s + (e - s)/2;
    int j = mid + 1;
    vector<int>tmp;
    while(i <= mid and j <= e){
        if(v[i] < v[j])
            tmp.pb(v[i++]), o++;
        else
            tmp.pb(v[j++]), o++;
    }
    while(i <= mid)
        tmp.pb(v[i++]);
    while(j <= e)
        tmp.pb(v[j++]);
    int cnt = 0 ;
    for(int l = s ; l <= e ; l++)
        v[l] = tmp[cnt++];
}

void mergesort(vector<int>&v , int s , int e){
    if(s >= e)
        return;
    int mid = s + (e - s)/2;
    mergesort(v, s , mid);
    mergesort(v , mid + 1 , e);
    return merge(v , s , e);
}

int count_cross(vector<int>&v , int s , int e){
    int i = s ;
    int mid = s + (e - s)/2;
    int j = mid + 1;
    vector<int>tmp;
    int count = 0 ;
    while(i <= mid and j <= e){
        if(v[i] < v[j])
            tmp.pb(v[i++]);
        else {
            count += (mid - i + 1);
            tmp.pb(v[j++]);
        }
    }
    while(i <= mid)
        tmp.pb(v[i++]);
    while(j <= e)
        tmp.pb(v[j++]);
    int cnt = 0 ;
    for(int l = s ; l <= e ; l++)
        v[l] = tmp[cnt++];
    return count;
}

int inversion_Count(vector<int>&v , int s , int e){
    if(s >= e) return 0;
    int mid = (s + e)/2;
    int c1 = inversion_Count(v , s , mid);
    int c2 = inversion_Count(v , mid + 1 , e);
    int ci = count_cross(v , s , e);
    return (c1 + c2 + ci);
}
void HANMA_BAKI(){

}



}

signed main()
{
    NARUTO_UZUMAKI();
    UCHIHA_SASUKI();
    // freopen("window.in", "r", stdin);
    preCalc();
    int t = 1 ;
    //cin >> t;


    while(t--)
        HANMA_BAKI();

}
