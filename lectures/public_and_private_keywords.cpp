#include <iostream>
using namespace std;

// By default, everything that is in a struct is public.
// By default, everythin that is in a class is private.
// This is the ONLY difference between structs and classes.

/* If you intend to use a mixture of public and private member variables / functions:
 - It is common to use:
 - classes
 - specify all public things frist
 - specify all private things second
*/

class A{
public:
    A() : i(0) {}
    
    void printI() const {cout << i << endl;}
    void mutateI()      {i += 1;}
    
    void mutateOtherI(A& other) const;
    
private:
    int i;
};

void A::mutateOtherI(A& other) const { other.i += 1;}

int main() {
    A a0, a1;

//    cout << a0.i << endl;
//    cout << a1.i << endl;
//    cout << endl;
    
    a0.printI();
    a0.mutateI();
    a0.mutateI();
    a0.printI();
    cout << endl;
    
    
    a1.printI();
    a0.mutateOtherI(a1);
    a1.printI();
    cout << endl;
}
