#include "Teacher.h"
#include "Student.h"
#include <conio.h>
using namespace std;

void main()
{
    cout<<"Initializing Teacher..."<<endl;
    Teacher t;
    cout<<"Reading Teacher's Info..."<<endl;
    t.Nhap();
    cout<<"Initializing Student..."<<endl;
    Student s;
    cout<<"Reading Student's Info..."<<endl;
    s.Nhap();
    cout<<"Initializing Person"<<endl;
    Person* p;
    cout<<"Recognized Person as Teacher"<<endl;
    p = &t;
    cout<<"Calculating Teacher's Salary..."<<endl;
    p->TinhLuong();
    cout<<"Exporting Teacher's Info..."<<endl;
    p->Xuat();
    cout<<"Recognized Person as Student"<<endl;
    p = &s;
    cout<<"Calculating Student's Points..."<<endl;
    p->TinhDTB();
    cout<<"Exporting Student's Info..."<<endl;
    p->Xuat();
    cout<<"Program ended!"<<endl;
    _getch();
}