#define N 8
#include <stdbool.h> 
#include <stdio.h> 
  
// fungsi untuk mencetak solusi
void printSolution(int board[N][N]){ 
    for (int i = 0; i < N; i++){ 
        for (int j = 0; j < N; j++) 
			cout << " " << board[i][j] << " "; 
        cout << endl;
    } 
} 

/*	fungsi untuk melakukn cek apakah queen bisa
	diletakkan di board[row][col]. 
*/	
bool isSafe(int board[N][N], int row, int col){ 
    int i, j; 
    // cek baris di kiri
    for (i = 0; i < col; i++) 
        if (board[row][i]) 
            return false; 

	// cek diagonal kiri atas
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) 
        if (board[i][j]) 
            return false; 
  
    // cek diagonal kiri bawah
    for (i = row, j = col; j >= 0 && i < N; i++, j--) 
        if (board[i][j]) 
            return false; 
  
    return true; 
} 
  
// fungsi rekursif untuk solve N queen
bool solveNQUtil(int board[N][N], int col){ 
    /* 	base case : ketika semua queen bisa
    	posisi, maka return true */
    if (col >= N) 
        return true; 
  
    /* mencoba meletakkan queen di setial row satu
	   satu */
    for (int i = 0; i < N; i++){ 
        /* cek apakah queen bisa diletakkan*/
        if (isSafe(board, i, col)) { 
            /* Meletakkan queen di board[i][col]*/
            board[i][col] = 1; 
  
            /* perulangan untuk meletakkan sisa queen */
            if (solveNQUtil(board, col + 1)) 
                return true; 
  
            /* 	apabila queen yang diletakkan tidak 
				merupakan solusi, queen dihapus */
            board[i][col] = 0;
        } 
    } 
  
    /* 	jika tidak ada queen yang bisa diletakkan di
		row ini, return false */
    return false; 
} 

/*	fungsi untuk solve problem dengan backtracking.
	jika tidak ada yang bisa, return false. jika bisa
	return true dan juga melakukan print hasilnya */
bool solveNQ(){ 
    int board[N][N] = { { 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0 } }; 
  
    if (solveNQUtil(board, 0) == false){  
        cout << "Solusi tidak ada"
        return false; 
    } 
  
    printSolution(board); 
    return true; 
} 
  
// fungsi main untuk menjalankan fungsi yang di atas
int main(){ 
    solveNQ(); 
    return 0; 
} 
