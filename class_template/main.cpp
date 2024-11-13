#include <iostream>

template<typename T1,typename T2>
class Point
{
private:
    T1 m_x;
    T2 m_y;
public:
    Point(T1 x,T2 y):m_x(x),m_y(y){}
    T1 getX(){ return m_x;}
    T2 getY(){ return m_y;}
};


int main(){

    Point<int,float> point(1,0.5);
    std::cout << "x:" << point.getX() << " y:" << point.getY() << std::endl;
    return 0;
}
