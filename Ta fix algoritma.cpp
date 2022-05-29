#include <iostream>
#include <conio.h>
#include <string.h>
#include <iomanip>
#include <limits>

using namespace std;

// MATERI ARRAY, STRING, STRUCT
//struct
struct harga
{
 int harga_arr[12]={ 2700000, 4500000, 6600000,3000000, 3900000, 6900000, 2800000, 3300000, 5000000, 4600000, 3300000, 6000000};
 string kode_arr[12]={" SAMSUNG a71"," SAMSUNG A10"," SAMSUNG S10","VIVO Z10","VIVO y12 ","VIVO s1+","XIAOMI 11T","XIAOMI M12","XIAOMI 99T","OPPO F5s","OPPO F4s","OPPO A41"};
} var_harga[100];

struct data
{
	string nama_kamu,alamat,nohp;
	
}identitas;

int total_harga,kode_hp[100],a,b,c,d,e;

// MATERI FUNGSI
 void spesifikasi () 
{
    muka_spek:
    int spekhp,pilihan,no_harga;
    system("cls");
    cout <<" 1.SAMSUNG\n 2.VIVO \n 3.XIAOMI \n 4.OPPO "<<endl;
    cin >> spekhp;
    system("cls");
    switch (spekhp)
    {
    case 1 :
    samsung:
    cout << " SAMSUNG "<<endl;
    cout << " Nama Handphone : Samsung a71  "<<setw(40)<<" Nama Handphone : Samsung A10  "<<setw(40)<<" Nama Handphone : Samsung S10  "<<endl;
    cout << " RAM/ROM        : 4/32      "<<setw(40)<<" RAM/ROM        : 4/64      "<<setw(41)<<" RAM/ROM        : 6/128      "<<endl;
    cout << " Chipset        : mediatek 708      "<<setw(41)<<" Chipset        : mediatek 706       "<<setw(40)<<" Chipset        : mediatek 660       "<<endl;
    cout << " Ukuran         : 6,3 inch      "<<setw(40)<<" Ukuran         : 6,5 inch      "<<setw(40)<<" Ukuran         : 6,6 inch      "<< endl;
    cout << " Baterai        : 5.000 mah      "<<setw(40)<<" Beterai        : 5.500 mah      "<<setw(40)<<" Baterai        : 6.000 mah      "<< endl;
    cout << " kamera D/B     : 15/30 megapixel      "<<setw(40)<<" kamera D/B     : 10/25 megapixel      "<<setw(40)<<" kamera D/B     : 25/35 megapixel      "<< endl;
    cout << " Kode Handphone : 0                    "<<setw(40)<<"Kode Handphone : 1                    "<<setw(40)<<"Kode Handphone : 2                    "<<endl;
    cout << " ================================================================================================================" << endl;
    cout << " \n Hallo sobat, Masukan Kode Handphone untuk melihat harganya ya" <<endl;
    cout << " kode yg sobat masukan : ";
    cin >> no_harga;
    if (no_harga > 12 ){
        cout << " maaf kode anda salah sobat "<<endl;
        goto muka_spek;
    }
    cout <<" Harga untuk handphone "<<var_harga[no_harga].kode_arr[no_harga]<<" adalah "<<" Rp. "<< var_harga[no_harga].harga_arr[no_harga]<<" Rupiah"<<endl;
    cout << " ==============================================================" << endl;
    cout << " 1.Lanjut lihat spesifikasi yg lain\n 2.Kembali ke Menu utama"<<endl;
    cin >> pilihan;
    switch (pilihan)
    {
        case 1:
        goto muka_spek;
        break;
        case 2:
        break;
        default:
        cout << " maaf kodenya salah sobat,anda akan kembali ke menu utama "<<endl;
        break;
    }
    break;
    case 2 :
    vivo:
    cout << " VIVO "<<endl;
    cout << " Nama Handphone : VIVO Z10  "<<setw(40)<<" Nama Handphone : VIVO y12  "<<setw(40)<<" Nama Handphone : VIVO s1+  "<<endl;
    cout << " RAM/ROM        : 4/32      "<<setw(40)<<" RAM/ROM        : 4/64      "<<setw(41)<<" RAM/ROM        : 6/128      "<<endl;
    cout << " Chipset        : mediatek 708      "<<setw(41)<<" Chipset        : mediatek 706       "<<setw(40)<<" Chipset        : mediatek 660       "<<endl;
    cout << " Ukuran         : 6,3 inch      "<<setw(40)<<" Ukuran         : 6,5 inch      "<<setw(40)<<" Ukuran         : 6,6 inch      "<< endl;
    cout << " Baterai        : 5.000 mah      "<<setw(40)<<" Beterai        : 5.500 mah      "<<setw(40)<<" Baterai        : 6.000 mah      "<< endl;
    cout << " kamera D/B     : 15/30 megapixel      "<<setw(40)<<" kamera D/B     : 10/25 megapixel      "<<setw(40)<<" kamera D/B     : 25/35 megapixel      "<< endl;
    cout << " Kode Handphone : 3                   "<<setw(41)<<"Kode Handphone : 4                    "<<setw(40)<<"Kode Handphone : 5                    "<<endl;
    cout << " ================================================================================================================" << endl;
    cout << " \n Hallo sobat, Masukan Kode Handphone untuk melihat harganya ya" <<endl;
    cout << " kode yg sobat masukan : ";
    cin >> no_harga;
     if (no_harga > 12 ){
        cout << " maaf kode anda salah sobat "<<endl;
        goto muka_spek;
    }
    cout <<" Harga untuk handphone "<<var_harga[no_harga].kode_arr[no_harga]<<" adalah "<<" Rp. "<< var_harga[no_harga].harga_arr[no_harga]<<" Rupiah"<<endl;
    cout << " ==============================================================" << endl;
    cout << " 1.Lanjut lihat spesifikasi yg lain\n 2.Kembali ke Menu utama"<<endl;
    cin >> pilihan;
    switch (pilihan)
    {
        case 1:
        goto muka_spek;
        break;
        case 2:
        break;
        default:
        cout << " maaf kodenya salah sobat,anda akan kembali ke menu utama "<<endl;
        break;
    }
    break;
    case 3:
    xiaomi:
    cout << " XIAOMI "<<endl;
    cout << " Nama Handphone : XIAOMI 11T  "<<setw(40)<<" Nama Handphone : XIAOMI M12  "<<setw(40)<<" Nama Handphone : XIAOMI 99T  "<<endl;
    cout << " RAM/ROM        : 4/32      "<<setw(40)<<" RAM/ROM        : 4/64      "<<setw(41)<<" RAM/ROM        : 6/128      "<<endl;
    cout << " Chipset        : mediatek 708      "<<setw(41)<<" Chipset        : mediatek 706       "<<setw(40)<<" Chipset        : mediatek 660       "<<endl;
    cout << " Ukuran         : 6,3 inch      "<<setw(40)<<" Ukuran         : 6,5 inch      "<<setw(40)<<" Ukuran         : 6,6 inch      "<< endl;
    cout << " Baterai        : 5.000 mah      "<<setw(40)<<" Beterai        : 5.500 mah      "<<setw(40)<<" Baterai        : 6.000 mah      "<< endl;
    cout << " kamera D/B     : 15/30 megapixel      "<<setw(40)<<" kamera D/B     : 10/25 megapixel      "<<setw(40)<<" kamera D/B     : 25/35 megapixel      "<< endl;
    cout << " Kode Handphone : 6                    "<<setw(40)<<"Kode Handphone : 7                    "<<setw(40)<<"Kode Handphone : 8                    "<<endl;
    cout << " ================================================================================================================" << endl;
    cout << " \n Hallo sobat, Masukan Kode Handphone untuk melihat harganya ya" <<endl;
    cout << " kode yg sobat masukan : ";
    cin >> no_harga;
     if (no_harga > 12 ){
        cout << " maaf kode anda salah sobat "<<endl;
        goto muka_spek;
    }
    cout <<" Harga untuk handphone "<<var_harga[no_harga].kode_arr[no_harga]<<" adalah "<<" Rp. "<< var_harga[no_harga].harga_arr[no_harga]<<" Rupiah"<<endl;
    cout << " ==============================================================" << endl;
    cout << " 1.Lanjut lihat spesifikasi yg lain\n 2.Kembali ke Menu utama"<<endl;
    cin >> pilihan;
    switch (pilihan)
    {
        case 1:
        goto muka_spek;
        break;
        case 2:
        break;
        default:
        cout << " maaf kodenya salah sobat,anda akan kembali ke menu utama "<<endl;
        break;
    }
    break;
    case 4:
    oppo:
    cout << " OPPO "<<endl;
    cout << " Nama Handphone : OPPO F5s  "<<setw(40)<<" Nama Handphone : OPPO F4s  "<<setw(40)<<" Nama Handphone : OPPO A41  "<<endl;
    cout << " RAM/ROM        : 4/32      "<<setw(40)<<" RAM/ROM        : 4/64      "<<setw(41)<<" RAM/ROM        : 6/128      "<<endl;
    cout << " Chipset        : mediatek 708      "<<setw(41)<<" Chipset        : mediatek 706       "<<setw(40)<<" Chipset        : mediatek 660       "<<endl;
    cout << " Ukuran         : 6,3 inch      "<<setw(40)<<" Ukuran         : 6,5 inch      "<<setw(40)<<" Ukuran         : 6,6 inch      "<< endl;
    cout << " Baterai        : 5.000 mah      "<<setw(40)<<" Beterai        : 5.500 mah      "<<setw(40)<<" Baterai        : 6.000 mah      "<< endl;
    cout << " kamera D/B     : 15/30 megapixel      "<<setw(40)<<" kamera D/B     : 10/25 megapixel      "<<setw(40)<<" kamera D/B     : 25/35 megapixel      "<< endl;
    cout << " Kode Handphone : 9                    "<<setw(41)<<"Kode Handphone : 10                    "<<setw(40)<<"Kode Handphone : 11                    "<<endl;
    cout << " ================================================================================================================" << endl;
    cout << " \n Hallo sobat, Masukan Kode Handphone untuk melihat harganya ya" <<endl;
    cout << " kode yg sobat masukan : ";
    cin >> no_harga;
     if (no_harga > 12 ){
        cout << " maaf kode anda salah sobat "<<endl;
        goto muka_spek;
    }
    cout <<" Harga untuk handphone "<<var_harga[no_harga].kode_arr[no_harga]<<" adalah "<<" Rp. "<< var_harga[no_harga].harga_arr[no_harga]<<" Rupiah"<<endl;
    cout << " ==============================================================" << endl;
    cout << " 1.Lanjut lihat spesifikasi yg lain\n 2.Kembali ke Menu utama"<<endl;
    cin >> pilihan;
    switch (pilihan)
    {
        case 1:
        goto muka_spek;
        break;
        case 2:
        break;
        default:
        cout << " maaf kodenya salah sobat,anda akan kembali ke menu utama "<<endl;
        break;
    }
    break;
    default:
    cout << " maaf nihh pilihan sobat belum tersedia,coba plilh lagi ya (1/2/3/4) "<<endl;
    goto muka_spek;
    break;
    }

// MAteri Fungsi void
}
 void pesanan_1()
{
    cout <<" Masukan Jumlah Handphone yang ingin sobat beli : ";
    cin >> b;
    d=0;
    for(c=0;c<b;c++){
    d=d+1;
    cout<<" Note : Masukan kode hp (1-11)"<<endl;
    cout<<"\n Data ke-"<<d<<endl;
    cout<<" Masukan kode hp: ";
    cin>>kode_hp[c];
    cout <<" Jenis Handphone : "<< var_harga[kode_hp[c]].kode_arr[kode_hp[c]]<<endl;
    cout <<" Harga Handphone : Rp."<< var_harga[kode_hp[c]].harga_arr[kode_hp[c]]<<endl;
    } total_harga=0;
    for(int z=0; z<b; z++){
        total_harga=total_harga+var_harga[kode_hp[z]].harga_arr[kode_hp[z]];
    }
}
 void pesanan_2()
{
    int i,j;
    cout<<"\n==========Menampilkan Daftar========="<<endl;
    j=0;
    for(i=0;i<b;i++)
    {
     j=j+1;
     cout<<"=====================================\n";
     cout<<" Daftar ke "<<j<<endl;
     cout <<" Nama Handphone  : "<< var_harga[kode_hp[i]].kode_arr[kode_hp[i]]<<endl;
     cout <<" Harga Handphone : Rp."<< var_harga[kode_hp[i]].harga_arr[kode_hp[i]]<<endl;
    }
}

 int main()
{
    int pilih_menu;
    beranda:
    system("cls");
    cout << " =============================================" << endl;
	cout << " | "<<setw (44)<<" | " << endl;
	cout << " | " << setw(10)<<" SELAMAT DATANG DI TOKO ILKOM UNPAK TECH " << setw(2)<<" | "<<endl;
    cout << " | "<<setw (44)<<" | " << endl;
	cout << " =============================================" << endl;
    cout <<"   "<<setw(5)<<"Hallo disini kami menyediakan kebutuhan\n    Handphone anda,ada 4 brand utama kami  "<<endl;
    cout <<"          "<<"SAMSUNG,VIVO,XIAOMI,OPPO \n dijamin lebih murah di bandingkan toko lain"<<endl;
    cout << " =============================================" << endl;
    cout<< " \n Silahkan pilih menu yang sobat butuhkan ya "<<endl;
    cout<< " 1.Cek spesifikasi\n 2.Pemesanan "<<endl;
    cin >> pilih_menu;
    system ("cls");
    switch (pilih_menu)
    {
        case 1:
        spesifikasi();
        break;
        case 2:
        goto pemesanan;
        break;
        default:
        goto beranda;
        break;
    }
    goto beranda;
   //MATERI STACK
 pemesanan:
  cout<<"\n================================ MENU PEMESANAN =================================";
  cout<<"\n1. Pilih handphone ";
  cout<<"\n2. Lihat daftar handphone pilihan kita ";
  cout<<"\n3. lanjut ke pembayaran ";
  cout<<"\n4. kembali ke halaman utama ";
  cout<<"\n\nMasukkan Pilihan : ";
  cin >> pilih_menu;
  if(pilih_menu==1)
   {system("cls");pesanan_1();goto pemesanan;}
  if (pilih_menu==2)
   {system("cls");pesanan_2();goto pemesanan;}
  if(pilih_menu==3)
   {system("cls");goto pembayaran;}
  if(pilih_menu==4)
   {system("cls");goto beranda;}
  else {goto beranda;}

 pembayaran:
 //MATERI STRING
 int pembayaran,harga_akhir;
 cout<<" TERIMKASIH SUDAH MELAKUKAN PEMESANAN "<<endl;
 cout<<" sebelum melanjutkan ke pembayaran,yuk isi identitas untuk pengiriman handphone nya"<<endl;
 cout<<"========================================================================="<<endl;
 cin.clear();
 cin.ignore(numeric_limits<streamsize>::max(), '\n');
 cout<<" Masukan Nama Anda :";
 getline (cin, identitas.nama_kamu);
 cout<<endl;
 cout<<" Masukan alamat anda secara lengkap :";
 getline (cin, identitas.alamat);
 cout<<endl;
 cout<<" Masukan no handphone anda :";
 getline (cin, identitas.nohp);
 cout << " Terimakasih telah mengisi identitas, pastikan identitasnya benar ya"<<endl;
 cout<<endl;
 system("cls");
 cout<<"\n============================= MENU PEMBAYARAN ======================="<<endl;
 cout <<" Hallo sobat semua,kami telah bekerjasama dengan Gopay indonesia loo "<<endl;
 cout <<" jadi bagi sobat yang melakukan pembayaran dengan metode gopay akan  "<<endl;
 cout <<"  mendapatkan Potongan harga sebesar 30% loo,Ayo serbu promonyaa !! "<<endl;
 cout<<"======================================================================="<<endl;
 cout<<" Total Pembayaran sobatt adalah : Rp."<<total_harga<<" ribu"<<endl;
 cout<<"======================================================================"<<endl;
 metode:
 cout<<" Metode Pembayaran :\n 1.GOPAY\t2.OVO\n 3.SHOPEPAY\t4.MBANGKING"<<endl;
 cout<<" Pilih metode pembayaran nya ya [1-4] : "<<endl;
 cin >> pembayaran;
 if (pembayaran==1){
    harga_akhir = total_harga - (0.3*total_harga);
    cout<<" selamat sobat mendapatkan potongan sebanyak 30% dari metode pembayaran gopay"<<endl;
    cout<<" harga awal  = "<<total_harga<<endl;
    cout<<" harga akhir = "<<harga_akhir<<endl;   
 }else if ( pembayaran >4 || pembayaran < 1 ){
     cout << " maap metode pembayaran belum tersedia "<<endl;
     goto metode;
    }else{
    harga_akhir=total_harga;
    cout<<"TOTAL PEMBAYARAN Rp."<<harga_akhir<<endl;
     }
    system("cls");
    cout<<"-------------------------------------"<<endl;
    cout<<"| PEMBAYARAN"<<setw(18)<<"Rp."<<total_harga<<" |"<<endl;
    cout<<"| TOTAL AKHIR PEMBAYARAN"<<setw(6)<<"Rp."<<harga_akhir<<" |"<<endl;
    cout<<"-------------------------------------"<<endl;
    cout << " Nama           	: " << identitas.nama_kamu << endl;
    cout << " alamat         	: " << identitas.alamat << endl;
    cout << " Nomor Handphone	: " << identitas.nohp<<endl;
    cout<<"-------------------------------------"<<endl;
    cout << " -------------------------------------------------------" << endl;
    cout << " |                 ~~~ Terima kasih ~~~                |" << endl;
    cout << " |            Sudah berbelanja di toko kami            | " << endl; 
    cout << " =======================================================" << endl;

 return 0; 
 getch(); 

}