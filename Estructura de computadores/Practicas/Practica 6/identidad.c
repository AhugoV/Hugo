#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void matriz(char m[9][9]);

int main() {
    
    char matriz[9][9] = {
        
    {1, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0, 0} 
    {0, 0, 0, 1, 0, 0, 0, 0, 0}
    {0, 0, 0, 0, 1, 0, 0, 0, 0}
    {0, 0, 0, 0, 0, 1, 0, 0, 0}
    {0, 0, 0, 0, 0, 0, 1, 0, 0}
    {0, 0, 0, 0, 0, 0, 0, 1, 0}
    {0, 0, 0, 0, 0, 0, 0, 0, 1}
        
    };
    
    matriz(matriz);
    

}

void matriz(char m[9][9]) {
    
    for (int i=0; i<9; i++){
        
        for(int j=0; j<9;j++){
            
            printf("%d\n",m[i][j]);
            
        }
        
    }
    
    
}
