<?php
require('petshop.php');
class aksesoris extends petshop{
    private $jenis='';
    private $bahan='';
    private $warna='';
    public function __construct($jenis = '',$bahan = '',$warna = ''){
        $this->jenis= $jenis;
        $this->bahan= $bahan;
        $this->warna= $warna;
    }
    
    public function setjenis($jenis){
        $this->jenis= $jenis;
    }
    public function getjenis(){
        return $this->jenis;
    }
    
    public function setbahan($bahan){
        $this->bahan= $bahan;
    }
    public function getbahan(){
        return $this->bahan;
    }
    
    public function setwarna($warna){
        $this->warna= $warna;
    }
    public function getwarna(){
        return $this->warna;
    }
}