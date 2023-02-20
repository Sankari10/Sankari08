#include<stdio.h>
#include "header.h"
int main(){
	int x,y,res;
	printf("\nWELCOME!\n");
	scanf("%d %d",&x,&y);
	res=addition(x,y);
	printf("%d",res);
	printf("\nAdditon is done\n");
	res=subtraction(x,y);
        printf("%d",res);
        printf("\nSubtraction is done\n");
	res=multiplication(x,y);
        printf("%d",res);
        printf("\nMultiplication is done\n");
	res=division(x,y);
        printf("%d",res);
        printf("\nDivision is done\n");
	printf("\nMain  File ended");
	printf("\n");
	return 0;
}

