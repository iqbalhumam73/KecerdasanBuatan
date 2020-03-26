#PENJELASAN SOURCE CODE 8 QUEEN

Pengerjaan soal 8 Queen ini menggunakan metode METODE APA YA LUPA NAMANYA, untuk menjelaskan lebih lanjut mengenai implementasi dari metode ini, akan dijelaskan di bawah.

### Fungsi int main
Pada funsgi main yang saya tulis di bawah ini, dilakukan deklarasi board catur yang akan kita pakai. Board catur berupa array dua dimensi berukuran  N * N 
```
int board[N][N];
```
yang kemudian kita set menjadi nol dengan bantuan fungsi ``` memset ``` 
```
memset(board, 0, sizeof(board));
```
Setelah array diset menjadi nol semua, fungsi solveNQUtil dipanggil, apabila fungsi ini mereturn nilai false, berarti solusi tidak ditemukan
```
if (solveNQUtil(board, 0) == false){
        cout << "Solusi tidak ada";
        return 0; 
    }
```
namun apabila fungsi ini mengembalikan nilai true, berarti solusi ditemukan dan selanjutnya akan diprint dengan bantuan dengan looping yang ada
```
for (int i = 0; i < N; i++){ 
        for (int j = 0; j < N; j++){
			cout << " " << board[i][j] << " ";
		}
        cout << endl;
    } 
```
Berikut adalah Sourcecode int main secara lengkap :
```
int main(){ 
    int board[N][N]; 
    memset(board, 0, sizeof(board));
    if (solveNQUtil(board, 0) == false){
        cout << "Solusi tidak ada";
        return 0; 
    } 
    for (int i = 0; i < N; i++){ 
        for (int j = 0; j < N; j++){
			cout << " " << board[i][j] << " ";
		}
        cout << endl;
    } 
    return 0; 
} 
```

### Fungsi solveNQUtil
Fungsi solveNQUtil ini merupakan program rekursif yang berguna untuk meletakkan queen. Di fungsi ini, terdapat base case yaitu 
```
if (col >= N){
        return true;
	}
```
yang berarti apabila queen sudah mencapai jumlah yang diinginkan (N), fungsi ini akan mereturn true yang berarti solusi ditemukan dan selanjutnya akan diprint solusinya di fungsi main.

Apabila base case belum terpenuhi, fungsi ini akan menjalankan looping for yang di dalamnya memanggil suatu fungsi bernama isSafe yang kegunaanya akan dijelaskan di bawah. Apabila fungsi isSafe mereturn true, berarti posisi tersebut aman dan kemudian elemen array diganti menjadi 1. kemudian rekursif dilakukan dengan memanggil fungsi solveNQUtil lagi, namun col nya diubah menjadi col+1. Col disini sebagai counter jumlah ratu yang sudah ditemukan dan juga sebagai penanda kolom.

Pada rekursif ini, apabila fungsi solveNQUtil ini berhasil terakhir mereturn true, maka saat kembali fungsi-fungsi ini akan mereturn true semua yang berarti solusi ditemukan.
```
if (isSafe(board, i, col)==1) {
            board[i][col] = 1;
            if (solveNQUtil(board, col+1)==1) return true;
```
Namun, apabila sampai akhir tidak ditemukan solusi, fungsi ini akan mereturn false, dan selanjutnya fungsi-fungsi solveNQUtil yang sebelumnya akan menghapus queen yang sudah ditemukan sebelumnya yang berarti tidak ditemukan solusi. Jadi apabila solusi tidak ditemukan, board berisi nol semua sama seperti semula
```
board[i][col] = 0;
        }
    } 
    return false; 
} 
```
Berikut adalah fungsi solveNQUtil secara lengkap :
```
bool solveNQUtil(int board[N][N], int col){
    if (col >= N){
        return true;
	}
    for (int i = 0; i < N; i++){
        if (isSafe(board, i, col)==1) {
            board[i][col] = 1;
            if (solveNQUtil(board, col+1)==1) return true;
            board[i][col] = 0;
        }
    } 
    return false; 
} 
```

### Fungsi isSafe
Fungsi isSafe adalah fungsi untuk menentukan apakah suatu tempat di board aman atau tidak untuk ditempati oleh ratu. Setiap index yang dimasukkan ke fungsi isSafe dicek kiri, kanan, atas, bawah, diagonal atas kiri, diagonal atas kanan, diagonal bawah kiri, diagonal bawah kanan karena itu lah cara gerak queen pada permainan catur. Pengecekannya adalah apabila di jalur yang ditentukan ada nilai 1 atau yang berarti ada ratu, maka posisi itu sudah tidak aman dan return false.

1. Pengecekkan di kiri, looping dari index ke 0 sampai indeks index sebelum kolom atau koordinat Y yang sekarang
```
for (i = 0; i < col; i++){
        if (board[row][i]==1){
            return false;
		}
	}
```
2. Pengecekakn di kanan, looping dari index y+1 sampai index paling kanan (N-1) atau <N
```
for (i = col+1; i < N; i++){
        if (board[row][i]==1){
            return false;
		}
	}
```
3. Pengecekan di atas, looping dari index ke 0 sampai indeks index sebelum baris atau koordinat X yang sekarang
```
for (i = 0; i < row; i++){
        if (board[i][col]==1){
            return false;
		}
	}
```
4. Pengecekakn di bawah, looping dari index y+1 sampai index paling bawah (N-1) atau <N
```
for (i = row+1; i < N; i++){
        if (board[i][col]==1){
            return false;
		}
	}
```
5. Pengecekan diagonal kiri atas, batas-batasnya sama seperti sebelumnya
```
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--){
        if (board[i][j]==1){
            return false;
        }
	}
```
6. Pengecekan diagonal kanan atas, batas-batasnya sama seperti sebelumnya
```
for (i = row, j = col; j >= 0 && i < N; i++, j--) 
        if (board[i][j]==1){
            return false;
		} 
```
7. Pengecekan diagonal kiri bawah, batas-batasnya sama seperti sebelumnya
```
    for (i = row, j = col; j < N && i >= 0; i--, j++) 
        if (board[i][j]==1){
            return false; 
		} 
```
		
8. Pengecekan diagonal kanan bawah, batas-batasnya sama seperti sebelumnya
```
    for (i = row, j = col; j < 0 && i < N; i++, j++) 
        if (board[i][j]==1){
            return false; 
		} 
```
Dan apabila 8 syarat tersebut tidak terpenuhi, maka fungsi isSafe mereturn nilai true.
Berikut adalah fungsi isSafe secara keseluruham :
```
bool isSafe(int board[N][N], int row, int col){ 
    int i, j;
    for (i = 0; i < col; i++){
        if (board[row][i]==1){
            return false;
		}
	}
    for (i = col+1; i < N; i++){
        if (board[row][i]==1){
            return false;
		}
	}
    for (i = 0; i < row; i++){
        if (board[i][col]==1){
            return false;
		}
	}
    for (i = row+1; i < N; i++){
        if (board[i][col]==1){
            return false;
		}
	}
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--){
        if (board[i][j]==1){
            return false;
        }
	}
    for (i = row, j = col; j >= 0 && i < N; i++, j--) 
        if (board[i][j]==1){
            return false;
		} 
    for (i = row, j = col; j < N && i >= 0; i--, j++) 
        if (board[i][j]==1){
            return false; 
		} 
    for (i = row, j = col; j < 0 && i < N; i++, j++) 
        if (board[i][j]==1){
            return false; 
		} 
    return true; 
} 
```

Program ini dapat bekerja di semua nilai N, tidak hanya di 8 Queen. Apabila jumlah queen mau diubah, maka pada sourcecode tinggal diubah nilai N nya.
Berikut adalah SourceCode 8 Queen secara lengkap :
### Source Code
```
#define N 8
#include <stdbool.h> 
#include <string.h>
#include <iostream>
using namespace std; 

bool isSafe(int board[N][N], int row, int col){ 
    int i, j;
    
    for (i = 0; i < col; i++){
        if (board[row][i]==1){
            return false;
		}
	}
	
    for (i = col+1; i < N; i++){
        if (board[row][i]==1){
            return false;
		}
	}
	
    for (i = 0; i < row; i++){
        if (board[i][col]==1){
            return false;
		}
	}
	
    for (i = row+1; i < N; i++){
        if (board[i][col]==1){
            return false;
		}
	}
	
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--){
        if (board[i][j]==1){
            return false;
        }
	}
  
    for (i = row, j = col; j >= 0 && i < N; i++, j--) 
        if (board[i][j]==1){
            return false;
		} 
		
    for (i = row, j = col; j < N && i >= 0; i--, j++) 
        if (board[i][j]==1){
            return false; 
		}
        
    for (i = row, j = col; j < 0 && i < N; i++, j++) 
        if (board[i][j]==1){
            return false; 
		} 

    return true; 
} 

bool solveNQUtil(int board[N][N], int col){ 
    if (col >= N){
        return true;
	}
    for (int i = 0; i < N; i++){
        if (isSafe(board, i, col)==1) {
            board[i][col] = 1;
            if (solveNQUtil(board, col+1)==1) return true;
            board[i][col] = 0;
        }
    } 
} 

int main(){ 
    int board[N][N]; 
    memset(board, 0, sizeof(board));
    if (solveNQUtil(board, 0) == false){
        cout << "Solusi tidak ada";
        return 0; 
    } 
    for (int i = 0; i < N; i++){ 
        for (int j = 0; j < N; j++){
			cout << " " << board[i][j] << " ";
		}
        cout << endl;
    } 
    return 0; 
} 
```
