/*Viết chương trình nhập vào tọa độ (xC, yC) là tâm của một đường tròn, và R
là bán kính của đường tròn đó. Nhập vào tọa độ (xM, yM) của điểm M. Xác định điểm
M nằm trong, nằm trên hay nằm ngoài đường tròn.*/

// Lấy từ file KhoangcachAB_2.cpp
#include <iostream>
#include <math.h>
using namespace std;

struct Point{
private:
    double x;
    double y;
public:
    Point(){
        x = 0;
        y = 0;
    }
    Point(double x, double y){
        this->x = x;
        this->y = y;
    }
    void setX(double x){
        this->x = x;
    }
    void setY(double y){
        this->y = y;
    }
    double getX(){
        return x;
    }
    double getY(){
        return y;
    }
};

int main(){
    double xC, yC, xM, yM, tmp;
    cout << "Nhap toa do tam C(x,y): "; cin >> xC >> yC;
    cout << "Nhap ban kinh R: "; cin >> tmp;
    const double R = tmp;
    cout << "M(x,y): "; cin >> xM >> yM;
    Point C(xC, yC), M(xM, yM);
    double CM = sqrt((M.getX() - C.getX())*(M.getX() - C.getX()) + (M.getY() - C.getY())*(M.getY() - C.getY()));
    if(CM < R) {
        cout << "M nam trong duong tron" << endl;
    }
    else if(CM == R){
        cout << "M nam tren duong tron" << endl;
    }
    else{
        cout << "M nam ngoai duong tron" << endl;
    }
}