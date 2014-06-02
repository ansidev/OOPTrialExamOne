#include "Student.h"

void Student::Nhap()
{
    ifstream finput;
    finput.open("D:\\INPUT.IN");
    istringstream ss;
    string line;
    int i = 0;
    if (finput.is_open())
    {
        while (!finput.eof())
        {
            string line;
            getline(finput, line);
            stringstream ss(line);
            ss >> _HoVaTen >> _SoCMND >> DiemToan >> DiemTin >> DiemNgoaiNgu;
            i++;
            if (i == 2)
            {
                cout << _HoVaTen << endl << _SoCMND << endl << DiemToan << endl << DiemTin << endl << DiemNgoaiNgu << endl;
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

void Student::Xuat()
{
    ofstream foutput;
    foutput.open("OUTPUT.OUT", ios::out | ios::app);
    cout << _HoVaTen << _SoCMND << DiemToan << DiemTin << DiemNgoaiNgu << DiemTB << endl;
    foutput << _HoVaTen << ' ' << _SoCMND << ' ' << DiemToan << ' ' << DiemTin << ' ' << DiemNgoaiNgu << ' ' << DiemTB << endl;
    foutput.close();
}

void Student::TinhDTB()
{
    DiemTB = ((DiemToan + DiemTin + DiemNgoaiNgu) / 3);
}


Student::Student(void)
{
    T = HocSinh;
}


Student::~Student(void)
{
}
