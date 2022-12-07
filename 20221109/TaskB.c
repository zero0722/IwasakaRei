#include<stdio.h>

int main(void)
{
    int data[100];
    int i;
    int j;
    int r;

    for (r = 0;r < 100;r++)
    {
        data[r] = rand();
    }
    
    for (i = 0;i < 100; ++i)
    {
        for (j = 100 - 1;j >= i + 1; --j){
            int valueA = data[i];
            int valueB = data[j];

            if(valueA > valueB){
                int max = valueA;
                int min = valueB;

                data[i] = min;
                data[j] = max;

            }
        }
    }


    for(i = 0; i < 100; ++i)
    {
        printf("%d\n",data[i]);
        printf("\n");

    }

    return 0;
}