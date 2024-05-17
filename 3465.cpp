#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << fixed << setprecision(3);
    double a,b,c; cin >> a >> b >> c;
    double area,peri = (a+b+c)/2;

    double p1 = peri-a, p2 = peri-b, p3 = peri-c;
	
	peri=peri*p1*p2*p3;
	area = sqrt(peri);

    cout << area << " m2" << endl;

}