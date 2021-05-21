#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

struct Point2D{
    double x;
    double y;
    
    Point2D(double _x, double _y) : x(_x), y(_y) {}
    // The "obvious" constructor...
    // paratmeters give exactly same amount of information that a Point2D has,
    // and they are used to make the appropriate intiailizations.
    
    
    double lengthTo(const Point2D& other) const{
        
        double xDiff = x - other.x;
        double yDiff = y - other.y;
        
        double lengthSquared = xDiff * xDiff + yDiff * yDiff;
        return sqrt(lengthSquared);
    }
};


struct Triangle {
    Point2D A, B, C;
    
    // The "obvious" constructor...
    Triangle(const Point2D _A,
             const Point2D _B,
             const Point2D _C) : A(_A), B(_B), C(_C) {}
    
    
    
    Triangle(double Ax, double Ay,
             double Bx, double By,
             double Cx, double Cy) : A(Ax,Ay), B(Bx, By), C(Cx, Cy) {}
    
    double perimeter() const{
        return A.lengthTo(B) + B.lengthTo(C) + C.lengthTo(A);
    }
};


int main (){
    
    Point2D r(0,8);
    Point2D s(1,8);
    
    cout << r.lengthTo(s) << endl;
    
    
//    Point2D p0(0,0);
//    Point2D p1(1,0);
//    Point2D p2(0,1);
//
//    Triangle t(p0, p1, p2);
    
    Triangle t(0,0,1,0,0,1);
    
    cout << t.perimeter() << endl;
    
    
    return 0;
}
