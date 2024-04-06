#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float a,b,c,D,Z,x1,x2;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;
	D = b*b-(4*a*c);
	cout << "Discriminant=" << D << endl;
	Z = sqrt(D);
	if (D>0) {
		cout << "Square root of the discriminant=" << Z << endl;
		x1= ((b/(-1))+Z);
		x1= (x1/(a*2));
		x2= ((b/(-1))-Z);
		x2= (x2/(a*2));
		cout << "Result: x1=" << x1 << endl << "x2=" << x2;
	}
	else if (D == 0){
		x1= (b/(-1));
		x1= (x1/(a*2));
		cout << "Result: x=" << x1;
	}
	else{
		cout << "No solution";
	}
}