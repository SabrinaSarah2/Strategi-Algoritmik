#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int s;
    int v;
    double waktu;
    double sinA;

    cout<< "Menghitung Waktu yg diperlukan BORO untuk mencapai jarak horizontal terjauh\n";
    
    cout<< " Masukkan sudut :";
	cin >> s;
	cout<< "Masukkan kecepatan :";
    cin >> v;
    sinA = sin(s * ((double) 22 / 7) / 180);
    waktu = 2 * (v * sinA) / 10;
    "Waktu yang diperlukan BORO:  ";
    cout << waktu << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}

