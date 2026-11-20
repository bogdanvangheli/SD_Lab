    #include <iostream>
    #include <stdio.h>
    #include <stdlib.h>

    using namespace std;

    void Line(int lf, int lin, int mid, int rt, int operand = 2 )
    {
        int i, j;
        printf("\n%c", lf);

        for (j=1; j<=operand; j++)
        {
            for(i=1; i<=3; i++) printf("%c", lin);
            printf("%c", mid);
        }

        for(i=1; i<=10; i++) printf("%c", lin);
        printf("%c", rt);

    }

    void OperatiiBinare(int key)
    {
        unsigned a, b, rez;
        int n = 2;

        cout <<"\n\t" << key << ". " ;
        switch(key){
            case 2: cout << "Conjuctia"<< endl; break;
            case 3: cout << "Disjuctia"<< endl; break;
            case 4: cout << "Diferenta"<< endl; break;
            case 5: cout << "Diferenta Simetrica"<< endl; break;
            case 6: cout << "Conectourl Sheffer"<< endl; break;
            case 7: cout << "Conectourl Pierce"<< endl; break;
            case 8: cout << "Implicatie"<< endl; break;
            case 9: cout << "Echvivalentia"<< endl; break;
        }

        Line(201,205,209,187, n);

        switch (key){
            case 2: printf("\n%c A %c B %c A and B %2c", 186, 179, 179, 186); break;
            case 3: printf("\n%c A %c B %c A or B %3c", 186, 179, 179, 186);break;
            case 4: printf("\n%c A %c B %c A - B %4c", 186, 179, 179, 186);break;
            case 5: printf("\n%c A %c B %c A xor B %2c", 186, 179, 179, 186);break;
            case 6: printf("\n%c A %c B %c A nand B %c", 186, 179, 179, 186);break;
            case 7: printf("\n%c A %c B %c A nor B %2c", 186, 179, 179, 186);break;
            case 8: printf("\n%c A %c B %c A => B %3c", 186, 179, 179, 186);break;
            case 9: printf("\n%c A %c B %c A == B %3c", 186, 179, 179, 186);break;
        }

        Line(199, 196, 197, 182, n);

        for(a=0; a<=1; a++)
        {
            for(b=0; b<=1; b++)
            {
                switch(key)
                {
                    case 2: rez = a&b; break;
                    case 3: rez = a|b; break;
                    case 4: rez = a & (!b); break;
                    case 5: rez = a ^ b; break;
                    case 6: rez = !(a&b); break;
                    case 7: rez = !(a|b); break;
                    case 8: rez = !a | b; break;
                    case 9: rez = a == b; break;
                }

                printf("\n%c %d %c %d %c %5d %4c ", 186, a, 179, b, 179, rez, 186);
            }
        }

        Line(200,205,207,188, n);
    }

    void ProblemaSimpla()
    {
        unsigned a, b, c, d, rez;
        int n = 4;

        cout << "\n\t10. Problema simpla (4 variabile)" << endl;
        cout << "\n\tF = (A or B) and (not C or D)" << endl;
        cout << "\n\tIura vrea sa faca frigarui in parc, dar nu vrea sa mearga singur." << endl;
        cout << "\tVa merge doar daca merge cel putin un prieten si daca afara nu ploua" << endl;
        cout << "\tsau are umbrela." << endl;
        cout << "\n\tA: merge Bogdan" << endl;
        cout << "\tB: merge Ilia" << endl;
        cout << "\tC: afara ploua" << endl;
        cout << "\tD: are umbrela" << endl;

        Line(201,205,209,187, n);
        printf("\n%c A %c B %c C %c D %c F %8c", 186, 179, 179, 179, 179, 186);
        Line(199,196,197,182, n);

        for(a=0; a<=1; a++)
            for(b=0; b<=1; b++)
                for(c=0; c<=1; c++)
                    for(d=0; d<=1; d++)
                    {
                        rez = (a | b) & (!c | d);
                        printf("\n%c %d %c %d %c %d %c %d %c %5d %4c ", 186, a, 179, b, 179, c, 179, d, 179, rez, 186);
                    }

        Line(200,205,207,188, n);
    }

    void ProblemaGenerala()
    {
        unsigned x, y, z, v, rez;
        int n = 4;

        cout << "\n\t11. Problema Generala (4 variabile)" << endl;
        cout << "\n\tX: Dreptele a si b sunt paralele" << endl;
        cout << "\tY: Dreptele a si b sunt concurente" << endl;
        cout << "\tZ: Dreptele a si b sunt strambrate" << endl;
        cout << "\tV: Dreptele a si b se afla in acelasi plan" << endl;
        cout << "\n\tPremise: (X or Y or Z), (not Y and V), (Z => not V)" << endl;
        cout << "\tF = (X or Y or Z) and (not Y and V) and (not Z or not V)" << endl;

        Line(201,205,209,187, n);
        printf("\n%c X %c Y %c Z %c V %c F %8c", 186, 179, 179, 179, 179, 186);
        Line(199,196,197,182, n);

        for(x=0; x<=1; x++)
            for(y=0; y<=1; y++)
                for(z=0; z<=1; z++)
                    for(v=0; v<=1; v++)
                    {
                        rez = (x | y | z) & (!y & v) & (!z | !v);
                        printf("\n%c %d %c %d %c %d %c %d %c %5d %4c ", 186, x, 179, y, 179, z, 179, v, 179, rez, 186);
                    }

        Line(200,205,207,188, n);

        cout << "\n\n\tF = 1 doar pentru X=1, Y=0, Z=0, V=1" << endl;
        cout << "\tConcluzie: X and V" << endl;
        cout << "\tDreptele sunt in acelasi plan si sunt paralele." << endl;
    }

    int main()
    {
        system("color F0");

        unsigned a,b;

        cout << "Proiect nr.1, elaborat de Vangheli Bogdan" << endl;

        cout << "Tema: Operatii cu multimi.Conectori logici." << endl;

        cout << "1. Negatia" << endl;

        Line(201,205,209,187, 1);
        printf("\n%c A %c not A %4c", 186, 179, 186);
        Line(199,196,197,182, 1);
        for(a=0; a<=1; a++)
        {
            printf("\n%c %d %c %5d %4c", 186, a, 179, !a, 186);
        }
        Line(200,205,207,188, 1);

        OperatiiBinare(2);
        OperatiiBinare(3);
        OperatiiBinare(4);
        OperatiiBinare(5);
        OperatiiBinare(6);
        OperatiiBinare(7);
        OperatiiBinare(8);
        OperatiiBinare(9);
        ProblemaSimpla();
        ProblemaGenerala();

        return 0;
    }
