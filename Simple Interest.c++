#include <bits/stdc++.h>
using namespace std;

int main() 
{
    double p, r, t;
    cin >> p >> r >> t;
    double result = p * r * t/ 100;
    cout << fixed << setprecision(3) << "The interest is :" << result ;
    cout << "\nThe total value is :"  << result + p;
    return 0;
}    
