#include<stdio.h>

#define SIZE 50

void push(char* , char,int);
char pop(char*,int*);

int main(){
    char arr1[SIZE], arr2[SIZE];
    int top = -1,j = 0;
    char c;

    for(int i = 0; (c=getchar()) != '!' && i<SIZE-1; top++){
        arr1[i] = c;
        i++;
    }
    
    arr1[top+1] = '\0';

    while (top != -1){
        c = pop(arr1,&top);
        push(arr2,c,j);
        j++;
    }

    arr2[j] = '\0';

    printf("%s", arr2);

    return 0;
}

void push(char* arr2, char c, int pos){
    arr2[pos] = c;
}

char pop(char* arr1, int* top){
    char c = arr1[*top];
    (*top)--;
    return c;
}