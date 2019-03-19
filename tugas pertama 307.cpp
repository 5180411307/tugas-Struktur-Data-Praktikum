#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstring>
using namespace std;

struct mahasiswa{
int nilaiharian1[3], nilaiharian2[3], nilaiharian3[3];
string jurusan[3], nim[3], nama[3], jeniskelamin[3];
}x;
int rerata[3];
bool pilihans, pilihan;


int input()
{
    system("cls");
    cout<<"------------------------------------------\n";
    cout<<"==========================================\n";
    cout<<"~~~~~~~~~~~~Database Mahasiswa~~~~~~~~~~~~\n";
    cout<<"==========================================\n";
    cout<<"~~~~~~~~~~~~~~~Input Data~~~~~~~~~~~~~~~~~\n";
    cout<<"------------------------------------------\n";
    cout<<"Jumlah Maksimal Data untuk di input: 3 \n"<<endl;
    for(int i=0; i<3; i++)
    {
        cout<<"Masukkan Nama Lengkap    : "; cin>>x.nama[i]; cout<<endl;
        cout<<"Masukkan NIM             : "; cin>>x.nim[i]; cout<<endl;
        cout<<"Masukkan Jenis Kelamin   : "; cin>>x.jeniskelamin[i]; cout<<endl;
        cout<<"Masukkan Jurusan         : "; cin>>x.jurusan[i]; cout<<endl;
        cout<<"Masukkan Nilai Harian 1: "; cin>>x.nilaiharian1[i]; cout<<endl;
        cout<<"Masukkan Nilai Harian 2: "; cin>>x.nilaiharian2[i]; cout<<endl;
        cout<<"Masukkan Nilai Harian 3: "; cin>>x.nilaiharian3[i]; cout<<endl;
        rerata[i]=x.nilaiharian1[i]+x.nilaiharian2[i]+x.nilaiharian3[i];
        cout<<rerata<<endl;
    }
    system("cls");
    cout<<"Data telah diinput\n";
}

int sorting()
{
    int temp=0;
    temp=rerata[3];
    rerata[3]=rerata[3+1];
    rerata[3]=temp;
    cout<<rerata<<endl;
}

int searching()
{
    cout<<"belum";
}


int main()
{
    do{
    cout<<"------------------------------------------\n";
    cout<<"==========================================\n";
    cout<<"~~~~~~~~~~~~Database Mahasiswa~~~~~~~~~~~~\n";
    cout<<"==========================================\n";
    cout<<"~~~~~~~~~~~~~~~~Main Menu~~~~~~~~~~~~~~~~~\n";
    cout<<"------------------------------------------\n";
    cout<<"1. Input Data Mahasiswa\n";
    cout<<"2. Tampilkan Data Dari Nilai Tertinggi\n";
    cout<<"3. Cari Data Dengan Nama\n";
    cout<<"0. Keluar\n";
    cout<<"------------------------------------------\n";
    cout<<"Pilih dengan nomor: "; cin>>pilihan;
    if(pilihan==1)
    {
        system("cls");
        input();
        cout<<"Back to Main Menu (y/n): "; cin>>pilihans; cout<<endl;
    }
    else if(pilihan==2){sorting();}
    else if(pilihan==3){searching();}
    else{cout<<"Pilihan tidak tersedia"; return 0;}
    }while(pilihans/='y');
}
