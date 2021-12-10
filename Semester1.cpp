#include <iostream>
#include <iomanip>
using namespace std;

int penghitung_standar(int malam){
	int harga;
	harga=malam*100000;
		return harga;
}
int penghitung_deluxe(int malam){
	int harga;
	harga=malam*175000;
		return harga;
}
int penghitung_superior(int malam){
	int harga;
	harga=malam*225000;
		return harga;
}
void selamat_datang()
    {
		cout<<"================================================================\n"
		<<"||==Selamat Datang di Aplikasi Reservasi Hotel Bintang Jogja==||\n"
		<<"================================================================\n";
	}


int main(){
    int angka, no, i,malam,st=0,de=0,su=0,rekap_max=0; //st=nomor standar, de=deluxe, su = superior
    int kamar[3][9999];
    string nama, alamat, nomor;
    char reserv;
    
    for(int a=0;a<3;a++){
		for(int b=0;b<9999;b++)
		kamar[a][b]=0;
	}

selamat_datang();//MEMANGGIL FUNGSI
cout<<"Harap Masukkan data tersebut :\n";
cout<<"\nNama	: ";
cin>>nama;
cout<<"Alamat	: ";
cin>>alamat;
cout<<"No.Hp	: ";
cin>>nomor;

 do{system("CLS");//MENU UTAMA; I =6 DAN BERAKHIR DI BARIS PALING AKHIR/ BARIS 237
	 selamat_datang();//MEMANGGIL FUNGSI
     cout<<"Selamat datang "<<nama<<" Di menu utama||";
     cout<<"\n================================"<<endl;
     cout<<"1. Info Fasilitas \n"
     <<"2. Reservasi \n"
     <<"3. Rekap Kamar\n"
     <<"4. Keluar \n"
     <<"Pilih no : ";
     cin>>angka;
     cout<<"======================================================="<<endl;
     switch(angka){
        case 1 ://MENU UTAMA->MENU FASILITAS
        do{ //PENGULANGAN UNTUK MENU FASILITAS DENGAN nol=5 BERAKHIR DI BARIS 123
            system("CLS");
            selamat_datang();//MEMANGGIL FUNGSI
            cout<<"Selamat datang "<<nama<<" Di info fasilitas||\n"
            <<""
            <<"1. Standard\n"
            <<"2. Deluxe\n"
            <<"3. Superior\n"
            <<"4. Kembali\n"
            <<"Pilih no : ";
            cin>> no;
            
             if (no == 1){system("CLS");//MENU FASILITAS->STANDAR
				 selamat_datang();//MEMANGGIL FUNGSI
                cout<<"Fasilitas : \n"
                <<"1. Single Bed \n"
                <<"2. Kipas Angin \n"
                <<"3. Kamar Mandi umum \n"
                <<"4. Tv layar kecil \n"
                <<"5. Ukuran kamar 2x2 \n"
                <<"6. Harga Rp.100.000,00/malam\n"
                <<"7. Kembali\n";
                system("PAUSE");
                i = 5;}
                
            else if (no == 2){system("CLS"); //MENU FASILITAS->DELUXE
				selamat_datang();//MEMANGGIL FUNGSI
                cout<<"Fasilitas : \n"
                <<"1. Double Bed \n"
                <<"2. Kipas Angin \n"
                <<"3. Kamar Mandi Pribadi \n"
                <<"4. Tv layar Besar \n"
                <<"5. Ukuran kamar 3x3 \n"
                <<"6. Harga Rp.175.000,00/malam\n"
                <<"7. Kembali\n";
                system("PAUSE");
                i = 5;}
                
            else if (no == 3){system("CLS");//MENU FASILITAS->SUPERIOR
				selamat_datang();//MEMANGGIL FUNGSI
                cout<<"Fasilitas : \n"
                <<"1. Double Bed \n"
                <<"2. AC \n"
                <<"3. Kamar Mandi Pribadi \n"
                <<"4. Tv layar Besar \n"
                <<"5. Ukuran kamar 4x4 \n"
                <<"6. Harga Rp.225.000,00/malam\n"
                <<"7. Kembali\n";
                system("PAUSE");
                i = 5;}
       
			else if (no == 4){system("CLS");//MENU FASILITAS->KEMBALI
                i=6;}
                
            else{i=5;}//JIKA MEMASUKAN SELAIN 1-4 MAKA i = 5 YANG MANA AKAN MENGULANG MENU FASILITAS
                 }while (i == 5); //AKHIR PENGULANGAN DARI MENU FASILITAS, DIMULAI DARI BARIS 60
                        break; 
                        
            case 2 ://MENU UTAMA->RESERVASI
				do{ // PENGULANGAN UNTUK MENU RESERVASI DAN BERAKHIR DI BARIS 208 DENGAN i = 3
				system("CLS");
				selamat_datang();//MEMANGGIL FUNGSI
				cout<<"Selamat datang "<<nama<<" Di Reservasi\n"
				<<"1. Standard\n"
				<<"2. Deluxe\n"
				<<"3. Superior\n"
				<<"4. Kembali\n"
				<<"Pilih no : ";
				cin>>no;
					if(no==1){//RESERVASI->1. STANDAR; BERAKHIR DI BARIS 159
					system("CLS");
					selamat_datang();//MEMANGGIL FUNGSI
					cout<<"Untuk Tarif standard Rp.100.000,00/malam\n"
					<<"1. Ingin memesan berapa malam?\n"
					<<"2, Kembali\n"
					<<"Pilih no ";
					cin>>no;
						if(no==1){//RESERVASI->1. STANDAR->1. INGIN MEMESAN BERAPA MALAM, BERAKHIR DI BARIS 157
						cout<<"Ingin memesan berapa malam?\n";
						cin>>malam;
						kamar[0][st]=penghitung_standar(malam);
						st++;
						cout<<"Harga yang harus anda bayar = "<<penghitung_standar(malam);
						cout<<"\nApakah anda ingin melakukan pemesanan lagi?(Y/N) ";
						cin>>reserv;
							if(reserv == 'y' || reserv == 'Y'){ //TRUE = NGULANG
							i=6;	}
							else {i=0;} //LANGSUNG EXIT
						}
						else if(no==2){i=3;} //RESERVASI->1. STANDAR->2.KEMBALI
						else{i=3;}//RESERVASI->1. STANDAR-> INPUT SELAIN 1-2, DIA AKAN KEMBALI KE MENU UTAMA
					}//AKHIR DARI MENU RESERVASI->1. STANDAR
					else if(no==2){//RESERVASI->2. DELUXE
						system("CLS");
						selamat_datang();//MEMANGGIL FUNGSI
						cout<<"Untuk Tarif Deluxe Rp.175.000,00/malam\n"
						<<"1. Ingin memesan berapa malam?\n"
						<<"2, Kembali\n"
						<<"Pilih no ";
						cin>>no;
							if(no==1){//RESERVASI->2. DELUXE->1. INGIN MEMESAN----
							cout<<"Ingin memesan berapa malam?\n";
							cin>>malam;
							kamar[1][de]=penghitung_deluxe(malam);
							de++;
							cout<<"Harga yang harus anda bayar = "<<penghitung_deluxe(malam);
							cout<<"\nApakah anda ingin melakukan pemesanan lagi?(Y/N) ";
							cin>>reserv;
								if(reserv == 'y' || reserv == 'Y'){//TRUE = NGULANG
								i=6;	}
								else {i=0;}//LANGSUNG EXIT
						}
						else if(no==2){i=3;}//KEMBALI
						else{i=6;}//RESET
					}//AKHIR DARI MENU RESERVASI->2. DELUXE
					else if(no==3){////RESERVASI->3. SUPERIOR
						system("CLS");
						selamat_datang();//MEMANGGIL FUNGSI
						cout<<"Untuk Tarif Superior Rp.225.000,00/malam\n"
						<<"1. Ingin memesan berapa malam?\n"
						<<"2, Kembali\n"
						<<"Pilih no ";
						cin>>no;
							if(no==1){////RESERVASI->3. SUPERIOR->1. INGIN MEMESAN---
							cout<<"Ingin memesan berapa malam?\n";
							cin>>malam;
							kamar[2][su]=penghitung_superior(malam);
							su++;
							cout<<"Harga yang harus anda bayar = "<<penghitung_superior(malam);
							cout<<"\nApakah anda ingin melakukan pemesanan lagi?(Y/N) ";
							cin>>reserv;
								if(reserv == 'y' || reserv == 'Y'){//NGULANG
								i=6;	}
								else {i=0;}//LANGSUNG KELUAR
							}
							else if(no==2){i=3;}//KEMBALI
							else{i=3;}//RESET
					}//AKHIR DARI MENU RESERVASI->3. SUPERIOR
					else if(no==4){//MENU RESERVASI->4. KEMBALI
						i=6;
					}else {i = 3;}
			}while(i==3);//BUAT PENGULANGAN BAGIAN MENU RESERVASI, DIMULAI DARI BARIS 127
            break ;
     
			case 3:
			if(st>=de){  
				if(st>=su){
					rekap_max=st-1;
				}
				else{
					rekap_max=su-1;
				}
			}
			else if(st<=de){
				if(de>=su){
					rekap_max=de-1;
				}
				else{
					rekap_max= su-1;
				}
			}
			else{rekap_max=su-1;}
		
		
			system("CLS");
			selamat_datang();//MEMANGGIL FUNGSI
			cout<<"====================================================================="<<endl;
			cout<<setiosflags(ios::left)<<"No   "<<"|"<<setw(20)<<"Kamar Standar"<<"|"<<setw(20)<<"Kamar Deluxe"<<"|"<<setw(20)<<"Kamar Superior"<<"|"<<endl;
			cout<<"====================================================================="<<endl;
			
			for(int nomor=0;nomor<=rekap_max;nomor++){
			cout<<setiosflags(ios::left)<<setw(5)<<nomor+1<<"|"<<setw(20)<<kamar[0][nomor]<<"|"<<setw(20)<<kamar[1][nomor]<<"|"<<setw(20)<<kamar[2][nomor]<<"|"<<endl;
			cout<<"====================================================================="<<endl;
				
		}
			system("PAUSE");
			i=6;
			break;
			
            case 4 ://MENU UTAMA->4. KELUAR
            i=0;
            break ;
     
            default ://RESET MENU UTAMA
                i=6;
            break;  
                        
                        
                        
              }
     }while(i == 6);
    }
