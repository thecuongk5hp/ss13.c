#include <stdio.h>
#include <string.h>

int main()
{ 
	int i; 
    int max = 0;
    int count = 0, j, changeCount = 0,start,end;
    char str[100];
    printf("Nhap chuoi ");
    scanf("%s", &str);
   
    for (i = 0; i < strlen(str); i++)
    {
        for (j = changeCount; j < i; j++)
        {
            if (str[i] == str[j]||i==strlen(str)-1)
            {
                if (max < count)
                {
                    start= changeCount;
                    end=i;
                    max = count;
                }
                count = 0;
                changeCount=i;
            }
        }
        count++;
    }
    for (i = start ; i < end; i++)
    {
        printf("%c",str[i]);
    }
    
}

