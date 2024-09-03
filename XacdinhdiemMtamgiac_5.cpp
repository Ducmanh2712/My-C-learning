/*Viết chương trình nhập vào tọa độ các đỉnh của tam giác ABC và của điểm M.
xác định điểm M nằm trong, nằm trên cạnh hay nằm ngoài tam giác ABC.*/

// Lấy từ file KhoangcachAB_2.cpp
#include <iostream>
#include <cmath>
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

void input(Point& A, Point& B, Point& C, Point& M){
    double x, y;
    cout << "A(x,y): "; cin >> x >> y;
    A.setX(x);
    A.setY(y);
    cout << "B(x,y): "; cin >> x >> y;
    B.setX(x);
    B.setY(y);
    cout << "C(x,y): "; cin >> x >> y;
    C.setX(x);
    C.setY(y);
    cout << "M(x,y): "; cin >> x >> y;
    M.setX(x);
    M.setY(y);
}

double Dientich(Point& A, Point& B, Point& C){
    double S = (1.0/2.0)*fabs(A.getX()*B.getY() - B.getX()*A.getY() + B.getX()*C.getY() - C.getX()*B.getY() + C.getX()*A.getY() - A.getX()*C.getY());
    return S;
}

int main(){
    while(!cin.eof()){
        Point A, B, C, M;
        input(A, B, C, M);
        double tmp = Dientich(A, M, B) + Dientich(A, M, C) + Dientich(B, M, C);
        if(Dientich(A, B, C) == tmp){
            cout << "M thuoc tam giac ABC" << endl;
        }
        else{
            cout << "M khong thuoc tam giac ABC" << endl;
        }
    }
}