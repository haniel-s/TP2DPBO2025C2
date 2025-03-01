#include <iostream>
#include <string>
#include "petshop.cpp"

using namespace std;

class aksesoris:public petshop{
    private: 
        string jenis,bahan,warna;
    public:
        aksesoris(){
            this->jenis="";
            this->bahan="";
            this->warna="";
        }
        aksesoris(string jenis,string bahan,string warna){
            this->jenis=jenis;
            this->bahan=bahan;
            this->warna=warna;
        }
        
        string get_jenis(){
            return this->jenis;
        }
        void set_jenis(string jenis){
            this->jenis=jenis;
        }
        
        string get_bahan(){
            return this->bahan;
        }
        void set_bahan(string bahan){
            this->bahan=bahan;
        }

        string get_warna(){
            return this->warna;
        }
        void set_warna(string warna){
            this->warna=warna;
        }

        ~aksesoris(){
        }
};