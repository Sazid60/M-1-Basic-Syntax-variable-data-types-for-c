// #include<stdio.h>
// int main()
// {
//     printf("I am Sazid\n");
//     printf("demon");
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int num; // declaring avariable will be stored in memory and we will assign data.
//     num=10;
//     // or we can also write
//     int num1 = 10;
//     num1 = 20;
//     float f = 3.56;
//     char c = 'i am sazid';
//     // printf("num1"); // we cant print like this
//     printf("%d", num1);
//     printf("%f", f);
//     printf("%2f", f);
//     printf("%c", c);
//     return 0;
// }

// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
// bool b;
// b = false;
// printf("%d", b); // boolean has no format specifier so we will be using the integer specifier as it only about 0 and 1
// return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a;
//     float f;
//     char c;
//     scanf("%d", &a); // it will take file and keep in a . its like as int is defined and defined a garbage value (0 or other) and the scanf will replace the taken input value. & meas the address of a . its responsible for changing the value
//     scanf("%f", &f);
//     scanf(" %c", &c); 

//     printf("%d\n", a);
//     printf("%c\n", c);
//     printf("%f\n", f);

//     // we can also take multiple fields as well
//     scanf("%d %f %c", &a, &f, &c);
//     printf("%d\n%f\n%c\n", a, f, c);
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     long long int a;
//     printf("%lld", a);
//     return 0;
// }


#include <stdio.h>
int main()
{
    double f;
    printf("%lf", f);
    return 0;
}