#include <stdio.h>
#include <locale.h>

void name()
{
    puts("* * * * * * * * * * * * * * * * * * * * * * *");
    puts("*                                           *");
    puts("* тема: Разработка консольного приложения   *");
    puts("*                                           *");
    puts("*           Выполнил Рубцов А.А.            *");
    puts("*                                           *");
    puts("* * * * * * * * * * * * * * * * * * * * * * *");
}

void date()
{
    puts("         11.05.2008          ");
    puts("       _   _   _   _   _   _ ");
    puts(" | |  | | |_    | | | | | |_|");
    puts(" | |  |_|  _|  /_ |_| |_| |_|");
}

int main()
{
    setlocale(LC_CTYPE, "RUS");

    name();
    date();

    return 0;
}
