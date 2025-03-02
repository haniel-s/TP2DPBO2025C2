<?php
require('aksesoris.php');
class baju extends aksesoris{
    private $size='';
    private $merk='';
    public function __construct($size='',$merk=''){
        $this->size= $size;
        $this->merk= $merk;
    }
    
    public function setsize($size){
        $this->size= $size;
    }
    public function getsize(){
        return $this->size;
    }
    
    public function setmerk($merk){
        $this->merk= $merk;
    }
    public function getmerk(){
        return $this->merk;
    }
    
}
