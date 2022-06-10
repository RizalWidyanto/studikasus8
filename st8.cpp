#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int jumlahjenis,jumlahkaryawan[10];
    int i,j;
    char jeniskaryawan[50][20],namakaryawan[50][20][20],alamat[50][20][20],kelamin[50][20][20],cari[50][20][20];
    cout<<"Masukan jumlah jenis karyawan : ";
    cin>>jumlahjenis;

    for (i=1;i<=jumlahjenis;i++){
        cout<<"Jenis karyawan ke-"<<i<<" : ";
        cin>>jeniskaryawan[i];
        cout<<"Masukkan jumlah karyawan "<<jeniskaryawan[i]<<" : ";
        cin>>jumlahkaryawan[i];
        for (j=1; j<=jumlahkaryawan[i];j++){
            cout<<"Masukkan nama "<<jeniskaryawan[i]<<" ke-"<<j<<": ";
            cin>>namakaryawan[i][j];
            cout<<"Masukkan Alamat "<<jeniskaryawan[i]<<" ke-"<<j<<": ";
            cin>>alamat[i][j];
            cout<<"Masukkan Jenis Kelamin "<<jeniskaryawan[i]<<"(l/p)ke-"<<j<<": ";
            cin>>kelamin[i][j];
        }
        }
    cout<<"Jenis Karyawan | Nama karyawan | Alamat karyawan | Jenis Kelamin\n";
    for (i=1;i<=jumlahjenis;i++){
        cout<<" "<<jeniskaryawan[i];
            for (j=1; j<=jumlahkaryawan[i];j++){
                cout<<"              "<<namakaryawan[i][j]<<"           "<<alamat[i][j]<<"               "<<kelamin[i][j]<<endl<<"   ";
            }cout<<"----------------------------------------------------------------\n";
            
        
    }
    cout<<"Cari karyawan \n";
    cout<<"Masukkan nama karyawan yang ingin di cari : ";
    cin>>cari[1][1];
     for (i=1;i<=jumlahjenis;i++){
            
         for (j=1; j<=jumlahkaryawan[i];j++){

             cout<<namakaryawan[i][j]<<endl;
             }
             
     }   
    }
