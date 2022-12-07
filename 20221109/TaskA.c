#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int data[11] = {0,1,2,3,4,5,6,7,8,9,10};
    int result = -1;
    int target = 5;



    void shuffle(int array[], int size)
    {
        int i, j;
        int tmp;

        for(i = 0; i < size; i++){
            j = rand() % size;
            tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;

        }

    }

    shuffle(data,11);
    for (int i = 0; i <= 10; i++)
    {
        printf("%d\n",data[i]);
        
        if(data[i] == target)
        {
            result = i;
            printf("%dのインデックスは%dです。\n",target,result);
            break;
        }
        
        printf("\n");
        

    }

    

    return 0;
}