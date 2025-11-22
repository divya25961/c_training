#include<stdio.h>
enum month
{
    jan = 1,
    feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec 
};
void main ()
{
    enum month m;
    m = may;
    char *season;
    switch(m)
    {
        case jan: case feb: case mar:
        season = "winter"; break;
        case apr: case may: case jun:
        season = "summer"; break;
        case jul: case aug: case sep:
        season = "monsoon"; break;
        case oct: case nov: case dec:
        season = "spring"; break;
    }
    printf("%d is %s",m,season);
}