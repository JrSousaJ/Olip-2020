#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAX = 1e5 + 10;

int pai[MAX], peso[MAX];

int find(int u){ return pai[u] == u ? u : pai[u] = find(pai[u]); }

void join(int x, int y){
    x = find(x), y = find(y);
    if(x == y) return;

    if(peso[x] < peso[y]) swap(x, y);

    pai[y] = x;
    peso[x]+=peso[y];

}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n, m;
        ll b, e;
        scanf("%d%d%lld%lld",&n,&m,&b,&e);
        for(int i=0;i<=n;i++) pai[i] = i, peso[i] = 1;

        while(m--){
            int x, y;
            scanf("%d%d",&x,&y);
            join(x, y);
        }

        ll ans = 0;

        for(int i=1;i<=n;i++){
            if(find(i) == i){
                //printf("%d = %d\n", find(i), peso[find(i)]);
                ll aux = peso[find(i)] - 1;
                aux = aux * e;
                aux+=b;

                //printf("aux %d\n", aux);

                ll aux2 = peso[find(i)] * b;

                ans+=min(aux, aux2);

            }
        }

        printf("%lld\n", ans);

    }
    return 0;
}
