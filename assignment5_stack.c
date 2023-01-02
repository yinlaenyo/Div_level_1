#include "stdio.h"
#include "stdlib.h"

#define MAXOFSTACK 10

int toCount=0;

struct stack{

    int data[MAXOFSTACK];

    int top;

};

typedef struct stack st;

int isStackFull(st *myStack){

    if(myStack->top==MAXOFSTACK-1){
        return 1;
    }else{
        return 0;
    }


}

int isStackEmpty(st *myStack){

    if(myStack->top==-1){
        return 1;
    }else{
        return 0;
    }

}

void creat_emptyStack(st *myStack){

    myStack->top=-1;

}

void pushtostack(st *myStack,int value){

    if(isStackFull(myStack)){
        printf("Stack is full");
    }else{

        myStack->top++;

        myStack->data[myStack->top]=value;
    }

    toCount++;

}


void popfromstack(st *myStack){

    if(isStackEmpty(myStack)){
        printf("Sack is empty.");
    }else{


        myStack->top--;
    }

    toCount--;

}

void printStackdata(st *myStack){

    printf("\nThere are %d datas in Stack.\n",myStack->top+1);

    for(int i=myStack->top; i>=0 ; i--){
        printf("data %d : %d\n",i,myStack->data[i]);
    }
}

int main(){

    st *myStack = (st*)malloc(sizeof(st));

    creat_emptyStack(myStack);

    pushtostack(myStack,10);
    pushtostack(myStack,11);
    pushtostack(myStack,12);


    printStackdata(myStack);

    popfromstack(myStack);
    popfromstack(myStack);

    pushtostack(myStack,10);
    pushtostack(myStack,11);
    pushtostack(myStack,12);

    printStackdata(myStack);

    popfromstack(myStack);
    popfromstack(myStack);

    pushtostack(myStack,5);
    pushtostack(myStack,6);
    pushtostack(myStack,7);

    printStackdata(myStack);

    return 0;
}
