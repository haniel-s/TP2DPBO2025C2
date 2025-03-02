from Baju import Baju

def main():
    listb = []

    # Objek awal 1
    baju1 = Baju(size="XXL", merk="Adidas", jenis="cotton", bahan="cotton", warna="hitam", id=1, harga_produk=15000, stok_produk=21, nama_produk="Sweater_Adidas")
    listb.append(baju1)

    # Objek awal 2
    baju2 = Baju(size="XL", merk="Nike", jenis="polyester", bahan="polyester", warna="biru", id=2, harga_produk=20000, stok_produk=115, nama_produk="Jaket")
    listb.append(baju2)

    # Objek awal 3
    baju3 = Baju(size="L", merk="Puma", jenis="katun", bahan="katun", warna="putih", id=3, harga_produk=10000, stok_produk=305, nama_produk="Kaos")
    listb.append(baju3)

    # Objek awal 4
    baju4 = Baju(size="M", merk="Reebok", jenis="fleece", bahan="fleece", warna="abu-abu", id=4, harga_produk=25000, stok_produk=102, nama_produk="Hoodie")
    listb.append(baju4)

    # Objek awal 5
    baju5 = Baju(size="L", merk="Under_Armour", jenis="spandex", bahan="spandex", warna="hitam", id=5, harga_produk=22000, stok_produk=138, nama_produk="Celana_Trainer")
    listb.append(baju5)

    # Hitung spasi untuk tabel
    spasi_id = max(len(str(b.get_id())) for b in listb)
    spasi_harga = max(len(str(b.get_harga())) for b in listb)
    spasi_stok = max(len(str(b.get_stok())) for b in listb)
    spasi_nama = max(len(b.get_nama()) for b in listb)
    spasi_jenis = max(len(b.get_jenis()) for b in listb)
    spasi_bahan = max(len(b.get_bahan()) for b in listb)
    spasi_warna = max(len(b.get_warna()) for b in listb)
    spasi_size = max(len(b.get_size()) for b in listb)
    spasi_merk = max(len(b.get_merk()) for b in listb)

    # Print tabel
    def print_line():
        print("+" + "-" * (spasi_id + 2) + "+" + "-" * (spasi_harga + 2) + "+" + "-" * (spasi_stok + 2) + "+" +
              "-" * (spasi_nama + 2) + "+" + "-" * (spasi_jenis + 2) + "+" + "-" * (spasi_bahan + 2) + "+" +
              "-" * (spasi_warna + 2) + "+" + "-" * (spasi_size + 2) + "+" + "-" * (spasi_merk + 2) + "+")

    print_line()
    print(f"| {'ID':<{spasi_id}} | {'harga':<{spasi_harga}} | {'stok':<{spasi_stok}} | {'nama':<{spasi_nama}} | "
          f"{'jenis':<{spasi_jenis}} | {'bahan':<{spasi_bahan}} | {'warna':<{spasi_warna}} | {'size':<{spasi_size}} | "
          f"{'merk':<{spasi_merk}} |")
    print_line()

    for b in listb:
        print(f"| {b.get_id():<{spasi_id}} | {b.get_harga():<{spasi_harga}} | {b.get_stok():<{spasi_stok}} | "
              f"{b.get_nama():<{spasi_nama}} | {b.get_jenis():<{spasi_jenis}} | {b.get_bahan():<{spasi_bahan}} | "
              f"{b.get_warna():<{spasi_warna}} | {b.get_size():<{spasi_size}} | {b.get_merk():<{spasi_merk}} |")
    print_line()

    # Tambah data baru
    add = input("add ?[y/n]: ")
    if add.lower() == 'y':
        id = int(input("Masukkan id: "))
        nama_produk = input("Masukkan nama_produk: ")
        stok_produk = int(input("Masukkan stok_produk: "))
        harga_produk = int(input("Masukkan harga_produk: "))
        jenis = input("Masukkan jenis: ")
        bahan = input("Masukkan bahan: ")
        warna = input("Masukkan warna: ")
        size = input("Masukkan size: ")
        merk = input("Masukkan merk: ")

        baju_baru = Baju(size=size, merk=merk, jenis=jenis, bahan=bahan, warna=warna, id=id, harga_produk=harga_produk, stok_produk=stok_produk, nama_produk=nama_produk)
        listb.append(baju_baru)

        # Print tabel setelah penambahan data
        print_line()
        print(f"| {'ID':<{spasi_id}} | {'harga':<{spasi_harga}} | {'stok':<{spasi_stok}} | {'nama':<{spasi_nama}} | "
              f"{'jenis':<{spasi_jenis}} | {'bahan':<{spasi_bahan}} | {'warna':<{spasi_warna}} | {'size':<{spasi_size}} | "
              f"{'merk':<{spasi_merk}} |")
        print_line()

        for b in listb:
            print(f"| {b.get_id():<{spasi_id}} | {b.get_harga():<{spasi_harga}} | {b.get_stok():<{spasi_stok}} | "
                  f"{b.get_nama():<{spasi_nama}} | {b.get_jenis():<{spasi_jenis}} | {b.get_bahan():<{spasi_bahan}} | "
                  f"{b.get_warna():<{spasi_warna}} | {b.get_size():<{spasi_size}} | {b.get_merk():<{spasi_merk}} |")
        print_line()

if __name__ == "__main__":
    main()