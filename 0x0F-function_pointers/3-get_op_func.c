#include "3-calc.h"

/**
 * get_op_func - fun to point to operator fun
 * @s: desired operator
 * Return: int fun index corresponding to s
 */
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

    for (i = 0; ops[i].op; i++)
    {
        if (*(ops[i]).op == *s)
        {
            return (ops[i].f);
        }
    }
    return (NULL);
}
