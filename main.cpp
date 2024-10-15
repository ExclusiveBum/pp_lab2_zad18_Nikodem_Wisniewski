#include <iostream>

using namespace std;

enum Weekday {Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6, Sunday = 0};
enum Month {January = 0, February = 1, March = 2, April = 3, May = 4, June = 5, July = 6, August = 7, September = 8, October = 9, November = 10, December = 11};

int main()
{
    enum Weekday weekday;
    enum Month month;
    int d, d0 = 15, fd = 5, m, m0 = 10, fm, y, y0 = 1582, fy;
    printf("Input date in format dd.mm.yyyy:");
    scanf("%d.%d.%d", &d, &m, &y);
    if (((d>d0 && m>=m0 && y>=y0) || (d<=d0 && m>m0 && y>=y0) || (d<=d0 && m<=m0 && y>y0)) && (d>0 && 0>m>=12 && y>=y0))
    {
        if (y>y0)
        {
            if (m < m0)
            {
                for (int i=m0-1; i<12; i++)
                {
                    switch (i)
                    {
                        case October:
                            fd += 31-d0;
                        break;
                        case November:
                            fd += 30;
                        break;
                        case December:
                            fd += 31;
                        default:
                            break;
                    }
                }

                if (m > 2)
                {
                    for (int i=y0+1; i<=y; i++)
                    {
                        if (i%4==0 && (i%100!=0 || i%400==0))
                        {
                            for (int i=0; i<m; i++)
                            {
                                switch (i)
                                {
                                    case January:
                                        fd += i==m-1 ? 31-d : 31;
                                        break;
                                    case February:
                                        fd += i==m-1 ? 29-d : 29;
                                        break;
                                    case March:
                                        fd += i==m-1 ? 31-d : 31;
                                        break;
                                    case April:
                                        fd += i==m-1 ? 30-d : 30;
                                        break;
                                    case May:
                                        fd += i==m-1 ? 31-d : 31;
                                        break;
                                    case June:
                                        fd += i==m-1 ? 30-d : 30;
                                        break;
                                    case July:
                                        fd += i==m-1 ? 31-d : 31;
                                        break;
                                    case August:
                                        fd += i==m-1 ? 31-d : 31;
                                        break;
                                    case September:
                                        fd += i==m-1 ? 30-d : 30;
                                        break;
                                    case October:
                                        fd += i==m-1 ? 31-d : 31;
                                        break;
                                    case November:
                                        fd += i==m-1 ? 30-d : 30;
                                        break;
                                    case December:
                                        fd += i==m-1 ? 31-d : 31;
                                        break;
                                    default:
                                        break;
                                }
                            }
                        }
                        else
                        {
                            for (int i=0; i<m; i++)
                            {
                                switch (i)
                                {
                                    case January:
                                        fd += i==m-1 ? 31-d : 31;
                                        break;
                                    case February:
                                        fd += i==m-1 ? 28-d : 28;
                                        break;
                                    case March:
                                        fd += i==m-1 ? 31-d : 31;
                                        break;
                                    case April:
                                        fd += i==m-1 ? 30-d : 30;
                                        break;
                                    case May:
                                        fd += i==m-1 ? 31-d : 31;
                                        break;
                                    case June:
                                        fd += i==m-1 ? 30-d : 30;
                                        break;
                                    case July:
                                        fd += i==m-1 ? 31-d : 31;
                                        break;
                                    case August:
                                        fd += i==m-1 ? 31-d : 31;
                                        break;
                                    case September:
                                        fd += i==m-1 ? 30-d : 30;
                                        break;
                                    case October:
                                        fd += i==m-1 ? 31-d : 31;
                                        break;
                                    case November:
                                        fd += i==m-1 ? 30-d : 30;
                                        break;
                                    case December:
                                        fd += i==m-1 ? 31-d : 31;
                                        break;
                                    default:
                                        break;
                                }
                            }
                        }

                    }
                }
                else
                {

                }
            }
        }
    }

    return 0;
}
