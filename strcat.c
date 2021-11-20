/*WAP to concatenate 2 strings without using strcat(inbuilt function)*/
#include <stdio.h>
#include <string.h>
void main()
{
    //initialising two strings for concatenation//
    char str1[]="Hello ";
    char str2[]="World";
    char str[100];   // taking another string for concatenation
    int i;
    for(i=0;i<strlen(str1);i++)
    {
        str[i]=str1[i];   //storing the elements of str1 in str
    }
    for(int j=0;j<strlen(str2);j++)
    {
    	str[i]=str2[j];   //storing the elments of str2 in str
    	i++;   //increamenting the variable to jump to next cell
    }
    printf("The concatenated string is: %s",str);   //displaying the concatenated string
}
