#pragma once
#include <iostream>
using namespace std;
template <typename First, typename Second>
class Pair
{
private:
    First first;
    Second second;
public:
    Pair(First first, Second second) : first {first}, second { second} {}
    //Pair() : first { }, second { } { } мусор

    First getFirst() const { return first ;} 
    Second getSecond() const { return second ;}

    void setFirst(const First& first) {this->first = first; }
    void setSecond(const Second &second) { this ->second = second ;}

    template<typename First, typename Second>
    friend ostream &operator<<(ostream & out, const Pair<First,Second> &pair);

   /*~Pair()
    {
        ~first();
        ~second();
    }*/
};


template<typename First, typename Second>
ostream& operator<<(ostream& out, const Pair<First, Second> &pair)
{
    return out << '('<<pair.first<< ", " <<pair.second << ')';
}

