// What To Turn In
#include "MyString.hpp"

size_t MyString::size() const {
    return s.size();
}

size_t MyString::length() const {
    return s.size();
}

bool MyString::empty() const {
    if(s.size() == 0){return 1;} else {return 0;}
}

void MyString::push_back(char c) {
    s.push_back(c);
}

void MyString::pop_back() {
    s.pop_back();
}

void MyString::resize (size_t n){
    s.resize(n);
}
void MyString::resize (size_t n, char c){
    s.resize(n,c);
};



size_t MyString::find(char c, size_t pos) const {
    
    for(size_t i = pos; i < s.size();i++){
        if(s.at(i) == c) {
            return i;
        }
    }
    return -1;
}


size_t MyString::rfind(char c, size_t pos) const {
    int i;
   
    for(i = s.size()-1; i >= 0;i--){
        if(s.at(i) == c) {
            return i;
        }
    }
    return -1;
}


MyString MyString::substr(size_t pos, size_t len) const {
    
    MyString string;
    for(int i = 0; i < len; i++){
        string += s.at(pos);
        pos++;
    }
    return string;
}

size_t MyString::find(const MyString& str, size_t pos) const {
    
    for(size_t i = pos; i < s.size()+1-str.size();i++){
        for(int j = 0; j < str.size();j++){
            if(s.at(i+j) != str.s[j]){
                break;
            }
            if(j == str.size()-1){
                return i;
            }
        }
    }
    return -1;
}

size_t MyString::rfind(const MyString& str, size_t pos) const {
    
    for(int i = s.size()+1-str.size(); i >= 0 ;i--){
        for(int j = 0; j < str.size();j++){
            if(s.at(i+j) != str.s[j]){
                break;
            }
            if(j == str.size()-1){
                return i;
            }
        }
    }
    return -1;
}


#include "students-ignore3.h"
