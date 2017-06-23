#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, string argv[]) //Accepting cipher key at command line
{
      if(argc == 2) //Checking for number of command line arguments
   {
       printf("plaintext: ");
       string p = get_string(); //Accepting plaintext
       
       int pl = strlen(p); //Length of plaintext
       char cp[strlen(p)]; //To store ciphertext
       int m = strlen(argv[1]); //Length of cipherkey
      
        for(int i = 0; i < pl; i++) //Iteriating over the letters in 'p'
        {
             if(isalpha(p[i]))
             {
                 if(isupper(p[i]))
                    {
                        for(int d = 0; d < pl; d++)
                            p[i] = ((p[i] + argv[1][d%m])%26) + 65; //Converting upper case letters to cipher
                            
                    }
                    
                 else if(islower(p[i]))
                    {
                         for(int d = 0; d < pl; d++)
                            p[i] = ((p[i] + argv[1][d%m])%26) + 97; //Converting lower text to cipher
                            
                    }
             }        
            else
                printf("%c", p[i]);
            cp[i] = p[i]; 
             
        }
        printf("ciphertext: %s\n", cp);
        
   }
   
   else
    printf("Enter proper data\n");
   return 0;
}
