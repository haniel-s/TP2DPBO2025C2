import java.util.ArrayList;
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        
        ArrayList<baju> list = new ArrayList<>();
        int id,harga,stok;
        String nama,jenis,bahan,warna,size,merk;
        
        baju temp=new baju();
        
        Scanner sc = new Scanner(System.in);
id = 001;nama="Sweater_Adidas";stok=21;harga=15000;
jenis="cotton";
bahan="cotton";warna="hitam";size="XXL";merk="Adidas";

        temp.setid(id);
        temp.setharga(harga);
        temp.setstok(stok);
        temp.setNama(nama);
        temp.setjenis(jenis);
        temp.setbahan(bahan);
        temp.setwarna(warna);
        temp.setsize(size);
        temp.setmerk(merk);
        
        list.add(temp);
baju temp2=new baju();        
id = 002;nama="Jaket";stok=115;harga=20000;
jenis="polyester";
bahan="polyester";warna="biru";size="XL";merk="Nike";

        temp2.setid(id);
        temp2.setharga(harga);
        temp2.setstok(stok);
        temp2.setNama(nama);
        temp2.setjenis(jenis);
        temp2.setbahan(bahan);
        temp2.setwarna(warna);
        temp2.setsize(size);
        temp2.setmerk(merk);
        
        list.add(temp2);
baju temp3=new baju();          
id = 003;nama="Kaos";stok=305;harga=10000;
jenis="katun";
bahan="katun";warna="putih";size="L";merk="Puma";

        temp3.setid(id);
        temp3.setharga(harga);
        temp3.setstok(stok);
        temp3.setNama(nama);
        temp3.setjenis(jenis);
        temp3.setbahan(bahan);
        temp3.setwarna(warna);
        temp3.setsize(size);
        temp3.setmerk(merk);
        
        list.add(temp3);
baju temp4=new baju();          
id = 004;nama="Hoodie";stok=121;harga=25000;
jenis="fleece";
bahan="fleece";warna="abu-abu";size="M";merk="Reebok";

        temp4.setid(id);
        temp4.setharga(harga);
        temp4.setstok(stok);
        temp4.setNama(nama);
        temp4.setjenis(jenis);
        temp4.setbahan(bahan);
        temp4.setwarna(warna);
        temp4.setsize(size);
        temp4.setmerk(merk);
        
        list.add(temp4);
baju temp5=new baju();         
id = 005;nama="Celana_Trainer";stok=138;harga=22000;
jenis="spandex";
bahan="spandex";warna="hitam";size="L";merk="Under_Armour";

        temp5.setid(id);
        temp5.setharga(harga);
        temp5.setstok(stok);
        temp5.setNama(nama);
        temp5.setjenis(jenis);
        temp5.setbahan(bahan);
        temp5.setwarna(warna);
        temp5.setsize(size);
        temp5.setmerk(merk);
        
        list.add(temp5);
        
// ngitung buat spasi tabel
int spasi_id=0,spasi_harga=0,spasi_stok=0;
int spasi_nama=0; 
int spasi_jenis=0,spasi_bahan=0,spasi_warna=0; 
int spasi_size=0,spasi_merk=0;

for (int i=0;i<list.size();i++)
{
    int id_temp=list.get(i).getid();
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
        int harga_temp=list.get(i).getharga();
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
        int stok_temp=list.get(i).getstok();
        int len_stok=0;
        do{
                stok_temp/=10;
                len_stok++;
        }while(stok_temp>0);
        // disamain spasi_id sama len terpanjang
        if (len_stok>=spasi_stok){
                spasi_stok = len_stok;
        }
        
        if (list.get(i).getNama().length()>=spasi_nama){
                spasi_nama = list.get(i).getNama().length();
        }
        
        if (list.get(i).getjenis().length()>=spasi_jenis){
                spasi_jenis = list.get(i).getjenis().length();
        }
        
        if (list.get(i).getbahan().length()>=spasi_bahan){
                spasi_bahan = list.get(i).getbahan().length();
        }
        
        if (list.get(i).getwarna().length()>=spasi_warna){
                spasi_warna = list.get(i).getwarna().length();
        }
        
        if (list.get(i).getsize().length()>=spasi_size){
                spasi_size = list.get(i).getsize().length();
        }
        
        if (list.get(i).getmerk().length()>=spasi_merk){
                spasi_merk = list.get(i).getmerk().length();
        }
} 

//print atasan tabel
System.out.print("+");
for (int i =0;i<(spasi_id+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_harga+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_stok+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_nama+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_jenis+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_bahan+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_warna+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_size+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_merk+2);i++){
        System.out.print("-");
}System.out.println("+");

// title
System.out.print("| ID");
for (int i =0;i<(spasi_id+1)-2;i++){
        System.out.print(" ");
}System.out.print("| harga");
for (int i =0;i<(spasi_harga+1)-5;i++){
        System.out.print(" ");
}System.out.print("| stok");
for (int i =0;i<(spasi_stok+1)-4;i++){
        System.out.print(" ");
}System.out.print("| nama");
for (int i =0;i<(spasi_nama+1)-4;i++){
        System.out.print(" ");
}System.out.print("| jenis");
for (int i =0;i<(spasi_jenis+1)-5;i++){
        System.out.print(" ");
}System.out.print("| bahan");
for (int i =0;i<(spasi_bahan+1)-5;i++){
        System.out.print(" ");
}System.out.print("| warna");
for (int i =0;i<(spasi_warna+1)-5;i++){
        System.out.print(" ");
}System.out.print("| size");
for (int i =0;i<(spasi_size+1)-4;i++){
        System.out.print(" ");
}System.out.print("| merk");
for (int i =0;i<(spasi_merk+1)-4;i++){
        System.out.print(" ");
}System.out.println("|");

//print atasan tabel
System.out.print("+");
for (int i =0;i<(spasi_id+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_harga+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_stok+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_nama+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_jenis+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_bahan+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_warna+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_size+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_merk+2);i++){
        System.out.print("-");
}System.out.println("+");

// print list
for (int i=0;i<list.size();i++){
        
        // nyari len int id
        int id_temp=list.get(i).getid();
        int len_id=0;
        do{
        id_temp/=10;
        len_id++;
        }while(id_temp>0);
        System.out.print("| "+list.get(i).getid());
        for (int j =0;j<(spasi_id+1)-len_id;j++){
                System.out.print(" ");
        }

        // nyari len int harga
        int harga_temp=list.get(i).getharga();
        int len_harga=0;
        do{
                harga_temp/=10;
                len_harga++;
        }while(harga_temp>0);
        System.out.print("| "+list.get(i).getharga());
        for (int j =0;j<(spasi_harga+1)-len_harga;j++){
                System.out.print(" ");
        }

        // nyari len int stok
        int stok_temp=list.get(i).getstok();
        int len_stok=0;
        do{
                stok_temp/=10;
                len_stok++;
        }while(stok_temp>0);
        System.out.print("| "+list.get(i).getstok());
        for (int j =0;j<(spasi_stok+1)-len_stok;j++){
                System.out.print(" ");
        }

        System.out.print("| "+list.get(i).getNama());
        for (int j =0;j<(spasi_nama+1)-list.get(i).getNama().length();j++){
                System.out.print(" ");
        }
        System.out.print("| "+list.get(i).getjenis());
        for (int j =0;j<(spasi_jenis+1)-list.get(i).getjenis().length();j++){
                System.out.print(" ");
        }
        System.out.print("| "+list.get(i).getbahan());
        for (int j=0;j<(spasi_bahan+1)-list.get(i).getbahan().length();j++){
                System.out.print(" ");
        }
        System.out.print("| "+list.get(i).getwarna());
        for (int j=0;j<(spasi_warna+1)-list.get(i).getwarna().length();j++){
                System.out.print(" ");
        }
        System.out.print("| "+list.get(i).getsize());
        for (int j=0;j<(spasi_size+1)-list.get(i).getsize().length();j++){
                System.out.print(" ");
        }
        System.out.print("| "+list.get(i).getmerk());
        for (int j=0;j<(spasi_merk+1)-list.get(i).getmerk().length();j++){
                System.out.print(" ");
        }
        System.out.println("|");
}

//print atasan tabel
System.out.print("+");
for (int i =0;i<(spasi_id+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_harga+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_stok+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_nama+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_jenis+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_bahan+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_warna+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_size+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_merk+2);i++){
        System.out.print("-");
}System.out.println("+");

String method;
System.out.print("Add? [y/n]: ");
method = sc.next();

if (method.equals("y")||method.equals("Y")){
System.out.println("Masukkan id, nama_produk, stok_produk, harga_produk, jenis, bahan, warna, size, merk baru :");
                id = sc.nextInt();
                nama = sc.next(); 
                stok = sc.nextInt(); 
                harga = sc.nextInt();
                jenis = sc.next();
                bahan = sc.next();
                warna = sc.next();
                size = sc.next();
                merk = sc.next();
                baju temp6=new baju();  
                temp6.setid(id);
                temp6.setharga(harga);
                temp6.setstok(stok);
                temp6.setNama(nama);
                temp6.setjenis(jenis);
                temp6.setbahan(bahan);
                temp6.setwarna(warna);
                temp6.setsize(size);
                temp6.setmerk(merk);
                list.add(temp6);
}

//print atasan tabel
System.out.print("+");
for (int i =0;i<(spasi_id+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_harga+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_stok+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_nama+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_jenis+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_bahan+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_warna+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_size+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_merk+2);i++){
        System.out.print("-");
}System.out.println("+");

// title
System.out.print("| ID");
for (int i =0;i<(spasi_id+1)-2;i++){
        System.out.print(" ");
}System.out.print("| harga");
for (int i =0;i<(spasi_harga+1)-5;i++){
        System.out.print(" ");
}System.out.print("| stok");
for (int i =0;i<(spasi_stok+1)-4;i++){
        System.out.print(" ");
}System.out.print("| nama");
for (int i =0;i<(spasi_nama+1)-4;i++){
        System.out.print(" ");
}System.out.print("| jenis");
for (int i =0;i<(spasi_jenis+1)-5;i++){
        System.out.print(" ");
}System.out.print("| bahan");
for (int i =0;i<(spasi_bahan+1)-5;i++){
        System.out.print(" ");
}System.out.print("| warna");
for (int i =0;i<(spasi_warna+1)-5;i++){
        System.out.print(" ");
}System.out.print("| size");
for (int i =0;i<(spasi_size+1)-4;i++){
        System.out.print(" ");
}System.out.print("| merk");
for (int i =0;i<(spasi_merk+1)-4;i++){
        System.out.print(" ");
}System.out.println("|");

//print atasan tabel
System.out.print("+");
for (int i =0;i<(spasi_id+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_harga+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_stok+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_nama+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_jenis+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_bahan+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_warna+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_size+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_merk+2);i++){
        System.out.print("-");
}System.out.println("+");

// print list
for (int i=0;i<list.size();i++){
        
        // nyari len int id
        int id_temp=list.get(i).getid();
        int len_id=0;
        do{
        id_temp/=10;
        len_id++;
        }while(id_temp>0);
        System.out.print("| "+list.get(i).getid());
        for (int j =0;j<(spasi_id+1)-len_id;j++){
                System.out.print(" ");
        }

        // nyari len int harga
        int harga_temp=list.get(i).getharga();
        int len_harga=0;
        do{
                harga_temp/=10;
                len_harga++;
        }while(harga_temp>0);
        System.out.print("| "+list.get(i).getharga());
        for (int j =0;j<(spasi_harga+1)-len_harga;j++){
                System.out.print(" ");
        }

        // nyari len int stok
        int stok_temp=list.get(i).getstok();
        int len_stok=0;
        do{
                stok_temp/=10;
                len_stok++;
        }while(stok_temp>0);
        System.out.print("| "+list.get(i).getstok());
        for (int j =0;j<(spasi_stok+1)-len_stok;j++){
                System.out.print(" ");
        }

        System.out.print("| "+list.get(i).getNama());
        for (int j =0;j<(spasi_nama+1)-list.get(i).getNama().length();j++){
                System.out.print(" ");
        }
        System.out.print("| "+list.get(i).getjenis());
        for (int j =0;j<(spasi_jenis+1)-list.get(i).getjenis().length();j++){
                System.out.print(" ");
        }
        System.out.print("| "+list.get(i).getbahan());
        for (int j=0;j<(spasi_bahan+1)-list.get(i).getbahan().length();j++){
                System.out.print(" ");
        }
        System.out.print("| "+list.get(i).getwarna());
        for (int j=0;j<(spasi_warna+1)-list.get(i).getwarna().length();j++){
                System.out.print(" ");
        }
        System.out.print("| "+list.get(i).getsize());
        for (int j=0;j<(spasi_size+1)-list.get(i).getsize().length();j++){
                System.out.print(" ");
        }
        System.out.print("| "+list.get(i).getmerk());
        for (int j=0;j<(spasi_merk+1)-list.get(i).getmerk().length();j++){
                System.out.print(" ");
        }
        System.out.println("|");
}

//print atasan tabel
System.out.print("+");
for (int i =0;i<(spasi_id+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_harga+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_stok+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_nama+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_jenis+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_bahan+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_warna+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_size+2);i++){
        System.out.print("-");
}System.out.print("+");
for (int i =0;i<(spasi_merk+2);i++){
        System.out.print("-");
}System.out.println("+");

        sc.close();
        
    }
}
