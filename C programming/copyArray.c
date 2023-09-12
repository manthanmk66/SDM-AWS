#include<stdio.h>

void copy(int *p, int *q){
	
	while(*p != '\0'){
		
		*q = *p;
		
		p++;
		q++;
	}

}


void main(){
	
	char a[] = "hello";
	
	char b[6];
		
	copy(a, b);
	
	printf("%s", b);
}
