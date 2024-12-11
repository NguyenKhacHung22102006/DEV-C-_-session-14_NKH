#include<stdio.h>
#include<string.h>
int main (){
	char scentence[]= {"hello word"};
	int n = sizeof(scentence) / sizeof(char);
	printf ("gia tri da in la:\n");
	for (int i=n-2 ; i>=0 ; i--){
		printf ("%c ",scentence[i]);
	}
	return 0 ;
}
