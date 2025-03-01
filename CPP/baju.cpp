#include <iostream>
#include <string>
#include "aksesoris.cpp"

using namespace std;

class baju:public aksesoris{
    private: 
        string size;
        string merk;
    public:
        baju(){
            this->size="";
            this->merk="";
        }
        baju(string size,string merk){
            this->size=size;
            this->merk=merk;
        }
        
        string get_size(){
            return this->size;
        }
        void set_size(string size){
            this->size=size;
        }
        
        string get_merk(){
            return this->merk;
        }
        void set_merk(string merk){
            this->merk=merk;
        }

        ~baju(){
        }
};