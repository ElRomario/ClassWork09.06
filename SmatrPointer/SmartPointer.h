#pragma once

template<typename T>
class SmartPointer
{
    T *pointer;
    public:
    SmartPointer(T*pointer):pointer {pointer}{};

    template<typename... Args >
    SmartPointer (Args... args) : pointer {new T{args...}}{}

    T *getPointer() const {return pointer ; }

    T &operator *() const {return *pointer; }

    ~SmartPointer() {delete pointer; }
};
