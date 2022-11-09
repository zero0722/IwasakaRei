#include<stdio.h>

int main(void)
{
    int i;
    
    for(i = 1; i<= 100; i=i+1)
    {
        if((i%3)==0) 
        {
            if((i%5)==0) //3の倍数かつ5の倍数なら
            {
                printf("Fizz Buzz\n", i); //「Fizz Bizz」と出力する。
            }
            else //3の倍数だが5の倍数ではない場合
            {
                printf("Fizz\n", i); //「Fizz」と出力する
            }
        }
        else if((i%5)==0) //5の倍数だが3の倍数ではない場合
        {
            printf("Buzz\n", i); //「Bizz」と出力する。
        }
        
        else //それら以外の場合
        {
            printf("%d\n", i); //数字を出力する。
        }

        printf("\n");
    }

    return 0;
}