#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

/* No existe un sitio web oficial para C, pero agrego una referencia del manual GNU
https://www.gnu.org/software/gnu-c-manual/gnu-c-manual.html  
*/

//One line comment

int main()
{
    const char constExample[] = "Hello";
    char item = 'C';
    int integerExample = 5;
    float floatNumber = 5.5;
    unsigned int unsignedExample= 5;
    char charExample = 'a';
    bool booleanExample = true;

    printf("%s, %c!\n", constExample, item);
    return 0;
}