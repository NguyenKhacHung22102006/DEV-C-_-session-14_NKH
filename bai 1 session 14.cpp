#include<stdio.h>
#include<string.h>
int main (){
	char scentence[50] ;
	printf ("moi ban nhap vao chuoi :");
	fgets (scentence, sizeof(scentence) , stdin);
	printf("do dai cua chuoi la : %d\n", strlen(scentence)-1);
	printf("chuoi ban moi nhap la :%s\n", scentence);
	return 0 ;
}
