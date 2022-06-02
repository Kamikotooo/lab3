#include <stdio.h>
#include <stdlib.h>
#include "str_utils.h"
#include "ex_test.h"


int mainMenu(void) {
    char *str[1000], *subs[1000], *repl[1000], *detim[1000];
    system("cls");
    printf_s("Choose action:\n"
        "1) the presence of a string\n"
        "2) number of incoming line\n"
        "3) replacing a substring\n"
        "4) \n"
        "5) example\n"
        "0) Exit\n");
    while (!_kbhit());
    char action = _getch();
    system("cls");
    switch (action) {
    case '1':
        printf("write str:\n");
        gets_s(&str, 999);
        printf("write subs:\n");
        gets_s(&subs, 999);
        printf("Your str and substr:\n");
        printf("%s %s\n", str, subs);
        if (my_strstr(str, subs) != -1) printf("YES");
        else printf("NO");
        system("pause");
        break;
    case '2':
        printf("write str:\n");
        gets_s(&str, 999);
        printf("write subs:\n");
        gets_s(&subs, 999);
        printf("Your str and substr:\n");
        printf("%s %s\n", str, subs);
        num_occ(str, subs);
        system("pause");
        break;
    case '3':
        printf("write str:\n");
        gets_s(&str, 999);
        printf("write subs:\n");
        gets_s(&subs, 999);
        printf("write replace string:\n");
        gets_s(&repl, 999);
        printf("Your string, substring and replace string:\n");
        printf("%s %s %s\n", str, subs, repl);
        str_rep(str, subs, repl);
        system("pause");
        break;
    case '4':

        break;
    case '5':
        example();
        break;
    case '0':
        return 0;
    default:
        printf_s("you are don`t choose function");
        system("pause");
        break;
    }
    return 1;
}