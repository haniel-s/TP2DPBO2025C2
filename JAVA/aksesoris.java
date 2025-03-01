class aksesoris extends petshop{
    private String jenis,bahan,warna;

    public aksesoris(){
        this.jenis="";this.bahan="";this.warna="";
    }
    
    public aksesoris(String jenis,String bahan,String warna){
        this.jenis=jenis;
        this.bahan=bahan;
        this.warna=warna;
    }

    public String getjenis(){
        return this.jenis;
    }
    public void setjenis(String jenis){
        this.jenis = jenis;
    }
    
    public String getbahan(){
        return this.bahan;
    }
    public void setbahan(String bahan){
        this.bahan = bahan;
    }
    
    public String getwarna(){
        return this.warna;
    }
    public void setwarna(String warna){
        this.warna = warna;
    }
    
}