#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

// Area
// A = l*w
// A = l^2
// A = pi * r^2

//
//double area(double len1, double len2)       {return len1 * len2;}
//double area(double len)       {return len * len;}
//double area(double radius)      {return acos(-1) * radius * radius;}

struct Rectangle {      // here we are writing a blueprint for rectangle
    
    double len1;        // this is called a "member variable" of the struct Rectangle
    double len2;        // this is called a "member variable" of the struct Rectangle
    
    double area() {return len1 * len2;}; // this is a declaration of a "member function"
    //it has 0 explicit parameters because the way we'll use this function this like
    // r.area() (where r is an instance of Rectangle).
}; // declared a "struct" called Rectangle


struct Square {
    double len;
    double area(){return len * len;};
};

struct Circle {
    double radius;
    double area(){return acos(-1) * radius *radius;} ;

};

//syntax just used: structName:: memberFunctionName
//structName:: is called the "scoping operator"
// After using the scoping operator to inform the compiler that
// we're defining the member function declared on line 21,
// we have access to all the member variables and member functions

//double Rectangle::area() {return len1 * len2;}
//double Square:: area()  {return len * len;}
//double Circle:: area()   {return acos(-1) * radius *radius;} // Pi  R ^ 2


int main (){
//    vector<int> v = {1,2,3};
//    cout << v.size() << endl;   // have NOT written size(str)
//    // There is a function size which belongs to the class vector
//
//    string str = "hihihi";
//    cout << str.size() << endl;
//    // There is a function size which belongs to the class vector
//
//    // There is NOT an overloaded function called size
//
    

    Rectangle r;        // an instance of Rectangle

    r.len1 = 2;         //this . is called "the member access operator"
    r.len2 = 4;         //this . is called "the member access operator"

    cout << "The area of r is " << r.area() << endl;
    //I'd like it if we had an area fucntion belonging to the Rectangle struct.
    // Then we'd be writing r.area() instead of area(r).
    
    Rectangle another_r;

    another_r.len1 = 3;
    another_r.len2 = 8;

    Square s;
    s.len = 3;

    cout << "The area of s is " << s.area() << endl;
    //I'd like it if we had an area fucntion belonging to the Square struct.


    Circle c;
    c.radius = 1;

    cout << "The area of c is " << c.area() << endl;
    //I'd like it if we had an area fucntion belonging to the Circle struct.

    return 0;
}
