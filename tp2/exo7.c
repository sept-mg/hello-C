#include <stdio.h>

int main()
{
    float solde = 0; char operation; float current = 0;
    while (1)
    {
        solde += current;
        printf("solde : %f\n", solde);
        do
        {
            
            printf("retrait (0) ou dépôt (1) : ");
            scanf("%hhu", &operation);
            if(operation!=1 && operation!=0) printf("opération inconnue\n");
            else
            {
                printf("de combien : ");
                scanf("%f", &current);
                if (operation == 0 && current > solde)
                {
                    printf("solde insuffisant\n");
                }

                else if(!operation)
                {
                    current*= -1;
                }
                
                

            }
        } while ((operation!=1 && operation!=0) || (operation == 0 && current > solde));
        
        
    }
    

    return 0;
    
}