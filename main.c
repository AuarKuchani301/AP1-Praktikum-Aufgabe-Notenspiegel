/*
#include <stdio.h>

int main()
{
    printf("\n\n\n\t\tProgramm Notspiegel\n\n");
    int i ;
    const int groesse = 5 ;
    int  noten[groesse] ;

    float studentensumme ;
    float notensumme ;
    float durchschnittsnote ;
    float durchfallquote ;


    for(i=0 ;i<groesse ;i++)
    {
     printf("Bitte geben Sie die Zahl der Arbeiten mit der Note %d ein:  ",i+1);
     scanf("%d",&noten[i]);

     studentensumme += noten[i] ;
     notensumme += noten[i]*(i+1) ;
    }
    durchschnittsnote = (notensumme/studentensumme);
    durchfallquote = noten[4]/ (studentensumme *0.01);




    printf("-----------------------------------------------------------------");
    printf("\n| Note\t| 1\t | 2\t | 3\t | 4\t | 5\t | Gesamt\t|");
    printf("\n-----------------------------------------------------------------");
    printf("\n| Anzahl|  %d\t | %d\t | %d\t | %d\t | %d\t |%f\t|",noten[0],noten[1],noten[2],noten[3],noten[4],notensumme);
    printf("\n-----------------------------------------------------------------\n");

    printf("\nDurchschnittsnote ist: %.2f %%\n",durchschnittsnote);
    printf("\nDurchfallquote ist: %.2f %%\n",durchfallquote);

    return 0;

}
*/
#include <stdio.h>

int main()
{
    const int grosse = 5 ;
    int i, noten[grosse];
    int studentensumme , notensumme ;
    float durchschnittsnote , durchfallquote ;
    for ( i = 0 ; i<grosse ; i++)
    {
    printf("\nBitte gaben Sie die Anzahl der Arbeiten mit der Note %d ein: ",i+1);
    scanf(" %d",&noten[i]);
    studentensumme += noten[i] ;        // عدد كل علامة لانها من طالب واحد
    notensumme     +=  noten[i] * (i+1);    //    عدد كل علامة ضرب العلامة نفسها
    }
    printf("\nDer Notenspiegel sieht so aus:\n\n");

    printf("\n------------------------------------------------------------------------");
    printf("\n| Note   |   1     |   2     |   3     |   4     |   5    |   Gesamt   |");
    printf("\n------------------------------------------------------------------------");
    printf("\n| Anzahl |    %d    |    %d    |    %d   |    %d   |    %d    |   %d      |",noten[0],noten[1],noten[2],noten[3],noten[4],notensumme);
    printf("\n------------------------------------------------------------------------");

    durchschnittsnote = notensumme / studentensumme ;
    durchfallquote    = noten[4] / (studentensumme * 0.01) ;    // prozent 0.01

    printf("\n\tDurchschnittsnote: %.2f %%",durchschnittsnote);
    printf("\n\tDurchfallquote   : %.2f %%\n\n",durchfallquote);


    return 0;
}

