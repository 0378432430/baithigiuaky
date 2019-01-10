#include<iostream>
using namespace std;
int main()
{
    double TBD, TKV, a;
    int dem;
    cout<<"nhap vao so tien ban dau:";
    cin>>TBD;
    cout<<"nhap vao so tien ky vong:";
    cin>>TKV;
    cout<<"nhap vao lai xuat:";
    cin>>a;
    dem=0;
    do
        {
            TBD+=TBD*a;
            dem++;
        }
    while(TBD<TKV);
    cout<<"so nam can gui la:"<<dem;
    return 0;
}
