#include <stdio.h>
#include "dictionary.c"


void test_linked_list(void);
void test_hash(void);
void test_str_tolower(void);

int main(void)
{
    // test_linked_list();
    // test_hash();
    test_str_tolower();

    return 0;
}

void test_linked_list(void)
{
    node *n = NULL;
    char *words[3] = {"a", "b", "c"};

    for (int i = 0; i < 3; i++)
    {
        n = to_list(n, words[i]);
        if (n == NULL)
        {
            printf("Error %s\n", words[i]);
        }
    }

    char *lookup[4] = {"a", "b", "c", "d"};

    for (int i = 0; i < 4; i++)
    {
        if(find(n, lookup[i]))
        {
            printf("%s exists\n", lookup[i]);
        }
        else
        {
            printf("%s does not exist\n", lookup[i]);
        }
    }

    destroy(&n);

     printf("%s\n", (n == NULL) ? "n is null" : "n is not null");

}

void test_hash(void)
{
    printf("%i\n", hash("a"));
    printf("%i\n", hash("aa"));
}