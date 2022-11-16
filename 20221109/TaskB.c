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
        printf("%d\n",data[r]);
    }
    
    for (i = 0;i < data.size; ++i)
    {
        for (j = data.size - 1;j >= i){
            valueA = data[i];
            valueB = data[j]:

            if(valueA > valueB){
                max = valueA;
                min = valueB;

                data[i] = min;
                data[j] = max;
            }



        }
        
    }
    
    return 0;
}