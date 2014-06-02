#include "Teacher.h"


void Teacher::TinhLuong()
{
    _Luong = (_HeSoLuong * _LuongCoBan);
}

void Teacher::Nhap()
{
    ifstream finput;
    finput.open("INPUT.IN", ios::in);
    int i = 0;
    if (finput.is_open())
    {
        while (!finput.eof())
        {
            string line;
            getline(finput, line);
            stringstream ss(line);
            ss >> _HoVaTen >> _SoCMND >> _LuongCoBan >> _HeSoLuong;
            i++;
            if (i == 1)
            {
                cout << _HoVaTen << endl << _SoCMND << endl << _LuongCoBan << endl << _HeSoLuong << endl;
                break;
            }
        }
        finput.close();
    }
    else
    {
        cout<<"Unable to open file!"<<endl;
    }
}

void Teacher::Xuat()
{
    ofstream foutput;
    foutput.open("OUTPUT.OUT", ios::out | ios::app);
    foutput << _HoVaTen << ' ' << _SoCMND << ' ' << _LuongCoBan << ' ' << _HeSoLuong << ' ' << _Luong << endl;
    foutput.close();
}

Teacher::Teacher(void)
{
    T = GiaoVien;
}


Teacher::~Teacher(void)
{
}
