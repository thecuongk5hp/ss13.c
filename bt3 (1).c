#include<stdio.h>
#include<string.h>

int main(){
	int i,j,lenght;
	char str[100];
	int count = {0};
	printf("Nhap vao chuoi ky tu: ");
	gets(str);
	lenght = strlen(str);
	for(i=0;i<lenght;i++){
		count=1;
		if(str[i] != '\0'){
			for (j=i+1;j<lenght; j++){
	            if (str[j] == str[i]) {
	                count++;
	                str[j] = '\0';
				}
        	}
        printf("'%c': %d\n", str[i], count);
		}
	}
	
} 
