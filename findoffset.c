#include<stdio.h>


int main(int argc,char *argv[]){


if(argc != 3){

printf("usage ./find1 value patternsize\n");
return 0;
}


char bigA;
char smallA;
char num;
char *output;

bigA = 65;
smallA = 97;
num = 48;
int sayi = atoi(argv[2]);
char *bul = argv[1]; // aranacak olan veri Aa0A


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
bul[4] = '\0';


for(int i=0;i<=sayi;i++){

if(bul[0] == output[i]){

	if(bul[1] == output[i+1]){

			if(bul[2] == output[i+2]){
					if(bul[3] == output[i+3]){
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

