//Nhập vào diện tích S của một mặt cầu.
//Tính thể tích V của hình cầu này.

#include <iostream>
#include <math.h>

using namespace std;
const double pi = 3.141593;
int main(){
    double S;
    cout << "Nhap dien tich S: "; cin >> S;
    double R = sqrt(S/(4*pi));//*(sqrt(S/4*pi))*(sqrt(S/4*pi));
    cout << "The tich V: " << R*R*R*(4.0/3.0)*pi << endl;
    return 0;
}