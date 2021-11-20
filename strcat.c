/*WAP to concatenate 2 strings without using strcat(inbuilt function)*/
#include <stdio.h>
#include <string.h>
void main()
{
    char str1[]="Hello ";
    char str2[]="World";
    char str[100];
    int i;
    for(i=0;i<strlen(str1);i++)
    {
        str[i]=str1[i];
    }
    for(int j=0;j<strlen(str2);j++)
    {
    	str[i]=str2[j];
    	i++;
    }
    printf("The concatenated string is: %s",str);
}