#include <bits/stdc++.h>
using namespace std;

int a;
float ans;
int main(){
    cin >> a;

    if(a <= 150) ans = a * 0.4463;
    else if(a > 150 && a <= 400){
        ans = 150 * 0.4463 + (a - 150) * 0.4663;
    }else{
        ans = 150 * 0.4463 + 250 * 0.4663 + (a - 400) * 0.5663;
    }

    cout << fixed << setprecision(1) << ans << endl;
    return 0;
}