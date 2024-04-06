#include <iostream>
#include <cmath>
using namespace std;
float Discriminant(float a, float b, float c) {
    float D;
    D = (b * b) - (4 * a * c);
return D;
}

float Root(float D) {
    float discriminantRoot;
    if (D > 0) {
        discriminantRoot = sqrt(D);
        return discriminantRoot;
    }
    else
        cout << "No root." << endl;
    return -1;
}

int main() {
    float a,b,c,x1,x2;
    cout << "Enter a: " << endl;
    cin  >> a;
    cout << "Enter b: " << endl;
    cin >> b;
    cout << "Enter c" << endl;
    cin >> c;
    cout << a << "x^2 ";
    if (b >= 0) {
        cout << "+ ";
    }
    cout << b << "x ";
    if (c >= 0) {
        cout << "+ ";
    }
    cout << c << " = 0" << endl;
    cout << "a = "<<  a << " b= " << b << " c= "<< c << endl;
    float D = Discriminant(a,b,c);
    float discriminantRoot = Root(D);
    cout << "Discriminant = b^2 - 4ac = " << (b*b) << " - 4 *" << a << " * " << c << "= " << D << endl;
    if (D >= 0) {
        x1 = (-b + discriminantRoot) / (2 * a);
        x2 = (-b - discriminantRoot) / (2 * a);
        cout << "x1= " << x1 << " x2= " << x2 << endl;
    }
    else if (D == 0){
        x1 = (-b / (2*a));
        cout << "x= " << x1 << endl;
    }
    else {
        cout << "No answers" << endl;
    }
    return 0;
}