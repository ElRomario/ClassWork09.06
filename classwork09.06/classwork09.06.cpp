
#include <iostream>
#include "Pair.h"
#include <string>
using namespace std;
int main()
{   
    Pair<string, int> moscow = {"Moscow", 12'000'000};
    cout<<moscow.getFirst()<<""<<moscow.getSecond()<<endl;
    cout <<moscow << endl;

    Pair<double, double> point = {3, 5};
    cout << point.getFirst()<<" "<<point.getSecond()<<endl;
    cout << point << endl;
}


