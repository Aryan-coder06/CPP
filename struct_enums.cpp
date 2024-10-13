#include <iostream>
using namespace std;

enum lebel {
    LOW,
    MEDIUM,
    HIGH
};
struct profile{
    int age; 
    string name;
    char sections;
};


int main () {
   string food = "Pizza" ;
   string &joy = food ;
   cout << food << endl;
   cout << joy << endl;





}