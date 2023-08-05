#include <stdio.h>

int length(char s[])
{
	int i;
	
    for(i=0; s[i]!='\0'; i++);
    
    return i;
}

void main()
{
    char s[100];  
    int len;
 
    printf("Enter any string: ");
    gets(s);
    
    len=length(s);
    
    printf("Length of '%s' = %d",s,len);
 
}
