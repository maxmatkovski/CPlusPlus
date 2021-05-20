#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

struct Rectangle{
    double len1;
    double len2;
    
    double area() {return len1 * len2;}
    
    Rectangle (double _len1, double _len2) : len1(_len1), len2(_len2) {
        assert(len1 >= 0); assert(len2 >= 0);
    }
};
    // This looks a lot like a member function, but
        // This doesn't specify return type
        // its name is the same as the name of the struct
        // there's a colon and strange stuff after it --> called a "constructor"
        // the contsructor creates an instance of the rectangle
        // so it kind of "returns" a Rectangle

    // ": len1(_len1), len2(_len2)" is called an "initializer/constructor list"
    // len1(_len1) says "initialize the member variable len1
    // with the value of the parameter _len1 "
    // _len1 == parameter
    // len1 == member variable
    
    // At the end we have some empty braces
    // - after initializing member variables, you may want to do additional, more complicated things. You can do that in between the {} at the end
    // even if {} are empty you still need to put them at the end

int main (){

//            Rectangle r;
//            r.len1 = 2;
//            r.len2 = 4;
    
//  Instead of typing ^^ we can simply type
    
    const Rectangle r(2, 4);
    
    // Calling Rectangle::Rectangle (double, double)
    // ie
    

    cout <<r.len1 << ' ' << r.len2 << ' ' << endl;

     return 0;
}

// 

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

struct Rectangle{
    
    double len1;
    double len2;
    
    double area () const {return len1 * len2;}
    
    Rectangle(double _len1, double _len2) : len1(_len1), len2(_len2) {
        assert(len1 >= 0); assert(len2 >= 0);
    }
    
    Rectangle() : len1(0), len2(0) {}
};

int main (){

    const Rectangle r(3,4);
    
    cout << r.len1 << endl;
    cout << r.len2 << endl;
    
    cout << r.area() << endl;
    
    Rectangle another_r;
    another_r.len1 = 3;
    another_r.len2 = 5;
    
    
    return 0;
}



