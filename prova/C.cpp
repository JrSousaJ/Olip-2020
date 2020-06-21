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
vector<vector<int> > grafo;
int main()
{
    fastio
    int a,b;scanf("%d %d",&a,&b);
    grafo.assign(a+1,vector<int>());
    forn(b)
    {
        int a,b;scanf("%d %d",&a,&b);
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }
    int f = 0;
    int imp = 0;
    int ca = 0;
    for(int i=0;i<a;i++)
    {
        ll aux = grafo[i].size();
        if(aux>0)
        {
            if(aux%2==0)
                ca++;
        }
    }
    if(ca == a)
        printf("Rambo esta salvo\n");
    else
        printf("Rambo esta perdido\n");
    return 0;
}
