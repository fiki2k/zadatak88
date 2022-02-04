#include<stdio.h>

//Zbrojiti elemente glavne dijagonale matrice velicine 5x5.

int main()
{
    int M[5][5];
    int i;
    int j;
    int suma = 0;
	
    printf("Unesi elemente matrice:\n");
    //Unosimo elemente u matricu.
    
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &M[i][j]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        suma = suma + M[i][i];
    }
    
    printf("\nSuma elemenata glavne dijagonale je = %d", suma);

    return 0;
}
