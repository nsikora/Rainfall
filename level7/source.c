#include <stdio.h>
#include <string.h>
#include <time.h>

void m(void) 
{
    time_t time_;

    time_ = time(0x0);
    printf("%s - %d\n", c, time_);
}

int main(int ac, char ** av)
{
    int *var1;
    int *var3;
    FILE *file;

    var1 = (int*)malloc(8);
    *var1 = 1;
    var1[1] = malloc(8);

    var3 = (int*)malloc(8);
    *var3 = 2;
    var3[1] = malloc(8);

    strcpy(var1[1], av[1]);
    strcpy(var3[1], av[2]);

    file = fopen("/home/user/level8/.pass", "r");
    
    fgets(c, 0x44, file);
    
    puts("~~");

    return(0);
}
