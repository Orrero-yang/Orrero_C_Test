#include<bits/stdc++.h>
using namespace std;

int n;
int main()
{
    cin >> n;
    if(n%4 != 0) cout << "0";
    else if(n%100 == 0)
	{
		if(n%400 == 0) cout << "1";
		else cout << "0";
	}
	else cout << "1";
	return 0;
}