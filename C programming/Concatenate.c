#include<stdio.h>

void concat(char *p, char *q){
	
	while(*p != '\0'){
		p++;
	}
	
	while(*q != '\0'){
		
		*p = *q;
		
		p++;
		q++;
	}
	
	*p = '\0';
	
}

void main(){
	
	char a[10] = {"hello"};
	char b[10] = {"bro"};
	
	concat(a, b);
	
	printf("%s", a);
}
