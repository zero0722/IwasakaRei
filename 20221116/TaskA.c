#include<stdio.h>

#define Stack_Size 5  //配列のサイズ
typedef int data_t; //スタックに貯えるデータの型

data_t stack_data[Stack_Size]; //スタック本体
int stack_num; //スッタク内のデータ数

int push(data_t push_data){
    if (stack_num < Stack_Size) {
        stack_data[stack_num] = push_data;
        stack_num ++;
    }
}

int pop(data_t *pop_data)
{
    if (stack_num > 0) {
        stack_num --;
        *pop_data = stack_data[stack_num];
    }
}

void stackPrint(){
    int i;

    printf("[");
    for (i = 0; i < stack_num; i++) {
        printf("%3d", stack_data[i]);
    }
    printf("]\n");
}

int main(void){
    int i,p;
    stack_num = 0;

    push(1);
    stackPrint();

    push(3);
    stackPrint();

    push(5);
    stackPrint();

    push(7);
    stackPrint();

    push(9);
    stackPrint();

    for (i = 0; i <= 1; i++){
        pop(&p);
        stackPrint();
    }

}
