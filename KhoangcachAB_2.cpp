// Nhập vào tọa độ 2 điểm A(xA, yA) và B(xB, yB). Tính khoảng cách AB.

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
    double xA, yA, xB, yB;
    cout << "A(x,y): "; cin >> xA >> yA;
    cout << "B(x,y): "; cin >> xB >> yB;
    Point A(xA, yA), B(xB, yB);
    cout << "|AB| = " << sqrt((B.getX() - A.getX())*(B.getX() - A.getX()) + (B.getY() - A.getY())*(B.getY() - A.getY())) << endl;
}