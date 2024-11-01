#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    const int SASSO = 0;
    const int FORBICE = 1;
    const int CARTA = 2;
    int sceltaUtente = 0;
    int sceltaComputer = 0;
    int vinciteUtente = 0;
    int vinciteComputer = 0;

    while (sceltaUtente != -1)
    {
        srand(time(NULL));
        int numeroCasuale = rand() % 3;
        switch (numeroCasuale)
        {
        case 0:
            sceltaComputer = SASSO;
            break;
        case 1:
            sceltaComputer = FORBICE;
            break;
        case 2:
            sceltaComputer = CARTA;
            break;
        default:
            sceltaComputer = SASSO;
            break;
        }

        printf("Sasso, carta e forbice\n");
        printf("|0|Sasso\n|1|Forbice\n|2|Carta\n|-1|Termine Gioco\n");
        scanf("%d", &sceltaUtente);

        if (sceltaUtente == sceltaComputer)
        {
            printf("Pareggio\n");
        }
        else if (sceltaUtente == SASSO && sceltaComputer == CARTA)
        {
            printf("Vince il computer\n");
            vinciteComputer++;
        }
        else if (sceltaUtente == SASSO && sceltaComputer == FORBICE)
        {
            printf("Vince l'utente\n");
            vinciteUtente++;
        }
        else if (sceltaUtente == CARTA && sceltaComputer == SASSO)
        {
            printf("Vince l'utente\n");
            vinciteUtente++;
        }
        else if (sceltaUtente == CARTA && sceltaComputer == FORBICE)
        {
            printf("Vince il computer\n");
            vinciteComputer++;
        }
        else if (sceltaUtente == FORBICE && sceltaComputer == CARTA)
        {
            printf("Vince l'utente\n");
            vinciteUtente++;
        }
        else if (sceltaUtente == FORBICE && sceltaComputer == SASSO)
        {
            printf("Vince il computer\n");
            vinciteComputer++;
        }
    }

    if (vinciteUtente > vinciteComputer)
        printf("Il computer ha vinto più volte\n");
    else if (vinciteUtente < vinciteComputer)
        printf("L'utente ha vinto più volte\n");
    else
        printf("Pareggio\n");

    return 0;
}
