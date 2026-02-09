#include <stdio.h>
#include <string.h>

int main(){
    // Ready only
    char *nick = "m47eus2";

    // Read and write
    char name[] = "m47eus2";
    // String terminator - special charakter marking end of the string

    int age = 20;

    // String formatting with printf
    printf("Nick: %s, Age: %d\n", name, age);

    // String formatting with sprintf
    char string[20];
    sprintf(string, "Nick: %s, Age: %d\n", name, age);
    printf("%s", string);

    // String length
    printf("Length of the string %s is %d\n", name, strlen(name));

    // String comparison
    if(strncmp(name, "m47eus2", strlen("m47eus2"))==0){
        printf("String name is equal to m47eus2\n");
    }
    else{
        printf("String name is not equal to m47eus2\n");
    }

    // String concatenation - connecting strings
    char dest[20] = "Hello";
    char src[20] = "World";
    strncat(dest, src, 3);
    printf("%s\n", dest);

    return 0;
}