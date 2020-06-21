#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define forn(x) for(int i=0;i<x;i++)
#define nfor(x) for(int i=x;i>=0;i--)
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)  //impar
            res = res * a;
        a = a * a ;
        b >>= 1;  // /2
    }
    return res;
}
int main()
{
    fastio
    char s[400];
    scanf(" %[^\n]",s);
    printf("Nao se refuta ciencia com opiniao\n");

    return 0;
}
