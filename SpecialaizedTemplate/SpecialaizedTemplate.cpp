// SpecialaizedTemplate.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <limits>
using namespace std;
int main()
{
   int minInt = numeric_limits<int>::min();
   int maxInt = numeric_limits<int>::max();
   cout<< minInt << ' '<<maxInt<<endl;
}

