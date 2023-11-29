#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void printMenu(){
	printf("***********************MENU***********************\n");
	printf("1. Nhap vao chuoi ky tu.\n");
	printf("2. In ra noi dung chuoi.\n");
	printf("3. Nhap vao 1 ky tu, dem so lan xuat hien ky tu trong chuoi.\n");
	printf("4. Nhap vao 2 ky tu, thay the cac ky tu thu 2 trong chuoi thanh ky tu thu nhat.\n");
	printf("5. Nhap vao 1 ky tu, xoa bo cac ky tu trong chuoi.\n");
	printf("6. Thoat.\n");
}
// dem so lan ky tu giong nhau
int countAppear(char str[],char target){
	int count = 0;
	int i;
	for(i=0;i<strlen(str);i++){
		if(target==str[i]){
			count++;
		}
	}
	return count;
}
// nhap ky tu xoa bo
void deleteCharacters(char str[],char target){ 
	int i,j;
	char length = strlen(str);
	for(i=0;i<length;i++){
		if(target==str[i]){
			for(j=i;j<length;j++){
				str[j] = str[j+1];
			}
			length--;
		}
	}
}
int main(){
	char strs[100];
	int choice;
	int count;
	char find,result;
	char deletex;
	do{
		printMenu();
		printf("Lua chon cua ban: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				fflush(stdin);
				printf("Nhap vao chuoi ky tu: ");
				gets(strs);
				break;
			case 2:
				printf("Noi dung cua chuoi: %s\n",strs);
				break;
			case 3:
				printf("Nhap 1 ky tu muon dem: ");
				scanf(" %c",&find);
				result = countAppear(strs,find);
				printf("So lan xuat hien '%c' trong chuoi: %d lan\n",find,result);
				break;
			case 4:
				
				break;
			case 5:
				printf("Nhap ky tu muon xoa: ");
				scanf(" %c",&deletex);
				deleteCharacters(strs,deletex);
				printf("chuoi sau khi xoa ky tu '%c': %s\n",deletex,strs);
				break;
			case 6:
				exit(0);
			default:
			 printf("Vui long chon tu 1-6\n");
		}
	}
	while(1==1);
}
