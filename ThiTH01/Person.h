#pragma once
//#include "Teacher.h"
//#include "Student.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
    enum Loai{GiaoVien, HocSinh};
    string _HoVaTen;
    string _SoCMND;
public:
    Loai T;
    virtual void Nhap();
    virtual void Xuat();
    virtual void TinhLuong();
    virtual void TinhDTB();
    Person(void);
    ~Person(void);
};

