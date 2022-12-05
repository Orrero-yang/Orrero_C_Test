#include <bits/stdc++.h>
using namespace std;

float m, n, bmi;
int main(){
    cin >> m >> n;
    bmi = m/(n*n);
    if(bmi < 18.5){
        cout << "Underweight" << endl;
    }
    else if(bmi >= 18.5 && bmi < 24){
        cout << "Normal" << endl;
    }
    else if(bmi >= 24){
        cout << setprecision(6) << bmi << endl
             << "Overweight" << endl;
    }
    return 0;
}