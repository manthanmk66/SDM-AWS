#include<stdio.h>
#include<string.h>

void main(){
	
	char a[] = "poop";
	
	char b[5];
	
	strcpy(b, a);
	
	strrev(b);
		
	if(strcmp(a, b)){
		printf("Not equal");
	}else{
		printf("Equal");
	}
}
