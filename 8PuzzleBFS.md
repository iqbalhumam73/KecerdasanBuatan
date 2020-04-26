Dalam program ini, melakukan pencarian state yang benar untuk menyelesaikan 8 puzzle dengan metode BFS. yaitu dengan
memasukan elemen terlebih dahulu kemudian melakukan pencarian dengan BFS. Pencarian menggunakan metode BFS dilakukan
dengan memperlkuas jangkauan yaitu pencariannya dimulai dari parent kemudian ke child, namun child tidak terus2an ke
childnya lagi, melainkan ke child di sebelahnya.

BFS (Breadth First Search) adalah strategi sederhana di mana simpul akar diperluas terlebih dahulu, kemudian 
semua penerus simpul akar diperluas selanjutnya, kemudian penerusnya dan seterusnya sampai jalan terbaik yang 
mungkin telah ditemukan. Karena kenyataan bahwa strategi untuk grafik traversal ini tidak memiliki informasi 
tambahan tentang status di luar yang disediakan dalam definisi masalah, Breadth First Search digolongkan sebagai 
pencarian yang kurang informasi atau blind.
Breadth First Search Menggunakan struktur data queue sebagai lawan dari stack yang digunakan Depth First Search.
BFS menggunakan struktur data antrian yang merupakan struktur data First In, First Out atau FIFO.
Antrian ini menyimpan semua node yang harus kita jelajahi dan setiap kali sebuah node dieksplorasi ditambahkan
ke set node yang dikunjungi. Jika dilakukan pencarian luas pertama di pohon biner di atas maka itu akan 
melakukan hal berikut:
