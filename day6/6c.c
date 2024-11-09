// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char sentence[100];

//     printf("Enter a sentence: ");
//     fgets(sentence, sizeof(sentence), stdin);

//     int i = 0;
//     while (sentence[i] != '\0') {
//         if (i == 0 || sentence[i - 1] == ' ') {
//             sentence[i] = toupper(sentence[i]);
//         }
//         i++;
//     }
//     printf("Modified sentence: %s", sentence);
//     return 0;
// }




/* lower to upper case*/
#include<stdio.h>
int main()
{
    char arr[100];
    scanf("%[^\n]s",arr);
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==' ')
        {
            arr[i+1]=(arr[i+1]>='a'&&arr[i+1]<='z')?arr[i+1]-('a'-'A'):arr[i+1];
        }    
}
    printf("%s",arr);   
    return 0;
}

