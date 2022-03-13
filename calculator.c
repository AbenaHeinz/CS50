// Let's Create a new file in our insteance of VS code with the command code calculator.c in our terminal, 
// Then we will add the following code to the editor that opens for us and save the file, 

# include <cs50.c>
# include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    printf("%i\n", x + y);
}

// We promed the user for two variables, x and y and print out the sum x + y with the placeholder for interger: i 
// Thes short variable names are fine in this case since we are just using them for numbers with out any meaning  

