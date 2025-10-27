#include <iostream>
#include <cmath>    // untuk sqrt dan pow
using namespace std;

// Fungsi untuk menghitung jarak antara dua titik
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Fungsi untuk menghitung radius lingkaran
double radius(double x1, double y1, double x2, double y2) {
    return distance(x1, y1, x2, y2);
}

// Fungsi untuk menghitung keliling lingkaran
double circumference(double r) {
    const double PI = 3.1416;
    return 2 * PI * r;
}

// Fungsi untuk menghitung luas lingkaran
double area(double r) {
    const double PI = 3.1416;
    return PI * r * r;
}

int main() {
    double x1, y1, x2, y2;

    // Input titik pusat dan titik pada lingkaran
    cout << "Enter the coordinates of the center (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of a point on the circle (x2 y2): ";
    cin >> x2 >> y2;

    // Hitung radius
    double r = radius(x1, y1, x2, y2);

    // Hitung diameter, keliling, dan luas
    double d = 2 * r;
    double c = circumference(r);
    double a = area(r);

    // Tampilkan hasil
    cout << "\nCircle Properties:" << endl;
    cout << "Radius = " << r << endl;
    cout << "Diameter = " << d << endl;
    cout << "Circumference = " << c << endl;
    cout << "Area = " << a << endl;

    return 0;
}
