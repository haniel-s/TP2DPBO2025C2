class Petshop:
    id = ""
    harga_produk = ""
    stok_produk = ""
    nama_produk = 0
    def __init__(self, id=0, harga_produk=0, stok_produk=0, nama_produk=""):
        self.id = id
        self.harga_produk = harga_produk
        self.stok_produk = stok_produk
        self.nama_produk = nama_produk

    def get_id(self):
        return self.id

    def set_id(self, id):
        self.id = id

    def get_harga(self):
        return self.harga_produk

    def set_harga(self, harga_produk):
        self.harga_produk = harga_produk

    def get_stok(self):
        return self.stok_produk

    def set_stok(self, stok_produk):
        self.stok_produk = stok_produk

    def get_nama(self):
        return self.nama_produk

    def set_nama(self, nama_produk):
        self.nama_produk = nama_produk
