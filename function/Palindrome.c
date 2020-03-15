#include <stdio.h>
#include <stdlib.h>
int palindrome(char *, int);
 main()
 {
     int l,check;
    char word[100];
    printf("Enter the word :");
    gets(word);
     for(l=0;word[l]!='\0';l++){}
        l--;
      check= palindrome(word,l);
      if(check==0)
        printf("Word is not palindrome.");
      else
        printf("Word is palindrome.");

 }
int i=0;
int palindrome(char *word,int l)
{

    if(i<=l/2)
    {
        if(word[i]==word[l])
        {
            i++;
            palindrome(word,l-1);
        }
        else
            return 0;
    }
    else
        return 1;
}
