#include <iostream>
#include"HashTable.h"
#include"student.h"
using namespace std;
int main() {
    HashTable h(26);
    student s;
    cin>>s;
    h.insert(s);
    cin>>s;
    h.insert(s);
    cout<<endl;
    h.print();
    cout << "\n\nHello, World!" << endl;
    return 0;
}
