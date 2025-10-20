#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    char matrix[t+1][t+1];
    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
            scanf(" %c", &matrix[i][j]);
        }
    }
	
    int xwin = 0, owin = 0;

    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
            
			//cek X menang
			if(matrix[i][j] == 'X') {
                //horizontal
                if(j + 2 < t && matrix[i][j+1] == 'X' && matrix[i][j+2] == 'X'){
                	xwin++;	
				}
                //vertical
                if(i + 2 < t && matrix[i+1][j] == 'X' && matrix[i+2][j] == 'X'){
                	xwin++;	
				}
                //diagonal
                if(i + 2 < t && j + 2 < t && matrix[i+1][j+1] == 'X' && matrix[i+2][j+2] == 'X'){
                	xwin++;	
				}
                //diagonal
                if(i - 2 >= 0 && j + 2 < t && matrix[i-1][j+1] == 'X' && matrix[i-2][j+2] == 'X'){
                	xwin++;	
				}
            }
            //cek O menang
            else if(matrix[i][j] == 'O'){
                //horizontal
                if(j + 2 < t && matrix[i][j+1] == 'O' && matrix[i][j+2] == 'O'){
                	owin++;	
				}
                //vertical
                if(i + 2 < t && matrix[i+1][j] == 'O' && matrix[i+2][j] == 'O'){
                	owin++;	
				}
                //diagonal
                if(i + 2 < t && j + 2 < t && matrix[i+1][j+1] == 'O' && matrix[i+2][j+2] == 'O'){
                	owin++;	
				}
                //diagonal
                if(i - 2 >= 0 && j + 2 < t && matrix[i-1][j+1] == 'O' && matrix[i-2][j+2] == 'O'){
                	owin++;	
				}
            }
        }
    }

    //output 
    if(xwin == 0 && owin == 0){
        printf("Invalid\n");
	}
    else if(xwin == owin){
        printf("Draw\n");
	}
    else if(xwin > owin){
        printf("X\n");
	}
    else{
        printf("O\n");
	}

    return 0;
}

