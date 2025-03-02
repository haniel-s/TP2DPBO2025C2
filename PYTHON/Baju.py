from Aksesoris import Aksesoris 

class Baju(Aksesoris):
    def __init__(self, size="", merk="", jenis="", bahan="", warna="", id=0, harga_produk=0, stok_produk=0, nama_produk=""):
        Aksesoris.__init__(self, jenis, bahan, warna, id, harga_produk, stok_produk, nama_produk)
        self.size = size
        self.merk = merk

    def get_size(self):
        return self.size

    def set_size(self, size):
        self.size = size

    def get_merk(self):
        return self.merk

    def set_merk(self, merk):
        self.merk = merk

    def __del__(self):
        pass