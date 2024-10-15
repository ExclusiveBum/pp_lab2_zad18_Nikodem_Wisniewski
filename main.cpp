#include <iostream>

using namespace std;

enum Weekday {Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6, Sunday = 0};
enum Month {January = 0, February = 1, March = 2, April = 3, May = 4, June = 5, July = 6, August = 7, September = 8, October = 9, November = 10, December = 11};

int main()
{
    int d, d0 = 15, fd = 5, m, m0 = 10, y, y0 = 1582, fy, answer;
    printf("Input date after %d.%d.%d in format dd.mm.yyyy: ", d0, m0, y0);
    scanf("%d.%d.%d", &d, &m, &y);
    if (((d>d0 && m>=m0 && y>=y0) || (d<=d0 && m>m0 && y>=y0) || (d<=d0 && m<=m0 && y>y0) || (d>d0 && m<=m0 && y>y0)) && (d>0 && d<=31 && m>0 && m<=12 && y>=y0))
    {
        if (y>y0)
        {
            for (int i=m0-1; i<12; i++) // pierwsze miesiące jeśli y>y0
            {
                switch (i)
                {
                    case October:
                    {
                        fd += 31-d0;
                        break;
                    }
                    case November:
                    {
                        fd += 30;
                        break;
                    }
                    case December:
                    {
                        fd += 31;
                        break;
                    }
                    default:
                    {
                        break;
                    }
                }
            }
            for (int i=y0+1; i<y; i++) // wszystkie miesiące z wszytkich lat oprócz ostatniego
            {
                if (i%4==0 && (i%100!=0 || i%400==0))
                {
                    for (int j=0; j<12; j++)
                    {
                        switch (j)
                        {
                            case January:
                            {
                                fd += 31;
                                break;
                            }
                            case February:
                            {
                                fd += 29;
                                break;
                            }
                            case March:
                            {
                                fd += 31;
                                break;
                            }
                            case April:
                            {
                                fd += 30;
                                break;
                            }
                            case May:
                            {
                                fd += 31;
                                break;
                            }
                            case June:
                            {
                                fd += 30;
                                break;
                            }
                            case July:
                            {
                                fd += 31;
                                break;
                            }
                            case August:
                            {
                                fd += 31;
                                break;
                            }
                            case September:
                            {
                                fd += 30;
                                break;
                            }
                            case October:
                            {
                                fd += 31;
                                break;
                            }
                            case November:
                            {
                                fd += 30;
                                break;
                            }
                            case December:
                            {
                                fd += 31;
                                break;
                            }
                            default:
                            {
                                break;
                            }
                        }
                    }
                }
                else
                {
                    for (int j=0; j<12; j++)
                    {
                        switch (j)
                        {
                            case January:
                            {
                                fd += 31;
                                break;
                            }
                            case February:
                            {
                                fd += 28;
                                break;
                            }
                            case March:
                            {
                                fd += 31;
                                break;
                            }
                            case April:
                            {
                                fd += 30;
                                break;
                            }
                            case May:
                            {
                                fd += 31;
                                break;
                            }
                            case June:
                            {
                                fd += 30;
                                break;
                            }
                            case July:
                            {
                                fd += 31;
                                break;
                            }
                            case August:
                            {
                                fd += 31;
                                break;
                            }
                            case September:
                            {
                                fd += 30;
                                break;
                            }
                            case October:
                            {
                                fd += 31;
                                break;
                            }
                            case November:
                            {
                                fd += 30;
                                break;
                            }
                            case December:
                            {
                                fd += 31;
                                break;
                            }
                            default:
                            {
                                break;
                            }
                        }
                    }
                }
            }
            int i = y; // zliczanie dni dla ostatniego roku
            if (i%4==0 && (i%100!=0 || i%400==0))
            {
                for (int j=0; j<m; j++)
                {
                    switch (j)
                    {
                        case January:
                        {
                            fd += j==m-1 ? 31-(31-d) : 31;
                            break;
                        }
                        case February:
                        {
                            fd += j==m-1 ? 29-(29-d) : 29;
                            break;
                        }
                        case March:
                        {
                            fd += j==m-1 ? 31-(31-d) : 31;
                            break;
                        }
                        case April:
                        {
                            fd += j==m-1 ? 30-(30-d) : 30;
                            break;
                        }
                        case May:
                        {
                            fd += j==m-1 ? 31-(31-d) : 31;
                            break;
                        }
                        case June:
                        {
                            fd += j==m-1 ? 30-(30-d) : 30;
                            break;
                        }
                        case July:
                        {
                            fd += j==m-1 ? 31-(31-d) : 31;
                            break;
                        }
                        case August:
                        {
                            fd += j==m-1 ? 31-(31-d) : 31;
                            break;
                        }
                        case September:
                        {
                            fd += j==m-1 ? 30-(30-d) : 30;
                            break;
                        }
                        case October:
                        {
                            fd += j==m-1 ? 31-(31-d) : 31;
                            break;
                        }
                        case November:
                        {
                            fd += j==m-1 ? 30-(30-d) : 30;
                            break;
                        }
                        case December:
                        {
                            fd += j==m-1 ? 31-(31-d) : 31;
                            break;
                        }
                        default:
                        {
                            break;
                        }
                    }
                }
            }
            else
            {
                for (int j=0; j<m; j++)
                {
                    switch (j)
                    {
                        case January:
                        {
                            fd += j==m-1 ? 31-(31-d) : 31;
                            break;
                        }
                        case February:
                        {
                            fd += j==m-1 ? 28-(28-d) : 28;
                            break;
                        }
                        case March:
                        {
                            fd += j==m-1 ? 31-(31-d) : 31;
                            break;
                        }
                        case April:
                        {
                            fd += j==m-1 ? 30-(30-d) : 30;
                            break;
                        }
                        case May:
                        {
                            fd += j==m-1 ? 31-(31-d) : 31;
                            break;
                        }
                        case June:
                        {
                            fd += j==m-1 ? 30-(30-d) : 30;
                            break;
                        }
                        case July:
                        {
                            fd += j==m-1 ? 31-(31-d) : 31;
                            break;
                        }
                        case August:
                        {
                            fd += j==m-1 ? 31-(31-d) : 31;
                            break;
                        }
                        case September:
                        {
                            fd += j==m-1 ? 30-(30-d) : 30;
                            break;
                        }
                        case October:
                        {
                            fd += j==m-1 ? 31-(31-d) : 31;
                            break;
                        }
                        case November:
                        {
                            fd += j==m-1 ? 30-(30-d) : 30;
                            break;
                        }
                        case December:
                        {
                            fd += j==m-1 ? 31-(31-d) : 31;
                            break;
                        }
                        default:
                        {
                            break;
                        }
                    }
                }
            }
        }
        else
        {
            for (int i=m0-1; i<m; i++)
            {
                switch (i)
                {
                    case October:
                    {
                        fd += i==m-1 ? 31-(31-(d-d0)) : 31-d0;
                        break;
                    }
                    case November:
                    {
                        fd += i==m-1 ? 30-(30-d) : 30;
                        break;
                    }
                    case December:
                    {
                        fd += i==m-1 ? 31-(31-d) : 31;
                        break;
                    }
                    default:
                    {
                        break;
                    }
                }
            }
        }
        answer = fd%7;
        switch (answer)
        {
            case Monday:
            {
                printf("Weekday of %d.%d.%d is Monday", d, m, y);
                break;
            }
            case Tuesday:
            {
                printf("Weekday of %d.%d.%d is Tuesday", d, m, y);
                break;
            }
            case Wednesday:
            {
                printf("Weekday of %d.%d.%d is Tuesday", d, m, y);
                break;
            }
            case Thursday:
            {
                printf("Weekday of %d.%d.%d is Thursday", d, m, y);
                break;
            }
            case Friday:
            {
                printf("Weekday of %d.%d.%d is Friday", d, m, y);
                break;
            }
            case Saturday:
            {
                printf("Weekday of %d.%d.%d is Saturday", d, m, y);
                break;
            }
            case Sunday:
            {
                printf("Weekday of %d.%d.%d is Sunday", d, m, y);
                break;
            }
            default:
            {
                break;
            }
        }
    }
    else if (d==d0 && m==m0 && y==y0)
    {
        printf("Date you have prompted is the same as %d.%d.%d", d0, m0, y0);
    }
    else
    {
        printf("Date you have prompted is before %d.%d.%d", d0, m0, y0);
    }
    printf("\n%d", fd-5);
    return 0;
}