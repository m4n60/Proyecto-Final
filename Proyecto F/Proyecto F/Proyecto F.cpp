#include <stdio.h>

int main()
{
    int d, m, a;

    scanf_s("%i %i %i", &d, &m, &a);

    if ((a % 4 == 0) && (a % 100 != 0 || a % 400 == 0))
    {
        if (m == 2)
        {
            if (d != 29)
            {
                d++;
            }
            else
            {
                m++;
                d = 1;
            }
        }