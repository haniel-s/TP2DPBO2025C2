<?php
class petshop{
    private $id=0;
    private $harga=0;
    private $stok=0;
    private $nama='';
    private $foto='';
    public function __construct($id=0,$harga=0,$stok=0,$nama='',$foto=''){
        $this->id= $id;
        $this->harga= $harga;
        $this->stok= $stok;
        $this->nama= $nama;
        $this->foto= $foto;
    }
    
    public function setid($id){
        $this->id= $id;
    }
    public function getid(){
        return $this->id;
    }
    
    public function setharga($harga){
        $this->harga= $harga;
    }
    public function getharga(){
        return $this->harga;
    }
    
    public function setstok($stok){
        $this->stok= $stok;
    }
    public function getstok(){
        return $this->stok;
    }

    public function setnama($nama){
        $this->nama= $nama;
    }
    public function getnama(){
        return $this->nama;
    }
    
    public function setfoto($foto){
        $this->foto= $foto;
    }
    public function getfoto(){
        return $this->foto;
    }
    
}
?>