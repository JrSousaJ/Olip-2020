#include<bits/stdc++.h>

using namespace std;

double dp[105][105];
int n;
double k;
double custo[105], valor[105];

double solve(int pos, int resto){

    if(pos == n) return 0.0;

    if(resto == 0) return 0.0;

    if(dp[pos][resto] != -1.0) return dp[pos][resto];

    double r1 = solve(pos+1, resto);

    double r2 = 0.0;

    if(custo[pos] <= resto){
        r2 = solve(pos+1, resto - custo[pos]) + valor[pos];
    }else{
        double aux =  (double) (valor[pos] * resto)/custo[pos];
        //printf("pos %d resto %d Aux %.2lf\n", pos, resto, aux);
        r2 = solve(pos+1, 0) + aux;
    }

    return dp[pos][resto] = max(r1, r2);

}

/*
    1
2 10
2 5
3 6
*/

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d%lf",&n,&k);
        /*for(int i=0;i<=n;i++)
            for(int j=0;j<=k;j++)
                dp[i][j] = -1.0;*/

        vector<pair<double, pair<double, double> > > vet;

        for(int i=0;i<n;i++){
            scanf("%lf%lf", &valor[i], &custo[i]);
            vet.push_back({(custo[i]/valor[i]), {valor[i], custo[i]}});
        }

        sort(vet.begin(), vet.end());

        double ans = 0;

        for(int i=0;i<vet.size();i++){
            //printf("%lf %lf\n", vet[i].second.first, vet[i].second.second);
            if(k < vet[i].second.second){
                ans+=(double) (vet[i].second.first * k)/vet[i].second.second;
                break;
            }
            k-=vet[i].second.second;
            ans+=vet[i].second.first;
        }


        printf("%.2lf\n", ans);

    }

    return 0;
}
