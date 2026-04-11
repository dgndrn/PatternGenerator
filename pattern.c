#include<stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

void create_pattern(uint64_t sayi, char* bul, int flag);
void help();

int main(int argc,char *argv[]){
   
    if(argc < 3){
        help();
        return 0;
    }
    else if(strcmp(("-p"),argv[1]) == 0 ){

        create_pattern(atoi(argv[2]),NULL,0);
    }
    else if(strcmp(("-f"),argv[1]) == 0){

        char *bul = argv[2];
        create_pattern(atoi(argv[3]),bul,1);
    }
    else if(strcmp(("-x"),argv[1]) == 0){
        
        char *bul = argv[2];
        create_pattern(atoi(argv[3]),bul,2);

    }else{

        printf("Usage ./pattern [options] value1 value2\n");
        return -1;
    }

    return 0;
}

void create_pattern(uint64_t sayi,char* bul,int flag){

    char bigA = 65;
    char smallA = 97;
    char num = 48;
    char output[sayi]; 

    for(int i=0;i<sayi;i++){  
            
        output[i] = bigA;
        output[i+1] = smallA;
        output[i+2] =num;
        i = i+2 ;
        num++;
        
        if(num == 58){
            smallA++;
            num = 48;
        }

        if(smallA == 123){
            bigA++;
            smallA = 97;
            num = 48;
        }
    }

    if(flag == 1){
        bul[4] = '\0';
        output[sayi] = '\0';
        for(int i=0;i<=sayi;i++){

            if(bul[0] == output[i]){

                if(bul[1] == output[i+1]){

                        if(bul[2] == output[i+2]){

                            if(bul[3] == output[i+3]){

                                printf("offset:%d\n",i);

                                return;
                            }

                        }	

                    }
            }

        }

    }else if(flag == 2){
        
        int *deger = malloc(4 *sizeof(int));
        int counter = 0;
        
        for(int i=0;i<8;i+=2){
            int head = (bul[i] -'0')*16;
            int tail = (bul[i+1] - '0');
            deger[counter] = head + tail;
            counter++;
        }

        for(int i=0;i<=sayi;i++){

            if(deger[3] == output[i]){

                if(deger[2] == output[i+1]){

                    if(deger[1] == output[i+2]){
                                
                        if(deger[0] == output[i+3]){
                                
                                printf("offset:%d\n",i);
                                
                                return;
                            }

                    }	

                }
            }

	    }
    printf("No matches!\n");
    return;
    }

    output[sayi] = '\0';
    printf("###Pattern###\n%s\n",output);    
}

void help(){
    printf("\nPattern Generator [64] v1.0 Dogan Duran: 2023-07-19\n");
    printf("The purpose of the Pattern Generator is to create patterns in order to find overflow offsets in memory and calculate those offsets.\n\n");
    printf("Usage ./pattern [options] value1 value2 \n\nExample uses\n./pattern -p 100\n./pattern -f 0Aj1 300 \n./pattern -x 41386141 300\n\n");
    printf("[options]\n -p : Create pattern\n -f : Find the offset within the pattern\n -x : Find the offset within the pattern in hexadecimal format\n");
}