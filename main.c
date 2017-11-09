#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float name (void);
int main( ) {

    char name[100];
    int i, j, counter = 0, last_space, invalid_flag = 0;

    printf("Enter a value :");
    gets(name);

    last_space = strlen (name);

    for (i=strlen (name)-1; i>=0; i--)
    {
        if (name [i] >= 48 && name [i] <= 57) //  letter is number (INVALID)
        {
            printf("INVALID entry in char no. %i which is %i\n",i+1, name [i]-'0');
            invalid_flag = 1;
        }

        else if (invalid_flag == 0 && name [i] == ' ')
        {
           for (j=i+1; j <last_space; j++)
           {
               printf("%c",name [j]); //print the string from the last space from the end to the end of string

           }
           last_space = i;
           printf(" ");

        }

    }

    if (invalid_flag == 0)
    {

        for (j=0; j <last_space; j++) // print the first name
        {
            printf("%c",name [j]);

        }

   }
    puts( name );

    return 0;
}

