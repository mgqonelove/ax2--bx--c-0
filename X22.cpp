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
    return 0;
}

int main() {
    float a,b,c,x1,x2;
    cout << "Enter a: " << endl;
    cin  >> a;
    cout << "Enter b: " << endl;
    cin >> b;
    cout << "Enter c" << endl;
    cin >> c;
    cout << "a = "<<  a << " b = " << b << " c = "<< c << endl;
    float D = Discriminant(a,b,c);
    float discriminantRoot = Root(D);
    cout << "Discriminant = b^2 - 4ac = " << (b*b) << " - 4 * " << a << " * " << c << " = " << D << endl;
    cout << "Root of discriminant = " << discriminantRoot << endl;
    if (D > 0) {
        x1 = (-b + discriminantRoot) / (2 * a);

        cout << "x1= " << -b << "+" << discriminantRoot << " / " << "2*a" << " = ";
        cout << -b + discriminantRoot << " / " << "2 * a" << " = ";
        cout << -b + discriminantRoot << " / " << 2 * a << endl << endl;
        cout << "x1 = " << x1 <<  endl << endl;

        x2 = (-b - discriminantRoot) / (2 * a);

        cout << "x2= " << -b << "-" << discriminantRoot << " / " << "2*a" << " = ";
        cout << -b - discriminantRoot << " / " << "2*a" << " = ";
        cout << -b - discriminantRoot << " / " << 2 * a << endl << endl;
        cout << "x2 = " << x2 <<  endl << endl;

        cout << "x1= " << x1 << " x2= " << x2 << endl;
    }
    else if (D == 0){
        x1 = (-b / (2*a));
        cout << "x = " << -b << " / " << "2*a = " << -b << " / " << 2 * a << endl;
        cout << "x = " << x1 << endl;
    }
    else {
       cout << "No answers" << endl;
    }
    return 0;
}
