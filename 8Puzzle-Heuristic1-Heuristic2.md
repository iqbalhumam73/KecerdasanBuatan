Dalam bahasan ini, fungsi heuristik yang akan kita tampilkan yaitu adalah sebagai berikut.
- h₁(n) : sebagai banyak grid yang menempati tempat yang salah.
- h₂(n) : sebagai total keseluruhan jarak tiap grid yang menempati tempat yang salah terhadap posisi grid yang benar, atau sering disebut dengan manhattan distance.

## Heuristic 1
Solusi Heuristic1 adalah banyaknya grid yang menempati posisi yang salah
langkah-langkahnya adalah :

![a](https://user-images.githubusercontent.com/52326074/77029102-58f6c180-69cd-11ea-9571-7a69fe89de7d.PNG)

Solusi : Initial State -> Right -> Up -> Right -> Down -> Down -> Left -> Up -> Right -> Down(Goal)

##Heuristic 2
Solusi Heuristic 2 adalah total keseluruhan jarak tiap grid yang menempati tempat yang salah terhadap posisi grid yang benar, atau sering disebut dengan manhattan distance.
langkah-langkahnya adalah:

![b](https://user-images.githubusercontent.com/52326074/77029181-8f344100-69cd-11ea-9799-24cda528fdd5.PNG)

Solusi : Initial State -> Right -> Up -> Right -> Down -> Down -> Left -> Up -> Right -> Up(Goal)
Penggunaan Heuristic2 lebih optimal karena pada penggunaan fungsi heuristik pertama jumlah State puzzle yang memiliki fungsi heuristik yang sama lebih banyak dari pada penggunaan fungsi heuristik kedua.
