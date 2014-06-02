#pragma once
//Thong tin cua Student gom co: ho ten, so chung minh nhan dan, diem toan, diem tin, 
//diem ngoai ngu, diem trung binh. Diem trung binh cua Student duoc tinh bang trung 
//binh cong cua diem toan, diem tin, diem ngoai ngu thong qua phuong thuc 
//TinhDTB().
#include "Person.h"

class Student : public Person
{
private:
    float DiemToan;
    float DiemTin;
    float DiemNgoaiNgu;
    float DiemTB;
public:
    void Nhap();
    void Xuat();
    void TinhDTB();
    Student(void);
    ~Student(void);
};

