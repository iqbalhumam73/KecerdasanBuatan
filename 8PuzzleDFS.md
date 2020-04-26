Pengerjaan problem 8 Puzzle ini juga bisa dilakukan dengan metode DFS (depth first search),
dimana dalam pencariannya memungkinkan untuk pencarian degan bergerak mundur.
Maksud dari bergerak mundur ini menginisiasi state yang sudah dilintasi sebelumnya

Algoritma DFS Depth First Search adalah algoritma rekursif yang menggunakan gagasan backtracking.
Ini melibatkan pencarian lengkap dari semua node dengan melanjutkan, jika mungkin, dengan mundur.
Depth First Search Menggunakan struktur data stack sebagai lawan dari queue yang digunakan Breadth First Search.

Di sini, kata mundur berarti bahwa ketika pencarian bergerak maju dan tidak ada lagi node di sepanjang jalur saat ini,
pencarian bergerak mundur di jalur yang sama untuk menemukan node untuk dilintasi.
Semua node akan dikunjungi di jalur saat ini sampai semua node yang belum dikunjungi telah dilalui setelah jalur
berikutnya akan dipilih. Sifat rekursif DFS ini dapat diimplementasikan menggunakan tumpukan.
Ide dari DFS adalah sebagai berikut 
-Pilih simpul awal dan dorong semua simpul yang berdekatan ke tumpukan.
-Pop sebuah node dari stack untuk memilih node berikutnya untuk mengunjungi dan mendorong semua node yang berdekatan ke dalam stack.
-Ulangi proses ini sampai tumpukan kosong. Namun, pastikan bahwa node yang dikunjungi ditandai. Ini akan mencegah Anda mengunjungi simpul yang sama lebih dari sekali. Jika Anda tidak menandai node yang dikunjungi dan Anda mengunjungi node yang sama lebih dari sekali, Anda mungkin berakhir dalam loop tak terbatas.
