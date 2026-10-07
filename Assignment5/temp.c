#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PORT 8080
#define BUFFER_SIZE 1024

int main()
{
    char word[BUFFER_SIZE];
    fgets ( word , BUFFER_SIZE , stdin ) ;
    printf(word);
    // ANALYZE |

    if (word[0]=='A' && word[1]== 'N' && word[2]=='A' && word[3]=='L' && word[4]=='Y' && word[5]=='Z' && word[6]=='E' && word[7]==' ' && word[8]=='|' ) 
    {
        printf("ANALYZING...\n");

        int vowel = 0;
        int space = 0;
        for (int i = 9; word[i] != '\0'; i++) {
            printf("%c ", word[i]);
            if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U'  ) 
            {
                vowel++;
            }
            if (word[i] == ' ') {
                space++;
            }

        }
        printf("Vowel count %i\n", vowel);
        printf("Word count %i\n", space);

        char result = "Vowel: ";
        
        // strcat ( result, vowel );
        // strcat ( result, " Words: " ) ;
        // strcat ( result, space ) ;
        // strcat ( result, "\n" ) ;
        printf(result);


    }


    


    
    

    return 0;
}
