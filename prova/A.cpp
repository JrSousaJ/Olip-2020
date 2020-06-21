#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        ll ans = 0, tudo = 0;
        ll vet[n+5];
        for(int i=0;i<n;i++){
            scanf("%lld", &vet[i]);
            tudo+=vet[i];
        }

        sort(vet, vet+n);

        ans = tudo;

        for(int i=1;i<=n;i++){
            tudo-=vet[i-1];
            ans = max(ans, (i+1) * tudo);
        }

        printf("%lld\n", ans);
    }
    return 0;
}
