# T02 Control Structe

## Tugas 1 (t02_01.c, 40 points)
#1 Lipat Kertas Gambar
Deskripsi Masalah : Inneo gemar mewarnai pada selembar kertas gambar berbentuk persegi Panjang. Namun di waktu luangnya, terkadang tanpa disadari dia juga sering melipat kertas gambar yang sudah diwarnainya. Dia selalu melipat kertas pada sisi yang lebih panjang, misalnya jika dia mempunyai kertas gambar berukuran 120 × 80, maka dia akan melipat sisi dengan panjang 120, sehingga ukuran kertasnya menjadi 60×80. Pada berikutnya dia kembali melipat kertas pada sisi dengan panjang 80, sehingga sekarang ukuran kertasnya menjadi 60 × 40.

Jika diberikan sebuah kertas gambar dengan ukuran 𝑃 × 𝑄, tugas Anda adalah menentukan ukuran kertas setelah dilakukan pelipatan sebanyak 𝑀 kali. Jika panjang sisi yang akan dilipat adalah bilangan ganjil, maka hasil pelipatan adalah berupa pembulatan ke bawah. Misalnya jika ukuran panjang yang akan dilipat adalah 11, maka setelah lipatan ukuran tersebut menjadi 5. Format Masukan dan Keluaran

Baris pertama masukan adalah bilangan bulat 𝑁 yang menyatakan banyaknya kertas yang dimiliki oleh Inneo. Kemudian 𝑁 baris berikutnya masing-masing terdiri dari tiga buah bilangan positif 𝑃, 𝑄, dan 𝑀. Nilai dari 𝑃, 𝑄, 𝑀, dan 𝑁 adalah bilangan bulat serta masing-masing bernilai antara 1 sampai 10 000. Untuk setiap ukuran kertas yang diberikan, program Anda harus mengeluarkan ukuran kertas setelah dilakukan 𝑀 kali pelipatan dengan ketentuan ukuran yang lebih besar dicetak terlebih dahulu.

### Example 1
# Input
```bash
3
120 80 3
3 2 50
3 7 2
```
# Output:

```bash
40 30
0 0
3 1


```


## Tugas 2 (t02_02.c, 20 points)

# 2 Bilangan Mandiri
Deskripsi Masalah : Gema dan Astik sangat suka sekali bermain angka. Dalam permainan ini Gema akan memberikan dua bilangan bulat 𝐴 dan 𝐵 kepada Astik untuk kemudian mencari banyaknya bilangan bulat antara 2 sampai 𝐵 yang merupakan Bilangan Mandiri. Bilangan Mandiri dari (𝐴, 𝐵) didefinisikan sebagai bilangan bulat 𝑏𝑖 (2 ≤ 𝑏𝑖 ≤ 𝐵) yang bukan merupakan kelipatan dari salah satu atau lebih bilangan bulat 𝑎𝑖 (2 ≤ 𝑎𝑖 ≤ 𝐴). Sebagai contoh, jika diketahui 𝐴 = 2 dan 𝐵 = 8, maka bilangan bulat antara 2 sampai 8 yang merupakan kelipatan dari 2 adalah 2, 4, 6, dan 8. Sehingga yang merupakan Bilangan Mandiri dari (2, 8) adalah 3, 5, dan 7 yang ada sebanyak 3. Tugas Anda adalah membantu Astik dalam mencari Bilangan Mandiri dari rentang yang diberikan oleh Gema.

Format Masukan dan Keluaran : Baris pertama berisi sebuah bilangan bulat positif 𝑁 (1 ≤ 𝑁 ≤ 100) yang menunjukkan banyaknya pasangan 𝐴 dan 𝐵 yang disebutkan oleh Gema. 𝑁 baris berikutnya masing-masing berisi dua bilangan bulat 𝐴 dan 𝐵 yang dipisahkan oleh spasi dengan ketentuan 2 ≤ 𝐴 ≤ 130 dan 2 ≤ 𝐵 ≤ 1015. Untuk setiap pasangan (𝐴, 𝐵), keluarkan banyaknya Bilangan Mandiri.

### Example 1
# Input

```bash
2
2 8
3 20
```

# Output

```bash
3
6


```




## Tugas 3 (t02_03.c, 40 points)

# 3 Menghitung Banyaknya Produk Unik
Deskripri Masalah Tahukah kamu siapa nama dari maskot GemasTIK XIII 2020? Nama dari maskot tersebut adalah Galih. Pada tahun 2120, ketika para harimau di Kerajaan Dayeuhkolot memiliki kemampuan membuat algoritma dan program, Galih, bersama dua saudaranya yang lain, yaitu Galuh dan Gilang, membuat sebuah perusahaan perangkat lunak yang dinamai PT DayeuhCoder.

Setiap perangkat lunak yang dibuat oleh PT DayeuhCoder diberi nomor seri yang setiap digitnya merupakan bilangan bulat antara 0 hingga 9 (inklusif). Nomor seri ini merepresentasikan suatu bilangan bulat antara 0 hingga 1019 − 1 = 9 999 999 999 999 999 999 (inklusif, termasuk 0 dan 1019 − 1.

Galih, Galuh, dan Gilang memiliki kebiasaan yang tidak biasa pada perangkat lunak yang dibuat perusahaan mereka. Beberapa perangkat lunak yang dirilis untuk pengguna bisa jadi memiliki fitur tambahan yang unik. Pemberian fitur unik ini dijelaskan sebagai berikut. Galih, Galuh, dan Gilang memilih tiga bilangan berbeda, sebutlah 𝐴, 𝐵, dan 𝐶 dengan sifat 2 ≤ 𝐴, 𝐵, 𝐶 ≤ 1019 −

Galih memberikan fitur tambahan unik pada produk yang nomor serinya habis dibagi 𝐴 saja (namun tidak habis dibagi oleh 𝐵 maupun 𝐶), Galuh memberikan fitur tambahan unik pada produk yang nomor serinya habis dibagi 𝐵 saja (namun tidak habis dibagi oleh 𝐴 maupun 𝐶), dan Gilang memberikan fitur tambahan unik pada produk yang nomor serinya habis dibagi oleh 𝐶 saja (namun tidak habis dibagi oleh 𝐴 maupun 𝐵).
Divisi I Pemrograman – Babak Pemanasan Suatu ketika, seekor harimau bernama Galang yang tinggal di kerajaan tetangga ingin mengetahui ada berapa banyak maksimal produk dengan fitur tambahan unik untuk sekumpulan perangkat lunak yang nomor serinya di antara 𝑀𝑖𝑛 dan 𝑀𝑎𝑥 (inklusif, termasuk 𝑀𝑖𝑛 dan 𝑀𝑎𝑥 itu sendiri, dengan 𝑀𝑖𝑛 ≤ 𝑀𝑎𝑥) apabila dia juga mengetahui bilangan berbeda 𝐴, 𝐵, dan 𝐶 yang dipilih oleh Galih, Galuh, dan Gilang. Tugas Anda adalah membantu Galang untuk menyelesaikan masalah ini.

Format Masukan dan Keluaran Masukan terdiri dua baris, baris pertama adalah dua bilangan 𝑀𝑖𝑛 dan 𝑀𝑎𝑥 dengan 0 ≤ 𝑀𝑖𝑛 ≤ 𝑀𝑎𝑥 ≤ 1019 − 1 yang dipisahkan dengan spasi. Baris kedua adalah tiga bilangan berbeda 𝐴, 𝐵, dan 𝐶 dengan 2 ≤ 𝐴, 𝐵, 𝐶 ≤ 1019 − 1 dengan 𝐴 ≠ 𝐵 ≠ 𝐶 yang dipisahkan dengan spasi. Keluaran adalah banyaknya produk dengan fitur tambahan unik berdasarkan nomor serinya yang berada di antara 𝑀𝑖𝑛 dan 𝑀𝑎𝑥 (inklusif, termasuk 𝑀𝑖𝑛 dan 𝑀𝑎𝑥), sebagaimana dijelaskan pada deskripsi soal.

### Example 1:

# Input:
```bash
1 20
9 4 6
```
# Output
6
```


## Reporting

Presentasikan pekerjaan anda dalam sebuah video. Pada presentasi:
1. Definisikan tipe data yang cocok dan representatif untuk setiap properti.
2. Berikan dasar pemikiran anda mengenai usulan tipe data tersebut.
3. Jabarkan solusi anda.

**Note**: Semakin tajam argumen dan penjabaran anda semakin mudah penilaian dilakukan.

**Kriteria Video Presentasi**:
+ 1080p/30fps, min. 10 menit.
+ Suara jernih dan dapat dengan jelas terdengar.
+ Posting video anda di YouTube, di-set "Not For Kids" dengan visibility Unlisted.

## Submissions:

1. t02_01.c
2. t02_02.c
3. t02_03.c
4. changelog.txt
