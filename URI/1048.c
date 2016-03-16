#include <stdio.h>
int main () {
    double salary, new;
    int perc;
    char ch = '%';
    scanf ("%lf", &salary);
    if (salary >= 0.00 && salary <= 400.00) {
        new = salary * 1.15;
        perc = 15 ;
    }
    if (salary > 400.00 && salary <= 800.00) {
        new = salary * 1.12;
        perc = 12;
    }
    if (salary > 800.00 && salary <= 1200.00) {
        new = salary * 1.10;
        perc = 10;
    }
    if (salary > 1200.00 && salary <= 2000.00) {
        new = salary * 1.07;
        perc = 7;
    }
    if (salary > 2000.00) {
        new = salary * 1.04;
        perc = 4;
    }
    printf ("Novo salario: %0.2lf\n", new);
    printf ("Reajuste ganho: %0.2lf\n", (new - salary) );
    printf ("Em percentual: %d %c\n",perc,ch);

     return 0;
      }

