//Fisier de inmultire a doua matrice patratice
#include <stdio.h>
#include <stdlib.h>
#define MAX 1005

void inm(int a[][MAX], int b[][MAX], int c[][MAX], int n);
int a[MAX][MAX], b[MAX][MAX], rez[MAX][MAX] = {0}, n=1000, i, j;
int main(){
	//freopen("in", "r", stdin);
	
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
		
		a[i][j]=rand() % 100;
		}
		
	}
	//printf("*****************************\n");
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
		
		b[i][j]=rand() % 100;
		//printf("%d ",b[i][j]);
		}
		
	}
	//printf("*****************************\n");
	inm(a, b, rez, n);
	/*for(i = 0; i < n; i++){
		for(j = 0; j < n; j++)
			printf("%d ", rez[i][j]);
		printf("\n");
	}*/
	return 0;
}

void inm(int a[][MAX], int b[][MAX], int c[][MAX], int n){
	int i, j, k;

	/*for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			for(k = 0; k < n; k++)
				c[i][j] += a[i][k] * b[k][j];
				*/
				
    int Bcolj[n];
    for (j = 0; j < n; j++)
    {
        for (k = 0; k < n; k++)
            Bcolj[k] = b[k][j];

        for (i = 0; i < n; i++)
        {
            int s = 0;
            for (k = 0; k < n; k++)
                s += a[i][k] * Bcolj[k];
            c[j][i] = s;
        }
   }
   //fonte: https://stackoverflow.com/questions/13312625/cache-friendly-method-to-multiply-two-matrices				
}
