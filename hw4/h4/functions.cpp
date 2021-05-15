#include "functions.hpp"
#include <iostream>

bool leap_year(int year) {

    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
          return true;
      }
      else {
          return false;
  }
    return false;
        
}

void fib(int N) {
        int n1=1,n2=1,n3,i;
        if (N == 1){
            std:: cout << n1 << std::endl;
        } else if (N == 2){
            std:: cout << n1 << " " << n2 << std::endl;
        } else if(N > 2){
            std:: cout << n1 << " " << n2 << " ";
            for(i=2;i<N;i++){
                n3 = n1 + n2;
                std:: cout << n3 << " ";
                n1 = n2; n2 = n3;
            }
            std:: cout << std::endl;
        }
    }

double get_double(std::string prompt) {
    std::cout << prompt << std::endl;
        double input; std::cin >> input;
        return input;
        
        if (std::cin.fail()) {
            std::cout << "cin fail, so 0 was returned." << std::endl;
            return 0;
        }

            return 0.0; // ...and/or correct this.    return 0.0;
}

// DO NOT DELETE OR EDIT THIS FUNCTION
void printMyVector(const std::vector<int>& v) {
    for (size_t i=0, N=v.size(); i<N; ++i) {
        std::cout << v[i] << ' ';
    }
    std::cout << std::endl;
}

std::vector<int> concatenateMyVectors(const std::vector<int>& u, const std::vector<int>& v) {
    
    std::vector<int>my_vector;
    
    for(int i = 0; i<u.size(); i++){
        my_vector.push_back(u[i]);
    }
    
    for(int i = 0; i<v.size(); i++){
        my_vector.push_back(v[i]);
    }
    
    return my_vector;
}

void sort5(int& i1, int& i2, int& i3, int& i4, int& i5) {

    if(i1 > i2){
        std::swap(i1, i2);
    }

    if(i3 < i1){
        std::swap(i1, i3);
        std::swap(i2, i3);

    }


    if(i4 < i1){
        std::swap(i1, i4);
        std::swap(i4, i2);
        std::swap(i4, i3);
    }

    if(i3 > i4){
        std::swap(i3, i4);
    }


    if(i2 > i3){
        std::swap(i2, i3);
    }
    
    if(i1>i5){
        std::swap(i5,i1);
        std::swap(i5,i2);
        std::swap(i5,i3);
        std::swap(i5,i4);
    }
}

void reverse(std::vector<int>& v) {
    
    int s = 0;
    int z = v.size();
    int e = z-1;
    while(s<e){
        std::swap(v[s],v[e]);
        s++;
        e--;
    }
}

void print(const std::vector<bool>& v) {
    for(int i = 0; i < v.size();i++){
        std::cout << v[i];
    }
}

void addZeros(std::vector<bool>& v, size_t numberToAdd) {
    for(int i = 0; i < numberToAdd; i++){
        v.push_back(0);
    }
}


std::vector<bool> addition(std::vector<bool> v, std::vector<bool> w) {
    std:: vector<bool>d;
    
    
    size_t i = v.size();
    size_t j = w.size();
    
    if(i > j){
        addZeros(w, i-j);
    } else if (j > i){
        addZeros(v, j-i);
    }
    
    int vector_size = v.size();

    int carry = 0;
    for(int i = 0; i < vector_size; i++){
        int sum = carry;
        sum += int(v[i]);
        sum += int(w[i]);
        d.push_back(sum%2);
        carry = sum /2;
    }
    
    if(carry != 0){
        d.push_back(carry);
    }

    return d;
}


