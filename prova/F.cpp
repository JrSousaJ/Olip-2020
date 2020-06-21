#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

bool ok(string a, string b){
    if(a.size() < b.size()) return false;

    for(int i=0;i<b.size();i++){
        if(a[i] != b[i]) return false;
    }

    return true;

}

int main(){
    int t;
    scanf("%d",&t);
    vector<string> add;
    map<string, int> mp;
    while(t--){
        char a[100], b[100];
        scanf("%s %s", a, b);
        if(strcmp(a, "add") == 0){
            string aux = "";
            for(int i=0;i<strlen(b);i++){
                aux+=b[i];
                mp[aux]++;
            }
        }else{
            printf("%d\n", mp[b]);
        }
    }
    return 0;
}
