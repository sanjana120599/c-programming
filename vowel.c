#include <stdio.h>

int main()
{
 int ch;
 
 scanf("%c" ,&ch);
 if(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U' )
 {
 printf("vowel");
 }
 else if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
 {
 printf("constant");
 }
 else
 {
     printf("invalid");
 }
    return 0;
}
