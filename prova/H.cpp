#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAX = 1e5 + 5;
int bloco[320][MAX], vet[MAX], vis[MAX], raiz;
vector<int> dif;

int consulta(int p1, int p2, int w){
	int l = p1/raiz;
	int r = p2/raiz;
	int ans = 0;
	if(l == r){
        for(int i = p1 ; i <= p2 ; i++){
            ans += (vet[i] == w);
            if(ans > w) return 0;
        }
	}
	else{
	    for(int i = l + 1 ; i < r ; i++){
            ans +=  bloco[i][w];
            if(ans > w) return 0;
	    }
	    for(int i = p1; i < ((l + 1)*raiz); i++){
            ans += (vet[i] == w);
            if(ans > w) return 0;
	    }
        for(int i = r*raiz; i <= p2; i++){
            ans += (vet[i] == w);
            if(ans > w) return 0;
        }
   }

   return ans == w;
}



int main(){
    int n, q;
    scanf("%d%d",&n,&q);

    raiz = sqrt(n);

    for(int i=0;i<n;i++){
        scanf("%d", &vet[i]);
        if(vet[i] > n) vet[i] = 0;
        bloco[i/raiz][vet[i]]++;
        if(!vis[ vet[i] ] && vet[i]){
            dif.push_back(vet[i]);
        }
        vis[ vet[i] ]++;
    }

    vector<int> diff;

    for(int i=0;i<dif.size();i++){
        if(vis[ dif[i] ] < dif[i]) continue;
        diff.push_back(dif[i]);
    }

    int l, r;

    while(q--){
        scanf("%d%d",&l,&r);
        int ans = 0;
        for(int i=0;i<diff.size();i++){
            ans+=consulta(l-1, r-1, diff[i]);
        }
        printf("%d\n", ans);
    }

    return 0;
}
