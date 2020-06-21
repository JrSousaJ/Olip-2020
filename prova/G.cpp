#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    double a, b;
    cin >> a >> b;
    double ans = 1;

    for(int i = a-1; i >= a - b + 1; i--)
        ans*=i/a;

    ans*=100.0;

    printf("%.2lf\n", (double)100 - ans);

    return 0;
}
