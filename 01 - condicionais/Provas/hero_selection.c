#include <stdio.h>

int main()
{
    int heroQntd, heroClass, monsterClass;
    scanf("%d %d %d", &heroQntd, &heroClass, &monsterClass);
    switch (monsterClass)
    {
    case 1:
        if (monsterClass == heroClass)
        {
            if (heroQntd >= 3)
            {
                printf("Heróis vencerão!");
            }
            else
            {
                printf("Melhor chamar Saitama!");
            }
        }
        else if (heroClass > monsterClass)
        {
            if (heroQntd >= 1)
            {
                printf("Heróis vencerão!");
            }
            else
            {
                printf("Melhor chamar Saitama!");
            }
        }
        else
        {
            printf("Melhor chamar Saitama!");
        };
        break;
    case 2:
        if (monsterClass == heroClass)
        {
            if (heroQntd >= 3)
            {
                printf("Heróis vencerão!");
            }
            else
            {
                printf("Melhor chamar Saitama!");
            }
        }
        else if (heroClass > monsterClass)
        {
            if (heroQntd >= 1)
            {
                printf("Heróis vencerão!");
            }
            else
            {
                printf("Melhor chamar Saitama!");
            }
        }
        else
        {
            printf("Melhor chamar Saitama!");
        };
        ;
        break;
    case 3:
        if (monsterClass == heroClass)
        {
            if (heroQntd >= 3)
            {
                printf("Heróis vencerão!");
            }
            else
            {
                printf("Melhor chamar Saitama!");
            }
        }
        else if (heroClass > monsterClass)
        {
            if (heroQntd >= 1)
            {
                printf("Heróis vencerão!");
            }
            else
            {
                printf("Melhor chamar Saitama!");
            }
        }
        else
        {
            printf("Melhor chamar Saitama!");
        };
        break;
    case 4:
        if (monsterClass == heroClass)
        {
            if (heroQntd >= 3)
            {
                printf("Heróis vencerão!");
            }
            else
            {
                printf("Melhor chamar Saitama!");
            }
        }
        else if (heroClass > monsterClass)
        {
            if (heroQntd >= 1)
            {
                printf("Heróis vencerão!");
            }
            else
            {
                printf("Melhor chamar Saitama!");
            }
        }
        else if (heroClass < monsterClass)
        {
            printf("Melhor chamar Saitama!");
        }
        break;
    case 5:
        if (heroClass == 5 && heroQntd>=1)
        {
            printf("Heróis vencerão!");
        }
        else
        {
            if (monsterClass == heroClass)
            {
                if (heroQntd >= 3)
                {
                    printf("Heróis vencerão!");
                }
                else
                {
                    printf("Melhor chamar Saitama!");
                }
            }
            else if (heroClass > monsterClass)
            {
                if (heroQntd >= 1)
                {
                    printf("Heróis vencerão!");
                }
                else
                {
                    printf("Melhor chamar Saitama!");
                }
            }
            else
            {
                printf("Melhor chamar Saitama!");
            };
        }

        break;
    }

    return 0;
}