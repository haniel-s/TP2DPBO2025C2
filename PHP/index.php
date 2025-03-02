<?php
require('baju.php');

$listb = [];

$temp = new Baju();

// Objek awal 1
$id = 1;
$nama_produk = "Sweater_Adidas";
$stok_produk = 21;
$harga_produk = 15000;
$jenis = "cotton";
$bahan = "cotton";
$warna = "hitam";
$size = "XXL";
$merk = "Adidas";
$foto = "adidas.png";

$temp->setid($id);
$temp->setharga($harga_produk);
$temp->setstok($stok_produk);
$temp->setnama($nama_produk);
$temp->setjenis($jenis);
$temp->setbahan($bahan);
$temp->setwarna($warna);
$temp->setsize($size);
$temp->setmerk($merk);
$temp->setfoto($foto);
$listb[] = clone $temp;

// Objek awal 2
$id = 2;
$nama_produk = "Jaket";
$stok_produk = 115;
$harga_produk = 20000;
$jenis = "polyester";
$bahan = "polyester";
$warna = "biru";
$size = "XL";
$merk = "Nike";
$foto = "nike.png";

$temp->setid($id);
$temp->setharga($harga_produk);
$temp->setstok($stok_produk);
$temp->setnama($nama_produk);
$temp->setjenis($jenis);
$temp->setbahan($bahan);
$temp->setwarna($warna);
$temp->setsize($size);
$temp->setmerk($merk);
$temp->setfoto($foto);
$listb[] = clone $temp;

// Objek awal 3
$id = 3;
$nama_produk = "Kaos";
$stok_produk = 305;
$harga_produk = 10000;
$jenis = "katun";
$bahan = "katun";
$warna = "putih";
$size = "L";
$merk = "Puma";
$foto = "puma.png";
$temp->setid($id);
$temp->setharga($harga_produk);
$temp->setstok($stok_produk);
$temp->setnama($nama_produk);
$temp->setjenis($jenis);
$temp->setbahan($bahan);
$temp->setwarna($warna);
$temp->setsize($size);
$temp->setmerk($merk);
$temp->setfoto($foto);
$listb[] = clone $temp;

// Objek awal 4
$id = 4;
$nama_produk = "Hoodie";
$stok_produk = 102;
$harga_produk = 25000;
$jenis = "fleece";
$bahan = "fleece";
$warna = "abu-abu";
$size = "M";
$merk = "Reebok";
$foto = "reebok.png";
$temp->setid($id);
$temp->setharga($harga_produk);
$temp->setstok($stok_produk);
$temp->setnama($nama_produk);
$temp->setjenis($jenis);
$temp->setbahan($bahan);
$temp->setwarna($warna);
$temp->setsize($size);
$temp->setmerk($merk);
$temp->setfoto($foto);
$listb[] = clone $temp;

// Objek awal 5
$id = 5;
$nama_produk = "Celana_Trainer";
$stok_produk = 138;
$harga_produk = 22000;
$jenis = "spandex";
$bahan = "spandex";
$warna = "hitam";
$size = "L";
$merk = "Under_Armour";
$foto = "armour.png";
$temp->setid($id);
$temp->setharga($harga_produk);
$temp->setstok($stok_produk);
$temp->setnama($nama_produk);
$temp->setjenis($jenis);
$temp->setbahan($bahan);
$temp->setwarna($warna);
$temp->setsize($size);
$temp->setmerk($merk);
$temp->setfoto($foto);
$listb[] = clone $temp;

// add user
$id = 5;
$nama_produk = "kaos_kutang";
$stok_produk = 138;
$harga_produk = 22000;
$jenis = "satin";
$bahan = "satin";
$warna = "hitam";
$size = "XS";
$merk = "swallow";
$foto = "swallow.png";
$temp->setid($id);
$temp->setharga($harga_produk);
$temp->setstok($stok_produk);
$temp->setnama($nama_produk);
$temp->setjenis($jenis);
$temp->setbahan($bahan);
$temp->setwarna($warna);
$temp->setsize($size);
$temp->setmerk($merk);
$temp->setfoto($foto);
$listb[] = clone $temp;

?>


<!-- 1. Menampilkan data -->
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Data Petshop</title>
    <style>
        table {
            border-collapse: collapse;
            width: 80%;
            margin: 20px auto;
        }
        th, td {
            border: 1px solid #dddddd;
            text-align: center;
            padding: 8px;
        }
        th {
            background-color: #f2f2f2;
        }
        img {
            width: 95px;
            height: auto;
        }
    </style>
</head>
<body>
    <h2 style="text-align:center;">Data Baju</h2>
    <table>
        <tr>
            <th>ID</th>
            <th>Nama</th>
            <th>Stok</th>
            <th>Harga</th>
            <th>Foto</th>
            <th>Jenis</th>
            <th>Bahan</th>
            <th>Warna</th>
            <th>Size</th>
            <th>Merk</th>
        </tr>
        <?php foreach ($listb as $baju) { ?>
            ?>
            <tr>
    <td><?php echo htmlspecialchars($baju->getid()); ?></td>
    <td><?php echo htmlspecialchars($baju->getnama()); ?></td>
    <td><?php echo htmlspecialchars($baju->getstok()); ?></td>
    <td><?php echo htmlspecialchars($baju->getharga()); ?></td>
    <td><img src="<?php echo htmlspecialchars($baju->getfoto()); ?>" alt="<?php echo htmlspecialchars($baju->getnama()); ?>"></td>
    <td><?php echo htmlspecialchars($baju->getjenis()); ?></td>
    <td><?php echo htmlspecialchars($baju->getbahan()); ?></td>
    <td><?php echo htmlspecialchars($baju->getwarna()); ?></td>
    <td><?php echo htmlspecialchars($baju->getsize()); ?></td>
    <td><?php echo htmlspecialchars($baju->getmerk()); ?></td>
</tr>

        <?php } ?>

    </table>


</body>
</html>
