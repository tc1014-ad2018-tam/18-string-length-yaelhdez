//Carlos Yael Hernandez Alcala
//A01412016
//A01412016@ITESM.MX


#include <stdio.h>

//---------------------------------------STRING_LENGHT FUNCTION---------------------------------------------------------

void String_lenght(char string[]) { // This function calculates the length of the string.
    int count = 0; // Declaration of the variable Count

    //This loop goes through all the characters in the string until finds a Null. "\0" meas Null or 0 in ascii code
    while (string[count] != '\0') {
        count++; //count incrementation
    }
    printf("Your string has %d characters",count-1); //Output of the String_lenght(); Function
}

//---------------------------------------MAIN FUNCTION---------------------------------------------------------
int main() {
    char string[100]; //Declaration of the array type char

    printf("Gimme a string:\n"); // Asks the user for a string.
    fgets(string, sizeof(string), stdin); // string request

    String_lenght(string); //String_lenght(); Call, using the array "string" as a parameter.
    return 0;
}