#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void printMenu(){
	printf("***********************MENU***********************\n");
	printf("1. Nhap vao chuoi ky tu.\n");
	printf("2. In ra do dai chuoi va noi dung chuoi vua nhap.\n");
	printf("3. In ra chuoi dao nguoc.\n");
	printf("4. In ra so luong chu cai trong chuoi.\n");
	printf("5. In ra so luong chu so trong chuoi.\n");
	printf("6. In ra so luong ky tu dac biet trong chuoi.\n");
	printf("7. Thoat.\n");
}
// kiem tra chu cai
int countLetters(char str[]){
	int count=0;
	int i;
	for(i=0;i<strlen(str);i++){
		if((str[i]>='a'&& str[i]<='z')||(str[i]>='A'&& str[i]<='Z')){
			count++;
		}
	}
	return count;
}
// kiem tra chu so
int countDigits(char str[]){
	int count=0;
	int i;
	for(i=0;i<strlen(str);i++){
		if((str[i]>='0'&& str[i]<='9')){
			count++;
		}
	}
	return count;
}
//kiem tra ki tu dac biet
int specialCharacters(char str[]){ //chua xong
	int count=0;
	int i;
	for(i=0;i<strlen(str);i++){
		if((str[i]>='!'&& str[i]<='+')){
			count++;
		}
	}
	return count;
}
int main(){
	char strs[100];
	int choice;
	int length;
	do{
		printMenu();
		printf("Lua chon cua ban: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				fflush(stdin); ///Xoa buffer truoc khi su dung getchar
				printf("Nhap vao chuoi ky tu: ");
				gets(strs);
				break;
			case 2:
				length = strlen(strs);
				printf("Do dai cua chuoi: %d\n",length);
				printf("Noi dung vua nhap: %s\n",strs);
				break;
			case 3:
				strrev(strs); // dao nguoc
				printf("Chuoi dao nguoc: %s\n",strs);
				break;
			case 4:
				printf("So luong chu cai trong chuoi: %d\n",countLetters(strs));
				break;
			case 5:
				printf("So luong chu so trong chuoi: %d\n",countDigits(strs));
				break;
			case 6:
				printf("So luong ky tu dac biet trong chuoi: %d\n",specialCharacters(strs));
				break;
			case 7:
				exit(0);
			default:
			 printf("Vui long chon tu 1-7\n");
		}
	}
	while(1==1);
}
