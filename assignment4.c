
#include "stdio.h"

int main(){

    int win[7]={119,105,110,104,116,117,116};
    int arr[7];
    int nation[17]={78,97,116,105,111,110,97,108,67,121,98,101,114,67,105,116,121};
    int nation_arr[17];
    int win_count=0;
    int nation_count=0;
    char c;
    FILE *fptr;
    fptr= fopen("words.txt","r");

    while (!feof(fptr)){
        c= fgetc(fptr);

        if(c==119){
            arr[0]=119;

            for(int i=1; i<7; i++){

                c= fgetc(fptr);
                if(c!=32){
                    arr[i]=c;
                }else{
                    i=7;
                }
            }


            for(int i=0; i<7; i++){
                if(win[i]==arr[i]){
                    win_count++;
                }else{
                    win_count=0;
                }
            }
            if(win_count==7){
                for(int i=0; i<7; i++){
                    printf("%c",arr[i]);
                }
                printf("%c",'\n');
                win_count=0;
            }
        }

        if(c==78){
            nation_arr[0]=78;

            for(int i=1; i<17; i++){

                c= fgetc(fptr);
                if(c!=32){
                    nation_arr[i]=c;
                }else{
                    i=17;
                }

            }


            for(int i=0; i<17; i++){
                if(nation[i]==nation_arr[i]){
                    nation_count++;
                }else{
                    nation_count=0;
                }
            }
            if(nation_count==17){
                for(int i=0; i<17; i++){
                    printf("%c",nation_arr[i]);
                }
                printf("%c",'\n');
                nation_count=0;

            }

        }

    }
    return 0;
}