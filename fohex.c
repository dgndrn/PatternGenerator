#include<stdio.h>




int main(int argc,char *argv[]){



char *numara = argv[1];


if(argc != 3){

printf("usage ./find1 value patternsize\n");
return 1;
}



char bigA;
char smallA;
char num;
char *output;

bigA = 65;
smallA = 97;
num = 48;
int sayi = atoi(argv[2]);



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

int *deger = malloc(4 *sizeof(int));


int counter = 0;
for(int i=0;i<8;i+=2){

int head = (numara[i] -'0')*16;
int tail = (numara[i+1] - '0');

deger[counter] = head + tail;

counter++;
}




for(int i=0;i<=sayi;i++){

if(deger[3] == output[i]){

	if(deger[2] == output[i+1]){

			if(deger[1] == output[i+2]){
					if(deger[0] == output[i+3]){
				printf("offset:%d\n",i);
				return 0;
	}

	}	

	}
}

}





printf("Eşleşme bulunamadı!\n");
return 0;




}