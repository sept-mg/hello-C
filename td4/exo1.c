#include <time.h>
#include <stdio.h>

//typedef unsigned long clock_t ;
// d´efinition de constante
//const clock_t CLOCKS_PER_SEC = /* d´epend de l’ impl´ementation */;

void unGrosCalcul()
{

}

int main ()
{
    clock_t start, end;
    double cpu_time_used;

    start = clock();

    unGrosCalcul ();

    end = clock ();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC  * 1000;

    printf ("Temps d'execution : %f milisecondes\n", cpu_time_used);
    return 0;
}
