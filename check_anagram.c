#include <stdio.h>  
#include <string.h> 
#include <stdlib.h>  
 
//Two strings are anagram of each other, if we can rearrange 
//characters of one string to form another string. All the characters 
//of one string must be present in another string and should appear same 
//number of time in other string. Strings can contain any ASCII characters.
//Example : rescued and secured, resign and singer, stone and tones, 
//pears and spare, ELEVEN PLUS TWO and TWELVE PLUS ONE


int checkAnagram(char *str1, char *str2);
int main()
{
    char str1[100], str2[100];
    printf("\n\n Function : whether two given strings are anagram :\n");
    printf("\n\n Example : pears and  spare, stone and tones :\n");    
	printf("-------------------------------------------------------\n");
    printf(" Input the  first String : ");
    fgets(str1, sizeof str1, stdin);
    printf(" Input the  second String : ");
    fgets(str2, sizeof str2, stdin);
 
    if(checkAnagram(str1, str2) == 1)
    {
       str1[strlen(str1)-1] = '\0';
       str2[strlen(str2)-1] = '\0';
       printf(" %s and %s are Anagram.\n\n",str1,str2);
    } 
    else 
    {
       str1[strlen(str1)-1] = '\0';
       str2[strlen(str2)-1] = '\0';
       printf(" %s and %s are not Anagram.\n\n",str1,str2);
    }
    return 0;
}
 
    //Function to check whether two passed strings are anagram or not
int checkAnagram(char *str1, char *str2)
{
    int str1ChrCtr[256] = {0}, str2ChrCtr[256] = {0};
    int ctr;
    /* check the length of equality of Two Strings */
    if(strlen(str1) != strlen(str2))
    {
        return 0;
    }
    //count frequency of characters in str1 
    for(ctr = 0; str1[ctr] != '\0'; ctr++)
    {
        str1ChrCtr[str1[ctr]]++;
    }
    //count frequency of characters in str2 
    for(ctr = 0; str2[ctr] != '\0'; ctr++)
    {
        str2ChrCtr[str2[ctr]]++;
    }
    //compare character counts of both strings 
    for(ctr = 0; ctr < 256; ctr++)
    {
        if(str1ChrCtr[ctr] != str2ChrCtr[ctr])
            return 0;
    }
    return 1;
}
