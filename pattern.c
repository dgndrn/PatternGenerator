#include<stdio.h>

int main(int argc,char *argv[]){

char bigA;
char smallA;
char num;
char *output;

bigA = 65;
smallA = 97;
num = 48;
int sayi = atoi(argv[1]);


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

output[sayi] = '\0';
printf("%s",output);
return 0;

}

