#include <stdio.h>

int main() {
    int N, X, Y;  
    scanf("%d %d %d", &N, &X, &Y); //size board, number of words, length of each word

    //input board
    char board[N+1][N+1];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf(" %c", &board[i][j]); 
        }
    }

    //input word list
    char word[X][Y + 1];
    for(int i = 0; i < X; i++){
        scanf("%s", word[i]);
    }

    //8 arah (x, y)
    int dx[8] = {0, 0, 1, -1, 1, 1, -1, -1};
    int dy[8] = {1, -1, 0, 0, 1, -1, 1, -1};

    //cek every word
    for(int w = 0; w < X; w++){
        int count = 0;

        for(int i = 0; i < N; i++){
            for (int j = 0; j < N; j++) {

                if(board[i][j] == word[w][0]){ //same first letter

                    //try 8 directions
                    for(int d = 0; d < 8; d++){
                        int match = 1;

                        for(int k = 1; k < Y; k++){
                            int ni = i + dx[d] * k; //new row
                            int nj = j + dy[d] * k; //new column

                            if(ni < 0 || ni >= N || nj < 0 || nj >= N || board[ni][nj] != word[w][k]){
                                match = 0;
                                break;
                            }
                        }
                        if(match == 1){
                        	count++;	
						}
                    }
                }
            }
        }

        printf("%s %d\n", word[w], count);
    }

    return 0;
}

