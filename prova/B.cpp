#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int p, q;
    scanf("%d%d",&p,&q);
    vector<pair<int, pair<int, string> > > vet;
    int cont = 0;

    while(q--){
        int hora, minuto;
        string pessoa;
        char c;
        scanf("%d %c%d",&hora, &c, &minuto);
        cin >> pessoa;
        if(hora == 23){
            if(abs(60 - minuto) <= p) vet.push_back({minuto - 60, {cont, pessoa}});
        }else if(hora == 0){
            if(minuto <= p) vet.push_back({minuto, {cont, pessoa}});
        }

        cont++;
    }

    sort(vet.begin(), vet.end());

    for(int i=0;i<vet.size();i++){
        cout << vet[i].second.second << "\n";
    }
    return 0;
}
