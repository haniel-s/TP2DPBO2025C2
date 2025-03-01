#include <iostream>
#include <string>

using namespace std;

class petshop{
    private: 
        int id,harga_produk,stok_produk;
        string nama_produk;
    public:
        petshop(){
            this->id=0;
            this->harga_produk=0;
            this->stok_produk=0;
            this->nama_produk="";
        }
        petshop(int id,int harga_produk,int stok_produk,string nama_produk){
            this->id=id;
            this->harga_produk=harga_produk;
            this->stok_produk=stok_produk;
            this->nama_produk=nama_produk;
        }
        
        int get_id(){
            return this->id;
        }
        void set_id(int id){
            this->id=id;
        }
        
        int get_harga(){
            return this->harga_produk;
        }
        void set_harga(int harga_produk){
            this->harga_produk=harga_produk;
        }
        
        int get_stok(){
            return this->stok_produk;
        }
        void set_stok(int stok_produk){
            this->stok_produk=stok_produk;
        }
        
        string get_nama(){
            return this->nama_produk;
        }
        void set_nama(string nama_produk){
            this->nama_produk=nama_produk;
        }

        ~petshop(){
        }
};