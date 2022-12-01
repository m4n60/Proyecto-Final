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
        else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 ||
            m == 10 || m == 12)
        {

            if (d == 31 && m != 12)
            {
                m++;
                d = 1;
            }
            else if (d == 31 && m == 12)
            {
                d = 1;
                m = 1;
                a++;
            }
            else
            {
                d++;
            }
       }
            else {
            if (d == 30)
            {
                m++;
                d = 1;
            }
            else
            {
                d++;
            }
        }

    }
    else if (d == 4 && m == 10 && a == 1582)
    {
        d = 15;
    }
    else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        if (d == 31 && m != 12)
        {
            m++;
            d = 1;
        }
        else if (d == 31 && m == 12)
        {
            d = 1;
            m = 1;
            a++;
        }
        else
        {
            d++;
        }
    }
    else
    {
        if (d == 30 || d == 2
            {
                m++;
                d = 1;
            }
        else
        {
            d++;
        }
    }
    printf("%2i %2i %4i", d, m, a);

        return 0;
}