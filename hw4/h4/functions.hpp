#ifndef functions_hpp
#define functions_hpp


#include <iostream>     // cout, cin
#include <cassert>      // assert in fib function
#include <string>       // parameter in get_double
#include <vector>       // a lot of code using vectors
#include <utility>      // swap


// Question 1a.
/**
 Determines whether a leap year or not
 @param year: year in question
 @return boolean on whether it's a leap year or not.
*/
bool leap_year(int year);

// Question 1b.
/**
 Calculates sequence of fibonacci numbers
 @param N is the number
 @return returns nothing
*/
void fib(int N);

// Question 1c.
/**
 COMMENT IT
*/
double get_double(std::string prompt);


// Michael made this function. Do NOT delete it!!
/**
 Prints a vector of ints;
 the ints are separated by spaces,
 and an endl occurs at the end.

 @param v : the vector to print
*/
void printMyVector(const std::vector<int>& v);

// Question 2.
// Michael commented this function.
/**
 Concatenates two vectors of ints.
 @param v : the first vector
 @param w : the second vector
 @return the concatenation of v and w, that is,
         the vector storing all of the values of v
         followed by all of the values of w.
*/
std::vector<int> concatenateMyVectors(const std::vector<int>& v,
                                      const std::vector<int>& w);


// Question 3.
/**
 Sorts numbers
 @param i1 : first int
 @param i2 : second int
 @param i3 : third int
 @param i4 : fourth int
 @param i5 : fifth int

*/
void sort5(int& i1, int& i2, int& i3, int& i4, int& i5);


// Question 4.
/**
 reverses numbers
 @param v
 COMMENT IT
*/
void reverse(std::vector<int>& v);


// Question 5.
// Comment the functions!!

/**
 prints vector out
 @param v
 */
void print(const std::vector<bool>& v);

/**
 adds set amount of zeros to vector
 @param v : vector to add to
 @param numberToAdd : number of zeros to add
 */
void addZeros(std::vector<bool>& v, size_t numberToAdd);

/**
    adds two binary vectors together
    @param v :first vector
    @param w :second vector
    @return d : added vector to be returned
 */
std::vector<bool> addition(std::vector<bool> v,
                           std::vector<bool> w);


#endif /* functions_hpp */
