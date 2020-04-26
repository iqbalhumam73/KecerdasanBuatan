Pengerjaan problem 8 Puzzle ini juga bisa dilakukan dengan metode DFS (depth first search),
dimana dalam pencariannya memungkinkan untuk pencarian degan bergerak mundur.
Maksud dari bergerak mundur ini menginisiasi state yang sudah dilintasi sebelumnya. namun dalam implementasinya ditambahkan limit dalam pencarian statenya yang dilakukan bertahap dari iterasi 0 hingga mencapai goal yang ditentukan.

IDS digunakan ketika Anda memiliki agen yang diarahkan pada tujuan dalam ruang pencarian yang tak terbatas (atau pohon pencarian).

Mengapa Breadth First Search (BFS) dan Depth First Search (DFS) gagal dalam kasus ruang pencarian yang tak terbatas?

Di DFS, Anda akan melihat secara verteks simpul yang berdekatan. DFS mungkin tidak berakhir di ruang pencarian yang tak terbatas. Juga, DFS mungkin tidak menemukan jalur terpendek ke tujuan. DFS membutuhkan O (d) ruang, di mana d adalah kedalaman pencarian.

BFS mengkonsumsi terlalu banyak memori. BFS perlu menyimpan semua elemen di level yang sama. Dalam kasus tree, level terakhir memiliki simpul daun N / 2, level terakhir kedua memiliki N / 4. Jadi, BFS membutuhkan ruang O (N). Pencarian mendalam mendalam berulang Iterative (IDDFS) adalah hibrida dari BFS dan DFS. Dalam IDDFS, kami melakukan DFS hingga "limited depth" tertentu, dan terus meningkatkan "limited depth" ini setelah setiap iterasi.

![Image-2](https://raw.githubusercontent.com/Asmophel/Kecerdasan-Buatan-F/master/Gambar/498px-Graph.traversal.example.svg.png)

Dfs dimulai pada A, dengan asumsi bahwa tepi kiri dalam grafik yang ditunjukkan dipilih sebelum tepi kanan, dan dengan asumsi pencarian mengingat node yang dikunjungi sebelumnya dan tidak akan mengulanginya (karena ini adalah grafik kecil), akan mengunjungi node dalam urutan berikut: A, B, D, F, E, C, G. Tepi yang dilalui dalam bentuk pencarian ini adalah pohon Trémaux, struktur dengan aplikasi penting dalam teori grafik.

Melakukan pencarian yang sama tanpa mengingat node yang dikunjungi sebelumnya menghasilkan node mengunjungi dalam urutan A, B, D, F, E, A, B, D, F, E, dll selamanya, terperangkap dalam A, B, D, F , E cycle dan tidak pernah mencapai C atau G.

IDS mencegah loop ini dan akan mencapai node berikut pada kedalaman berikut, dengan asumsi itu melanjutkan dari kiri ke kanan seperti di atas:

0: A 1: A, B, C, E (IDS sekarang telah melihat C, ketika pencarian depth-first konvensional tidak.)

2: A, B, D, F, C, G, E, F (Masih melihat C, tetapi itu datang kemudian. Juga ia melihat E melalui jalur yang berbeda, dan kembali ke F dua kali.)

3: A, B, D, F, E, C, G, E, F, B Untuk grafik ini, karena lebih banyak kedalaman ditambahkan, dua siklus "ABFE" dan "AEFB" hanya akan menjadi lebih lama sebelum algoritma menyerah dan mencoba cabang lain.
