#include <stdio.h>

int check(char *a, int n)
{
    static int sumO, sumX;
    if (n == 12)
    {
        if (sumO == sumX || sumO+1 == sumX) return 1;
        else return 0;
    }
    //printf("%-3s\nC:%c %d %d\n",a,*a,sumO,sumX);
    if (*a == '0') sumO++;
    else if(*a == 'x') sumX++;
    return check(a+1, ++n);
}

int main()
{
    //char a[3][4]={"x 0","xx0"," 0 "};
    char a[3][4]={0};
    for (int i = 0; i<12; i++) scanf("%c",(*a+i));
    printf("%s!\n",(check(*a, 0)?"Yes":"No"));
    return 0;
}
