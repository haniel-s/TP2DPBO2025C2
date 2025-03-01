#include <bits/stdc++.h>
#include "baju.cpp"

using namespace std;
int main(){
    list<baju>listb;

    //petshop
    int id,harga_produk,stok_produk;
    string nama_produk; 

    // aksesoris
    string jenis,bahan,warna; 

    // baju
    string size;
    string merk;

    baju temp;

    // objek awal 1
    id = 001;nama_produk="Sweater_Adidas";stok_produk=21;harga_produk=15000;jenis="cotton";bahan="cotton";warna="hitam";size="XXL";merk="Adidas";
            temp.set_id(id);
            temp.set_harga(harga_produk);
            temp.set_stok(stok_produk);
            temp.set_nama(nama_produk);
            temp.set_jenis(jenis);
            temp.set_bahan(bahan);
            temp.set_warna(warna);
            temp.set_size(size);
            temp.set_merk(merk);
            listb.push_back(temp);
    // objek awal 2
    id = 002, nama_produk = "Jaket", stok_produk = 115, harga_produk = 20000, jenis = "polyester", bahan = "polyester", warna = "biru", size = "XL", merk = "Nike";
            temp.set_id(id);
            temp.set_harga(harga_produk);
            temp.set_stok(stok_produk);
            temp.set_nama(nama_produk);
            temp.set_jenis(jenis);
            temp.set_bahan(bahan);
            temp.set_warna(warna);
            temp.set_size(size);
            temp.set_merk(merk);
            listb.push_back(temp);
    // objek awal 3
    id = 003, nama_produk = "Kaos", stok_produk = 305, harga_produk = 10000, jenis = "katun", bahan = "katun", warna = "putih", size = "L", merk = "Puma";
            temp.set_id(id);
            temp.set_harga(harga_produk);
            temp.set_stok(stok_produk);
            temp.set_nama(nama_produk);
            temp.set_jenis(jenis);
            temp.set_bahan(bahan);
            temp.set_warna(warna);
            temp.set_size(size);
            temp.set_merk(merk);
            listb.push_back(temp);
    // objek awal 4
    id = 004, nama_produk = "Hoodie", stok_produk = 102, harga_produk = 25000, jenis = "fleece", bahan = "fleece", warna = "abu-abu", size = "M", merk = "Reebok";
            temp.set_id(id);
            temp.set_harga(harga_produk);
            temp.set_stok(stok_produk);
            temp.set_nama(nama_produk);
            temp.set_jenis(jenis);
            temp.set_bahan(bahan);
            temp.set_warna(warna);
            temp.set_size(size);
            temp.set_merk(merk);
            listb.push_back(temp);
    // objek awal 5
    id = 005, nama_produk = "Celana_Trainer", stok_produk = 138, harga_produk = 22000, jenis = "spandex", bahan = "spandex", warna = "hitam", size = "L", merk = "Under_Armour";
            temp.set_id(id);
            temp.set_harga(harga_produk);
            temp.set_stok(stok_produk);
            temp.set_nama(nama_produk);
            temp.set_jenis(jenis);
            temp.set_bahan(bahan);
            temp.set_warna(warna);
            temp.set_size(size);
            temp.set_merk(merk);
            listb.push_back(temp);

// ngitung buat spasi tabel
int spasi_id=0,spasi_harga=0,spasi_stok=0;
int spasi_nama=0; 
int spasi_jenis=0,spasi_bahan=0,spasi_warna=0; 
int spasi_size=0,spasi_merk=0;
for (list<baju>::iterator it = listb.begin(); it != listb.end(); it++){
        
        // nyari len int id
        int id_temp=it->get_id();
        int len_id=0;
        do{
                id_temp/=10;
                len_id++;
        }while(id_temp>0);
        // disamain spasi_id sama len terpanjang
        if (len_id>=spasi_id){
                spasi_id = len_id;
        }
        
        // nyari len int harga
        int harga_temp=it->get_harga();
        int len_harga=0;
        do{
                harga_temp/=10;
                len_harga++;
        }while(harga_temp>0);
        // disamain spasi_harga sama len terpanjang
        if (len_harga>=spasi_harga){
                spasi_harga = len_harga;
        }
        
        // nyari len int stok
        int stok_temp=it->get_stok();
        int len_stok=0;
        do{
                stok_temp/=10;
                len_stok++;
        }while(stok_temp>0);
        // disamain spasi_id sama len terpanjang
        if (len_stok>=spasi_stok){
                spasi_stok = len_stok;
        }
        
        if (it->get_nama().length()>=spasi_nama){
                spasi_nama = it->get_nama().length();
        }
        
        if (it->get_jenis().length()>=spasi_jenis){
                spasi_jenis = it->get_jenis().length();
        }
        
        if (it->get_bahan().length()>=spasi_bahan){
                spasi_bahan = it->get_bahan().length();
        }
        
        if (it->get_warna().length()>=spasi_warna){
                spasi_warna = it->get_warna().length();
        }
        
        if (it->get_size().length()>=spasi_size){
                spasi_size = it->get_size().length();
        }
        
        if (it->get_merk().length()>=spasi_merk){
                spasi_merk = it->get_merk().length();
        }
}

//print atasan tabel
cout<<"+";
for (int i =0;i<(spasi_id+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_harga+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_stok+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_nama+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_jenis+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_bahan+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_warna+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_size+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_merk+2);i++){
        cout<<"-";
}cout<<"+"<<"\n";
// title
cout<<"| "<< "ID";
for (int i =0;i<(spasi_id+1)-2;i++){
        cout<<" ";
}cout<<"| "<< "harga";
for (int i =0;i<(spasi_harga+1)-5;i++){
        cout<<" ";
}cout<<"| "<<"stok";
for (int i =0;i<(spasi_stok+1)-4;i++){
        cout<<" ";
}cout<<"| "<<"nama";
for (int i =0;i<(spasi_nama+1)-4;i++){
        cout<<" ";
}cout<<"| "<<"jenis";
for (int i =0;i<(spasi_jenis+1)-5;i++){
        cout<<" ";
}cout<<"| "<<"bahan";
for (int i =0;i<(spasi_bahan+1)-5;i++){
        cout<<" ";
}cout<<"| "<<"warna";
for (int i =0;i<(spasi_warna+1)-5;i++){
        cout<<" ";
}cout<<"| "<<"size";
for (int i =0;i<(spasi_size+1)-4;i++){
        cout<<" ";
}cout<<"| "<<"merk";
for (int i =0;i<(spasi_merk+1)-4;i++){
        cout<<" ";
}cout<<"|"<<"\n";
// print bawah dari atasan
cout<<"+";
for (int i =0;i<(spasi_id+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_harga+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_stok+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_nama+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_jenis+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_bahan+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_warna+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_size+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_merk+2);i++){
        cout<<"-";
}cout<<"+"<<"\n";

// print list
for (list<baju>::iterator it = listb.begin(); it != listb.end(); it++){
        
        // nyari len int id
        int id_temp=it->get_id();
        int len_id=0;
        do{
        id_temp/=10;
        len_id++;
        }while(id_temp>0);
        cout<<"| "<< it->get_id();
        for (int i =0;i<(spasi_id+1)-len_id;i++){
                cout<<" ";
        }

        // nyari len int harga
        int harga_temp=it->get_harga();
        int len_harga=0;
        do{
                harga_temp/=10;
                len_harga++;
        }while(harga_temp>0);
        cout<<"| "<< it->get_harga();
        for (int i =0;i<(spasi_harga+1)-len_harga;i++){
                cout<<" ";
        }

        // nyari len int stok
        int stok_temp=it->get_stok();
        int len_stok=0;
        do{
                stok_temp/=10;
                len_stok++;
        }while(stok_temp>0);
        cout<<"| "<<it->get_stok();
        for (int i =0;i<(spasi_stok+1)-len_stok;i++){
                cout<<" ";
        }

        cout<<"| "<<it->get_nama();
        for (int i =0;i<(spasi_nama+1)-it->get_nama().length();i++){
                cout<<" ";
        }
        cout<<"| "<<it->get_jenis();
        for (int i =0;i<(spasi_jenis+1)-it->get_jenis().length();i++){
                cout<<" ";
        }
        cout<<"| "<<it->get_bahan();
        for (int i =0;i<(spasi_bahan+1)-it->get_bahan().length();i++){
                cout<<" ";
        }
        cout<<"| "<<it->get_warna();
        for (int i =0;i<(spasi_warna+1)-it->get_warna().length();i++){
                cout<<" ";
        }
        cout<<"| "<<it->get_size();
        for (int i =0;i<(spasi_size+1)-it->get_size().length();i++){
                cout<<" ";
        }
        cout<<"| "<<it->get_merk();
        for (int i =0;i<(spasi_merk+1)-it->get_merk().length();i++){
                cout<<" ";
        }
        cout<<"|"<<"\n";
}

// print bawahan
cout<<"+";
for (int i =0;i<(spasi_id+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_harga+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_stok+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_nama+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_jenis+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_bahan+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_warna+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_size+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_merk+2);i++){
        cout<<"-";
}cout<<"+"<<"\n";

char add;
cout << "add ?[y/n]";
cin >> add;

if (add=='y'||add=='Y'){
        cout << "Masukkan id, nama_produk, stok_produk, harga_produk, jenis, bahan, warna, size, merk baru :";
        cin >> id >> nama_produk >> stok_produk >> harga_produk >> jenis >> bahan >> warna >> size >> merk;
        temp.set_id(id);
        temp.set_harga(harga_produk);
        temp.set_stok(stok_produk);
        temp.set_nama(nama_produk);
        temp.set_jenis(jenis);
        temp.set_bahan(bahan);
        temp.set_warna(warna);
        temp.set_size(size);
        temp.set_merk(merk);
        listb.push_back(temp);

}
// ngitung buat spasi tabel
spasi_id=0,spasi_harga=0,spasi_stok=0;
 spasi_nama=0; 
 spasi_jenis=0,spasi_bahan=0,spasi_warna=0; 
 spasi_size=0,spasi_merk=0;
for (list<baju>::iterator it = listb.begin(); it != listb.end(); it++){
        
        // nyari len int id
        int id_temp=it->get_id();
        int len_id=0;
        do{
                id_temp/=10;
                len_id++;
        }while(id_temp>0);
        // disamain spasi_id sama len terpanjang
        if (len_id>=spasi_id){
                spasi_id = len_id;
        }
        
        // nyari len int harga
        int harga_temp=it->get_harga();
        int len_harga=0;
        do{
                harga_temp/=10;
                len_harga++;
        }while(harga_temp>0);
        // disamain spasi_harga sama len terpanjang
        if (len_harga>=spasi_harga){
                spasi_harga = len_harga;
        }
        
        // nyari len int stok
        int stok_temp=it->get_stok();
        int len_stok=0;
        do{
                stok_temp/=10;
                len_stok++;
        }while(stok_temp>0);
        // disamain spasi_id sama len terpanjang
        if (len_stok>=spasi_stok){
                spasi_stok = len_stok;
        }
        
        if (it->get_nama().length()>=spasi_nama){
                spasi_nama = it->get_nama().length();
        }
        
        if (it->get_jenis().length()>=spasi_jenis){
                spasi_jenis = it->get_jenis().length();
        }
        
        if (it->get_bahan().length()>=spasi_bahan){
                spasi_bahan = it->get_bahan().length();
        }
        
        if (it->get_warna().length()>=spasi_warna){
                spasi_warna = it->get_warna().length();
        }
        
        if (it->get_size().length()>=spasi_size){
                spasi_size = it->get_size().length();
        }
        
        if (it->get_merk().length()>=spasi_merk){
                spasi_merk = it->get_merk().length();
        }
}

//print atasan tabel
cout<<"+";
for (int i =0;i<(spasi_id+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_harga+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_stok+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_nama+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_jenis+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_bahan+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_warna+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_size+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_merk+2);i++){
        cout<<"-";
}cout<<"+"<<"\n";
// title
cout<<"| "<< "ID";
for (int i =0;i<(spasi_id+1)-2;i++){
        cout<<" ";
}cout<<"| "<< "harga";
for (int i =0;i<(spasi_harga+1)-5;i++){
        cout<<" ";
}cout<<"| "<<"stok";
for (int i =0;i<(spasi_stok+1)-4;i++){
        cout<<" ";
}cout<<"| "<<"nama";
for (int i =0;i<(spasi_nama+1)-4;i++){
        cout<<" ";
}cout<<"| "<<"jenis";
for (int i =0;i<(spasi_jenis+1)-5;i++){
        cout<<" ";
}cout<<"| "<<"bahan";
for (int i =0;i<(spasi_bahan+1)-5;i++){
        cout<<" ";
}cout<<"| "<<"warna";
for (int i =0;i<(spasi_warna+1)-5;i++){
        cout<<" ";
}cout<<"| "<<"size";
for (int i =0;i<(spasi_size+1)-4;i++){
        cout<<" ";
}cout<<"| "<<"merk";
for (int i =0;i<(spasi_merk+1)-4;i++){
        cout<<" ";
}cout<<"|"<<"\n";
// print bawah dari atasan
cout<<"+";
for (int i =0;i<(spasi_id+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_harga+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_stok+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_nama+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_jenis+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_bahan+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_warna+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_size+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_merk+2);i++){
        cout<<"-";
}cout<<"+"<<"\n";

// print list
for (list<baju>::iterator it = listb.begin(); it != listb.end(); it++){
        
        // nyari len int id
        int id_temp=it->get_id();
        int len_id=0;
        do{
        id_temp/=10;
        len_id++;
        }while(id_temp>0);
        cout<<"| "<< it->get_id();
        for (int i =0;i<(spasi_id+1)-len_id;i++){
                cout<<" ";
        }

        // nyari len int harga
        int harga_temp=it->get_harga();
        int len_harga=0;
        do{
                harga_temp/=10;
                len_harga++;
        }while(harga_temp>0);
        cout<<"| "<< it->get_harga();
        for (int i =0;i<(spasi_harga+1)-len_harga;i++){
                cout<<" ";
        }

        // nyari len int stok
        int stok_temp=it->get_stok();
        int len_stok=0;
        do{
                stok_temp/=10;
                len_stok++;
        }while(stok_temp>0);
        cout<<"| "<<it->get_stok();
        for (int i =0;i<(spasi_stok+1)-len_stok;i++){
                cout<<" ";
        }

        cout<<"| "<<it->get_nama();
        for (int i =0;i<(spasi_nama+1)-it->get_nama().length();i++){
                cout<<" ";
        }
        cout<<"| "<<it->get_jenis();
        for (int i =0;i<(spasi_jenis+1)-it->get_jenis().length();i++){
                cout<<" ";
        }
        cout<<"| "<<it->get_bahan();
        for (int i =0;i<(spasi_bahan+1)-it->get_bahan().length();i++){
                cout<<" ";
        }
        cout<<"| "<<it->get_warna();
        for (int i =0;i<(spasi_warna+1)-it->get_warna().length();i++){
                cout<<" ";
        }
        cout<<"| "<<it->get_size();
        for (int i =0;i<(spasi_size+1)-it->get_size().length();i++){
                cout<<" ";
        }
        cout<<"| "<<it->get_merk();
        for (int i =0;i<(spasi_merk+1)-it->get_merk().length();i++){
                cout<<" ";
        }
        cout<<"|"<<"\n";
}

// print bawahan
cout<<"+";
for (int i =0;i<(spasi_id+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_harga+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_stok+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_nama+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_jenis+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_bahan+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_warna+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_size+2);i++){
        cout<<"-";
}cout<<"+";
for (int i =0;i<(spasi_merk+2);i++){
        cout<<"-";
}cout<<"+"<<"\n";

 return 0;
}