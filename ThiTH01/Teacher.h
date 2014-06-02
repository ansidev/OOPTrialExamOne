#pragma once
#include "Person.h"

class Teacher: public Person
{
private:
    long double _LuongCoBan;
    float _HeSoLuong;
    long double _Luong;
public:
    void Nhap();
    void Xuat();
    void TinhLuong();

    Teacher(void);
    ~Teacher(void);
};

