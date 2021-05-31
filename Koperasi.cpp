#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
 
  char kodebarang,beli,belanjaKmbl,barang[160];
  float totalByr,jumlahBli,totalBeli,potongan,harga,hargabarang;
  kembali:
   cout<<"\t=================================================================";cout<<endl;
   cout<<"\t|             Koperasi Sembako Anida Maghfiraturrahmah          |";cout<<endl;
   cout<<"\t|               Jl.Tanjung IV Blok p-26,Bogor Barat             |";cout<<endl;
   cout<<"\t|                      (no hp) 097536777235                     |";cout<<endl;
   cout<<"\t=================================================================";cout<<endl;


   cout<<endl;
   cout<<" ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";cout<<endl; cout<<endl;
   ;
cout<<"       1. Masukkan Kode Barang [1-6] : ";cin>>kodebarang;
   cout<<"       2. Jumlah Pembelian  : ";cin>>jumlahBli;cout<<endl;
   cout<<" ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";cout<<endl; cout<<endl;
  cout<<" Nama Barang       :"<<barang;
   switch(kodebarang)
    {
     case ('1'):
      {
      cout<<" Beras (1 karung) "<<barang;
      hargabarang= 70000;
      harga= 70000*jumlahBli ;
      }
      break;
      
     case ('2'):
      {
      cout<<" Kopi (1 renceng isi 12)"<<barang;
      hargabarang= 36000;
      harga= 36000*jumlahBli;
      }
      break;
      
     case ('3'):
      {
      cout<<" Susu indosus (1 kardus) "<<barang;
      hargabarang= 56500;
      harga= 56500*jumlahBli;
      }
      break;
      
      case ('4'):
      {
      cout<<" Telur (1 kg)"<<barang;
      hargabarang= 28000;
      harga= 28000*jumlahBli;
      }
      break;
      
     case ('5'):
      {
      cout<<" Gula (1 kg)"<<barang;
      hargabarang= 17000;
      harga= 17000*jumlahBli;
      }
       break;
       
	  case ('6'):
      {
      cout<<" Minyak (2 liter)"<<barang;
      hargabarang= 28000;
      harga= 28000*jumlahBli;
      }
      break;
      
    }
  cout<<endl;
  if (jumlahBli >3)
     {
      potongan = 0.5*harga;
     }
    else
      {
       potongan= 0;
      }
     
  cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;   
  cout<<" Total Harga Barang  : Rp."<<harga<<endl;
  cout<<" Potongan Harga                : Rp."<<potongan<<endl;
  cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;

  totalByr= harga-potongan;
  cout<<" ===================================================="<<endl;
  cout<<" Total Bayar                   : Rp."<<totalByr<<endl;
  cout<<" ===================================================="<<endl;
  cout<<endl;
  
  
  cout<<" Belanja Lagi? [Y/T] : ";cin>>belanjaKmbl;
  cout<<endl;
  if(belanjaKmbl=='Y' || belanjaKmbl=='y')
  {goto kembali;}
  if(belanjaKmbl=='T' || belanjaKmbl=='t')
  cout << "  ******************************************************************" << endl;
  cout << "                   Terima Kasih Sudah Berbelanja Di "                 << endl;
  cout << "              Koperasi Sembako Anida Maghfiraturrahmah ^_^"           << endl;
  cout << "  ********************************************************************" << endl;
  {goto selesai;}
  
  selesai:
  cout<<endl;
cin.get();
} 
