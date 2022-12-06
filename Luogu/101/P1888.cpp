#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[4];
    for (int i = 0; i < 3; i++){
        cin >> a[i];
    }
    sort(a, a + 3);
    cout << a[0]/__gcd(a[0], a[2]) << '/' << a[2]/__gcd(a[0], a[2]);

    return 0;
}