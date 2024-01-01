//
// Created by rashadalsharpini on 01/01/24.
//

#ifndef TEST_STUDENT_H
#define TEST_STUDENT_H
#include<iostream>
using namespace std;
class student {
private:
    string firstName;
    string lastName;
    string id;
public:
    string returnFirstName();
    void set();
    void get();
    friend ostream& operator<<(ostream& os, const student& obj);
    friend istream& operator>>(istream& os, student& obj);
    bool operator<(const student& other) const;
    bool operator>(const student& other) const;
    student& operator=(const student&other);
    bool operator<=(const student&other)const;
    bool operator>=(const student&other)const;
    bool operator==(const student&other)const;
};


#endif //TEST_STUDENT_H
