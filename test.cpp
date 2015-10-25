#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

main()
{
    char a[30], b[30], c[30], spojeni[100];
    int i,n;
    printf("unesi string: \n");
    gets(a);
    printf("unesi string: \n");
    gets(b);
    printf("unesi string: \n");
    gets(c);
    strcat(spojeni, a);
    strcat(spojeni, b);
    strcat(spojeni, c);
    printf("spojeni string: %s\n", spojeni);
    getch();
}
