#include <bits/stdc++.h>
using namespace std;

int main(){
    float h, r, v, num;
    
    cin >> h >> r;
    v = 3.1415926*r*r*h;
    num = ceil(20000/v);

    cout << num << endl;
    return 0;
}