#include <iostream>
#include <algorithm>
#include"HashTable.h"
#include"student.h"
using namespace std;
int main() {
//    HashTable h(26);
//    student s;
//    cin>>s;
//    h.insert(s);
//    cin>>s;
//    h.insert(s);
//    cout<<endl;
//    h.print();
    cout << "\n\nHello, World!" << endl;
    student stu[4];
    for(auto & i : stu)
        cin>>i;
    sort(stu,stu+4,student::compareByName);
    for(const auto & i : stu)
        cout<<i;
    sort(stu,stu+4,student::compareById);
    for(const auto & i : stu)
        cout<<i;
    return 0;
}
