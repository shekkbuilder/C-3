#include <stdio.h>

main()
{
    int my_array[5];

    populate(&my_array[5]);
}

populate(int *a[5])
{
    for (int i = 0; i < 5; i++)
    {
        a[i] += 10;
    }
}

/*int print()
{

}*/

/*int sum()
{

}*/