#include <bits/stdc++.h>
using namespace std;

class Figura{
private:
    int b, h;
    float a;
public:
    Figura();
    Figura(int b, int h);
    void setArea(float a);
    float getArea();
};
class Square:public Figura{
  public:
    Square():Figura(){};
/*
    Asignar el área del cuadrado.
*/

};
class Rectangle:public Figura{
public:
    Rectangle(int b, int h):Figura(b,h){}
/*
    Asignar el área del Rectángulo.
*/

};
class Triangle:public Figura{
public:
     Triangle(int b, int h):Figura(b,h){}
/*
    Asignar el área del Triángulo.
*/
};
int main () {

    Square s(5);
    cout << s.getArea() << endl; // 25
    Rectangle r(5,5);
    cout << r.getArea() << endl; // 25
    Triangle t(5, 10);
    cout << t.getArea() << endl; // 25
    return 0;
}
void Square::getArea(){
    a=b*b;
    return a;
}

void Rectangle::getArea(){
    a=b*h;
    return a;
}

void Triangle::getArea(){
    a=b*h;
    return a/2;
}