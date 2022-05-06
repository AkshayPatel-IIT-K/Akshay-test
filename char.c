#include <stdio.h>

int main () {

    // Declare variables for number and alphabet.
    int d;
    char u;
    char shifted_alpha_position;
    char shifted_lower_char;

    // Take the number and alphabet.
    scanf ("%d\n%c", &d, &u);

    /**
     *
     * Calculate the position of alphabet after shifting d positions.
     *
     * Note:
     * While shifting you have to take care following points:
     *  1.) English alphabets are from `A` to `Z` (Upper Case).
     *  2.) The value of `d` could be larger than 26.
     *
     */
    shifted_alpha_position = (u + d - 'A') ;

    // Now convert the shifted alphabet to lower-case.
    shifted_lower_char = 'a' + shifted_alpha_position;

    // And finally print the result.
    printf ("%c", shifted_lower_char);

    // Simple return.
    return 0;

}