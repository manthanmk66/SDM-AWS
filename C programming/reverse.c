#include<stdio.h>

void reverse(char p[], int n){
	
	char b[n + 1];
	
	int i, j = n-1;
	
	for(i = 0; i < n; i++){
		
		b[i] = p[j];
		j--;
	}
	
	printf("%s", b);
}


void main(){
	char a[] = {"hello"};
	
	reverse(a, 5);
}

