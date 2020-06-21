#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    char s[200];

    scanf("%d", &n);

    map<char, string> mp;

    string aux = "2";

    for(char c = 'a'; c <= 'c'; c++){
        mp[c] = aux;
        aux+="2";
    }

    aux = "3";

    for(char c = 'd'; c <= 'f'; c++){
        mp[c] = aux;
        aux+="3";
    }

    aux = "4";

    for(char c = 'g'; c <= 'i'; c++){
        mp[c] = aux;
        aux+="4";
    }

    aux = "5";

    for(char c = 'j'; c <= 'l'; c++){
        mp[c] = aux;
        aux+="5";
    }

    aux = "6";

    for(char c = 'm'; c <= 'o'; c++){
        mp[c] = aux;
        aux+="6";
    }

    aux = "7";

    for(char c = 'p'; c <= 's'; c++){
        mp[c] = aux;
        aux+="7";
    }

    aux = "8";

    for(char c = 't'; c <= 'v'; c++){
        mp[c] = aux;
        aux+="8";
    }

    aux = "9";

    for(char c = 'w'; c <= 'z'; c++){
        mp[c] = aux;
        aux+="9";
    }

    while(n--) {

        scanf(" %[^\n]s", s);

        for(int i=0;i<strlen(s);i++){
            if(s[i] == ' ') printf("0");
            else if(s[i] >= 'A' && s[i] <= 'Z'){
                printf("#");
                s[i]+=32;
                cout << mp[ s[i] ];
            }else{
                if(i-1 >= 0){
                    if(s[i-1] != ' '){
                        if(mp[s[i-1]][0] == mp[s[i]][0]) printf("*");
                    }
                }
                cout << mp[ s[i] ];
            }
        }
        printf("\n");

    }

    return 0;
}
