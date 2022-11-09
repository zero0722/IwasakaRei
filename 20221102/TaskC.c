#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    int i;
    int rand_num[10];
    srand(time(NULL));
    
    for(i = 0;i < 10;i++){
        rand_num[i] = rand();
        printf("%d\n",rand_num[i]);
        printf("\n");
    }

    return 0;
}
