#define _CRT_SECURE_NO_DEPRECATE
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <utility>
#include <cstdlib>
#include <cmath>
#include <regex>
#include <vector>
#include <utility>
#include <iomanip>
#include <cstring>
#include <string>
#include <set>
#include <deque>

void fileIO(void) {

#ifndef ONLINE_JUDGE

    freopen("C:\\Users\\NV\\source\\repos\\problems\\input.txt", "r", stdin);
    freopen("C:\\Users\\NV\\source\\repos\\problems\\output.txt", "w", stdout);

#endif

}



using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

typedef pair<int, int> pii;
typedef pair<int, pii> piii;

typedef pair<ll, ll> pll;
typedef pair<ll, pll> plll;

typedef pair<ll, ld> pld;
typedef pair<double, pii> pdii;

typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<piii> viii;

typedef vector<ll> vl;
typedef vector<pll> vll;
typedef vector<plll> vlll;

typedef vector<string> vs;
typedef vector<bool> vb;

typedef vector<vl> vvl;
#define loop(n)          for(int i = 0; i < (n); i++)
#define loop2(n)          for(int j = 0; j < (n); j++)
#define loop1(n)          for(int i = 1; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define for_each(n)     for(auto &it : n)
#define SZ(v) ((int)((v).size()))
#define MP make_pair
#define PB push_back
#define len(s)   (int)s.length()
#define sz(v)    (int)v.size()
#define all(a)   a.begin(),a.end()
#define all_r(a)   a.rbegin(),a.rend()

//sort(all(),greater<type>())
//is_sorted(all())
#define clr(x, val)    memset((x), (val), sizeof(x))

#define tests int t; cin >> t; int i = 0; while(i++ < t)

#define endl << '\n'

ll combination(int n, int r){
ll rF = 1;
ll tmp = 2;
for(int i = r+1 ; i<= n ; i++){
    rF *=i;
    if(tmp<= n-r &&rF % tmp == 0){
        rF/=tmp;
        tmp++;
    }
}
return rF;
}
// ﴿وَٱسۡتَعِینُوا۟ بِٱلصَّبۡرِ وَٱلصَّلَوٰةِۚ وَإِنَّهَا لَكَبِیرَةٌ إِلَّا عَلَى ٱلۡخَـٰشِعِینَ﴾ [البقرة 45].
using namespace std;
int main() {
    spd();
int n,r;
cin>>n>>r;
if(r>n){
    cout<<0;return 0;
}
    cout<<combination(n,r);
}
