class baju extends aksesoris{
    private String size,merk;

    public baju(){
        this.size="";this.merk="";
    }
    
    public baju(String size,String merk){
        this.size=size;
        this.merk=merk;
    }

    public String getsize(){
        return this.size;
    }
    public void setsize(String size){
        this.size = size;
    }
    
    public String getmerk(){
        return this.merk;
    }
    public void setmerk(String merk){
        this.merk = merk;
    }
    
    
}