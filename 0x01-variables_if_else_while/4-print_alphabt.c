#include <stdio.h>
/**
 * main - This prints the entire alphabet except q and e
 * Return: the return is 0
 */
int main(void)
{
        char alph = 'a';

        while (alph <= 'z')
        {
                if (alph != 'q' && alph != 'e')
                        putchar(alph);
                ++alph;
        }
        putchar('\n');
        return (0);
}
