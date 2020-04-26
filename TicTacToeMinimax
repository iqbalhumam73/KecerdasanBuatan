Minimax adalah semacam algoritma backtracking yang digunakan dalam pengambilan keputusan dan teori permainan untuk menemukan langkah optimal bagi pemain, dengan asumsi bahwa lawan Anda juga bermain secara optimal. Ini banyak digunakan dalam dua permainan berbasis giliran pemain seperti Tic-Tac-Toe, Backgammon, Mancala, Catur, dll.

Di Minimax kedua pemain disebut maximizer dan minimizer. Maximizer mencoba untuk mendapatkan skor setinggi mungkin sementara minimizer mencoba melakukan yang sebaliknya dan mendapatkan skor serendah mungkin.

Setiap board state memiliki nilai yang terkait dengannya. Dalam keadaan tertentu jika maximizer lebih unggul, skor pada board akan cenderung bernilai positif. Jika minimizer berada di lebih unggul di papan itu maka akan cenderung menjadi nilai negatif. Nilai-nilai papan dihitung oleh beberapa heuristik yang unik untuk setiap jenis permainan.

Contoh Implementasi :

![a](https://media.geeksforgeeks.org/wp-content/uploads/TIC_TAC.jpg)

Gambar ini menggambarkan semua jalur yang mungkin bisa diambil oleh game dari state board root. Ini sering disebut Game Tree. 3 skenario yang mungkin dalam contoh di atas adalah:

- Pindah ke Kiri: Jika X memainkan [2,0]. Maka O akan bermain [2,1] dan memenangkan permainan. Nilai langkah ini adalah -10
- Gerakan Tengah: Jika X memainkan [2,1]. Kemudian O akan memainkan [2,2] yang menarik permainan. Nilai langkah ini adalah 0
- Pindah Kanan: Jika X memainkan [2,2]. Maka dia akan memenangkan pertandingan. Nilai langkah ini adalah +10;
Ingat, meskipun X memiliki kemungkinan menang jika dia memainkan langkah tengah, O tidak akan pernah membiarkan itu terjadi dan akan memilih untuk menggambar. Oleh karena itu pilihan terbaik untuk X, adalah bermain [2,2], yang akan menjamin kemenangan baginya.
