#include <bits/stdc++.h>
using namespace std;

int x;
int main(){
    cin >> x;

    if(x == 0){
        cout << "Today, I ate 0 apple." << endl;
    }
    else if(x == 1){
        cout << "Today, I ate 1 apple." << endl;
    }
    else{
        cout << "Today, I ate " << x << " apples."<< endl;
    }
    return 0;
}