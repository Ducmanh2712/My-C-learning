/*Viết chương trình nhập vào ba số thực là ba cạnh của một tam giác. Kiểm tra
ba cạnh được nhập có hợp lệ hay không. Nếu hợp lệ, hãy cho biết loại tam giác và
tính diện tích tam giác đó.*/

#include <iostream>
#include <math.h>

using namespace std;
 
int main(){
    double a, b, c;
    cout << "Nhap 3 canh cua tam giac: "; cin >> a >> b >> c;
    double P = (a+b+c)/2.0;
    string s = "Tam giac";
    if(a + b > c && a + c > b && c + b > a){
        if ((a*a) == (b*b)+(c*c) || (b*b) == (a*a)+(c*c) || (c*c) == (b*b)+(a*a)){
            s = s + " vuong";
        }
        if (a == b || a == c || b == c){
            if (a == b && a == c){
            s = s + " deu";
            }
            else {
                s = s + " can";
            }
        }
        if (s.size() == 9) {
            s = s + " thuong";
        }
        cout << s << endl;
        cout << sqrt(P*(P-a)*(P-b)*(P-c)) << endl;
    }
    else{
        cout << "3 canh tren khong phai 3 canh cua mot tam giac" << endl;
    }
    return 0;
}