
#include<stdio.h>
#include<string.h>
OperationsBinaryString(char *str)
{
    if (str==NULL)
        return -1;
    int a=*str - '0';
    str++;
    while(*str!='\0')
    {
        char p=*str;
        str++;
        if(p=='A')
            a&=(*str - '0');
        else if(p=='B')
            a|=(*str - '0');
        else 
            a^=(*str - '0');
        str++;
    }
    return a;
}

int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    if(str[len-1]=='\n')
    {
        str[len-1]='\0';
        len--;
    }
    printf("%d",OperationsBinaryString(str));
}


