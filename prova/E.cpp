#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

struct pontos{
    int x, y;
};

double determinante(pontos a, pontos b, pontos c){

    double l1 = (a.x * b.y) + (a.y * c.x) + (b.x * c.y);

    double l2 = (b.y * c.x) + (a.x * c.y) + (a.y * b.x);

    double area = abs(l1 - l2);

    area = area / 2.0;

    return area;

}

int main(){
    pontos A[10], B[10];

    for(int i=0;i<4;i++) scanf("%d%d", &A[i].x, &A[i].y);

    for(int i=0;i<4;i++) scanf("%d%d", &B[i].x, &B[i].y);

    double a1 = determinante(A[0], A[1], A[3]), a2 = determinante(A[1], A[2], A[3]);

    double b1 = determinante(B[0], B[1], B[3]), b2 = determinante(B[1], B[2], B[3]);

    double xx = (a1 + a2);
    double yy = (b1 + b2);

    if(xx > yy) printf("terreno A\n");
    else printf("terreno B\n");


    return 0;
}
