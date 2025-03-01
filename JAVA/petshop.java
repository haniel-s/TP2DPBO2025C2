public class petshop{
    private int id,harga,stok;
    private String nama;

    public petshop(){
        this.id=0;
        this.harga=0;
        this.stok=0;
        this.nama="";
    }
    
    public petshop(int id,int harga,int stok,String nama){
        this.id= id;
        this.harga=harga;
        this.stok=stok;
        this.nama=nama;
    }

    
    public int getid(){
        return this.id;
    }
    public void setid(int id){
        this.id = id;
    }
    
    public int getharga(){
        return this.harga;
    }
    public void setharga(int harga){
        this.harga = harga;
    }
    
    public int getstok(){
        return this.stok;
    }
    public void setstok(int stok){
        this.stok = stok;
    }

    public String getNama(){
        return this.nama;
    }
    public void setNama(String nama){
        this.nama = nama;
    }
    
}