#include <stdio.h>
#if 0
#if 0
#define Z 0
#else
#define Z 1
#endif
#endif
int foo ()
{
    /**********************
     * Comment in a box!! *
     **********************/
    puts("Hi");
    return 0;
}
/* The procedure bar is even less interesting.  */
char *bar ()
{
    /* Loving hug */
    puts("Hello");
    return NULL;
}

void f(int a, int b, char c);

void f(int a, int b, char c)
{
    (void) a;
    (void)b;
    (void) c;
}

char* g(int a, double b, char c);
char* g(int a,
        double b,
        char c)
{
    return NULL;
}


struct structy {
    int x;
    char y;
    double z;
};


int really_long_function_that_needs_many_parameters(int long_parameter_1, char* long_parameter2, double long_paramter_3);

int really_long_function_that_needs_many_parameters(int long_parameter_1, char* long_parameter2, double long_paramter_3)
{
    return 7;
}


void function()
{
    while (0)
    {
        for (;;)
        {
            goto break_label;
        }

break_label:
        break;
    }
}




int main(int argc, char** argv)
{
    char *foo;
    char *bar;
    /* This separates blocks of declarations.  */
    int baz;

    int aaaa : 1;
    int b: 12;
    int ccc: 8

    float spacing1 = 0.0;
    double spacing2 = 7.1;
    int spacing3 = 2;

    char one, two, three;

    int some_variable_i_dont_care_about =  really_long_function_that_needs_many_parameters(1, NULL, 44.4);

    int* mask = &spacing3;

    if (mask
            && ((mask[0] == '\0')
                || (mask[1] == '\0'
                    && ((mask[0] == '0') || (mask[0] == '*')))))
    {}

    if ((((baz < 2 &&
            some_variable_i_dont_care_about > 0 || spacing1 == 0.0
          ) &&
            spacing2 == 1) ||
            foo == NULL)) {
        ++ spacing3;
    }

    if (baz > 0) {
        baz--;
    }

    if (baz > 0) {
        baz --;

    } else {
        baz --;
    }

    do {
        baz--;
    }
    while (0);

arbitrary_label1:

    switch (baz)
    {
    case 0:
        break;

    case 1:
    {
        break;
    }

    case 2:
        puts("2");
        break;

    default:
        break;
    }

    while (0);

arbitrary_label2:

    while ((0 != baz) && (7 != baz))
    {
        baz = 7;
    }

return_label:

    return 0;
}
