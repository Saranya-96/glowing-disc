#include <stdio.h>
#define max_size 100
#define max_char 255


int main()
{
    char str[max_size];
    int freq[max_char];
    int i=0,max;
    int ascii;
    printf("Enter the string:  ");
    gets(str);
    for(i=0;i<max_char;i++)
    {
        freq[i]=0;
    }
    i=0;
    while(str[i]!='\0')
    {
        ascii=(int)str[i];
        freq[ascii]+=1;
        i++;
    };
    max=0;
    for(i=0;i<max_char;i++)
    {
        if(freq[i] > freq[max])
        max=i;
    }
    printf("Maximum occurring character is '%c' = %d times.", max, freq[max]);
    return 0;
}
