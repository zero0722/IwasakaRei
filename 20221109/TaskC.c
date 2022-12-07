#include<stdio.h>

int main(void){
    int data[100];
    int i;
    int j;
    int n;

    int target = 50;
    int result = -1;
    int left = 0;
    int right = 100 - 1;
    int mid;

    for(i = 0;i < 100;i++)//乱数~100まで
    {
        data[i] = rand() % 100;
    }

    for (n = 0;n < 100; ++n)//ソート
    {
        for (j = 100 - 1;j >= n + 1; --j){
            int valueA = data[n];
            int valueB = data[j];

            if(valueA > valueB){
                int max = valueA;
                int min = valueB;

                data[n] = min;
                data[j] = max;

            }
        }
    }
    
    /*for(i = 0; i < 100; ++i)
    {
        printf("%d\n",data[i]);
        printf("\n");
    }*/

    while(left < right)
    {
        mid = (left + right) / 2;
        if(data[mid] == target)//targetが=mid
        {
            result = mid;
        }

        else if(data[mid] < target)//targetがmidの右側
        {
            left = mid + 1;
        }

        else//targetがmidの左側
        {
            right = mid;
        }
    }

    if(result >= 0)
    {
        printf("%dのインデックスは%dです\n",target,result);
        printf("\n");
    }

    else
    {
        printf("%dは見つかりませんでした\n",target);
    }

    return 0;
}