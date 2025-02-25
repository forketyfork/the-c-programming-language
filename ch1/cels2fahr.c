#include <stdio.h>

/* print Celsius-Fahrenheit table
 * for celsius=0, 20, ..., 300,
 * floating-point version
 */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;          /* lower limit of temperature table */
    upper = 300;        /* upper limit */
    step = 20;          /* step size */

    celsius = lower;

    printf("%3s %6s\n", "C", "F");

    while (celsius <= upper) {
        fahr = 32.0 + (9.0 / 5.0) * celsius;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
