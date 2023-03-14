// Author: Ryan O'Callaghan
// Problem: (A. Football) https://codeforces.com/problemset/problem/43/A
// Date: 2023-03-13

#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()
#define yes cout << "YES\n"
#define no cout << "NO\n"

using ll = long long;

void solve() {
    int n, t1 = 0, t2 = 0; cin >> n;

    string starter, otherteam; cin >> starter;
    t1++;

    for(int i = 0; i < n-1; i++) {
        string s; cin >> s;
        if(s == starter) {t1++;} else {otherteam = s; t2++;}
    }

    t1 > t2 ? cout << starter << '\n' : cout << otherteam << '\n';

}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int TC = 1;
    //cin >> TC;
    while(TC--) solve();
}