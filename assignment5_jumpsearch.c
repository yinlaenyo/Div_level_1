#include "stdio.h"
#include "math.h"


int min(int first, int second){

    if(second>first){
        return first;
    }else{
        return second;
    }
}

int findBestStep(int size){

    for(int i=3; i<10; i++){

        if((size%i)==0){
           return i;
        }
    }

}


int jumpSearch(int arr[], int size, int key){

    int step=findBestStep(size);

    int previous = 0;




    if(arr[min(step,size)-1]==key){
        return min(step,size)-1;
    }

    while( arr[min(step,size)-1] < key ){

        previous=step;

        step=step+findBestStep(size);

        if(previous>=size){
            return -1;
        }
        if(step>size){
            step=size;
        }

    }



    for(int i=previous; i<step; i++){

        if(arr[i]==key){
            return i;
        }
    }

    return -1;
}


int main(){

    int arr[]={1,2,3,4,5,6,7,8,9,100,120,130,131};

    int size= sizeof(arr)/sizeof(arr[0]);

    int toFind=130;


    int indexNumber = jumpSearch(arr,size,toFind);

    if(indexNumber!=-1){
        printf("We found\n");
        printf("found at %d\ndata: %d",indexNumber,arr[indexNumber]);
    }else{
    printf("Not found\n");
    }

return 0;
}
