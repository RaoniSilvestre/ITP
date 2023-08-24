#include <stdio.h>

int main() {
    int total_trails;

    scanf("%d", &total_trails);

    if (total_trails<5)
    {
        printf("Iniciante");
    } else if (total_trails >=5)
    {
        int health;
        if (total_trails<20)
        {
            scanf("%d", &health);
            if (health==0)
            {
                printf("Iniciante");
            } else{
                printf("Intermediário");
            }
            
        } else{
            scanf("%d", &health);
            if (health==0)
            {
                printf("Intermediário");
            } else{
                printf("Avançado");
            }
        }
        
    }
    
    
    return 0;
}