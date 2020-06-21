#include<bits/stdc++.h>

using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    fastio
    int a,b;scanf("%d %d",&a,&b);
    int xa,ya,xb,yb;
    vector<pair<int,pair<int,int> > > coord;// 1 - normal 2-invertido
    for(int i=0;i<a;i++)
    {
        string s;cin >> s;
        for(int j=0;j<b;j++)
        {
            if(s[j]=='A')
            {
                xa = i;
                ya = j;
            }
            else if(s[j]=='B')
            {
                xb = i;
                yb = j;
            }
            else if(s[j]!='.')
            {
                if(s[j]=='+')
                    coord.push_back({1,{i,j}});
                else coord.push_back({2,{i,j}});
            }
        }
    }
        
    return 0;
}
