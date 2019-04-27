#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

using namespace::std;

struct data{
    char nama[20];
    int umur;
    string jeniskelamin;
};
    data temp;
    data pilih[100];
    int a,b,c,d;


void insertdata(){
    cout<<"======================================="<<endl;
    cout<<"\nMASUKAN JUMLAH DATA YANG AKAN DIINPUT : ";cin>>b;
    cout<<"======================================="<<endl;
    d=0;
    for(c=0;c<b;c++){
    d=d+1;
    cout<<"\nData ke-"<<d<<endl;
    cout<<"umur: ";cin>>pilih[a].umur;
    cout<<"Nama: ";cin>>pilih[a].nama;
    cout<<"jenis kelamin: ";cin>>pilih[a].jeniskelamin;
    a++;}}



void lihat(){
    int i,j;
    cout<<"\nMenampilkan Data\n\n";
    j=0;
    for(i=0;i<a;i++)
    { j=j+1;

    cout<<"============";cout<<j;cout<<"============";
    cout<<"\numur         : ";cout<<pilih[i].umur;
    cout<<"\nnama         : ";cout<<pilih[i].nama;
    cout<<"\njenis kelamin: ";cout<<pilih[i].jeniskelamin;cout<<endl;
    }
    }


void hapus(){
    int x,y;
    cout<<"======================================="<<endl;
    cout<<"Hapus data ke =  ";cin>>x;
    cout<<"======================================="<<endl;
    y=x-1;
    a--;
    for(int i=y;i<a;i++)
    {pilih[i]=pilih[i+1];}

    cout<<"\n DATA YANG KE ="<<x<<" TELAH DIHAPUS ";
}

void edit(){
    int k,l;
    cout<<"======================================="<<endl;
    cout<<"Masukan Data yang akan diedit : ";cin>>k;
    cout<<"======================================="<<endl;
    l=k-1;
    cout<<"umur\t: ";cin>>pilih[l].umur;
    cout<<"Nama\t: ";cin>>pilih[l].nama;
    cout<<"Kelas\t: ";cin>>pilih[l].jeniskelamin;
    lihat();
}


void searching(){
    string cari;
    char nama[20];
    int jml,indeks;
    bool status = false;
    cout<<" jumlah orang :";cout<<b;


cout<<"======================================="<<endl;
cout<<"\nmasukan nama yang dicari :";cin>>cari;
cout<<"======================================="<<endl;
     for(int i=0;i<b;i++){
     if(cari == pilih[i].nama ){
     status = true;
     indeks = i;

    }
}
    system("CLS");
    if(status)
    cout<<"nama yang ditemukan di indeks ke "<<indeks;
    else
    cout<<"nama tidak ditemukan";
}

void sortingdata(){
    int u,l,i;
    for (i=0;i<b;i++)
{
    cout<<"======================================="<<endl;
    cout<<"data Ke"<<i+1<<"::"<<endl;
    cout<<"input umur        = ";cout<<pilih[i].umur;  cout<<endl;
    cout<<"input Nama        = ";cout<<pilih[i].nama;  cout<<endl;
    cout<<"input jenis kelamin      = ";cout<<pilih[i].jeniskelamin;  cout<<endl;
}
    cout<<"======================================="<<endl;
    for (i=0;i<b;i++){
    for(c=0;c<b-1;c++){
        if(pilih[c].umur>pilih[c+1].umur)
        {
            temp.umur=pilih[c].umur;
            pilih[c].umur=pilih[c+1].umur;
            pilih[c+1].umur=temp.umur;

            strcpy (temp.nama,pilih[c].nama);
            strcpy (pilih[c].nama,pilih[c+1].nama);
            strcpy (pilih[c+1].nama,temp.nama);

            temp.jeniskelamin=pilih[c].jeniskelamin;
            pilih[c].jeniskelamin=pilih[c+1].jeniskelamin;
            pilih[c+1].jeniskelamin=temp.jeniskelamin;
    }
}
}
    cout<<"SETELAH DATA DI SHORTING =\n";
    for (c=0;c<d;c++)
{
    cout<<"============================="<<endl;
    cout<<"umur        = ";cout<<pilih[c].umur;  cout<<endl;
    cout<<"Nama        = ";cout<<pilih[c].nama;  cout<<endl;
    cout<<"jenis kelamin       = ";cout<<pilih[c].jeniskelamin;  cout<<endl;
}
    cout<<"============================="<<endl;
}

int main(){
  int pilih;
  char w;
  awal:
  do{
  cout<<"\n+++++++++++++++++++++++++++++++++  ";
  cout<<"\n++++++++++ PILIHAN MENU ++++++++++  ";
  cout<<"\n+++++++++++++++++++++++++++++++++  ";
  cout<<endl;
  cout<<"\n1. Masukkan data";
  cout<<"\n2. Hapus Data";
  cout<<"\n3. Lihat Data";
  cout<<"\n4. Edit Data";
  cout<<"\n5. cari data";
  cout<<"\n6. sorting data";
  cout<<"\n\nMasukkan Pilihan : ";
  cin>>pilih;
  if(pilih==1){insertdata();}
  else if(pilih==2){hapus();}
  else if(pilih==3){lihat();}
  else if(pilih==4){edit();}
  else if(pilih==5){searching();}
  else if(pilih==6){sortingdata();}
  cout<<endl;
  cout<<"\n MAU PILIH LAGI??\n";cout<<"[y][n]\n";cin>>w;
}
while(w=='y' || w=='Y');
}
