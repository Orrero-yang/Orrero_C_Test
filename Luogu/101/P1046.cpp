#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[10], b, c = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &b);
    for(int n = 0; n < 10; n++){
        if(a[n] <= (b + 30)){
            c++;
        }        
    }
    printf("%d", c);
    return 0;
}