LOGIC: Read the given input string. Check the initial character of the string is numerical or any special character except ‘_’ then print it is not a valid identifier. Otherwise print it as valid identifier if remaining characters of string doesn’t contains any special characters except ‘_’.

//C program to test whether a given identifier is valid or not

#include <stdio.h>

#include <conio.h>

#include <ctype.h>

void main()

{

    char a[10];

    int flag, i = 1;

    clrscr();

    printf("\n Enter an identifier:");

    gets(a);

    if (isalpha(a[0]))

        flag = 1;

    else

        printf("\n Not a valid identifier");

    while (a[i] != '\0')

    {

        if (!isdigit(a[i]) && !isalpha(a[i]))

        {

            flag = 0;

            break;
        }

        i++;
    }

    if (flag == 1)

        printf("\n Valid identifier");

    getch();
}



& OUTPUT:

Enter an identifier: first

Valid identifier

Enter an identifier:1aqw

Not a valid identifier