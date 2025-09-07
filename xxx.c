#include<stdio.h>
#include<conio.h>
int main()
{
    int  R,M,D,C,L,X,V,I,H=0;
        char roman_string= ' ';

    printf("\n\nEnter number here:  ");
    scanf("%d",&R);


    M=R/1000;


    L=R%1000%500%100/50;
    X=R%1000%500%100%50/10;
    V=R%1000%500%100%50%10/5;
    I=R%1000%500%100%50%10%5/1;


      if(R>3000){
           roman_string= 'A';
           }
       if(M==3){
           roman_string= 'B';

           }
       if(M==2){
           roman_string= 'C';
           }
       if(M==1){
           roman_string= 'D';
           }
            D=R%1000/500;

       if((D==1) && (C==4)){
           roman_string= 'E';
           }
       if ((D==1) && (C!=4)){
            roman_string='F';
            }
       if((D==0) && (C==4)){
            roman_string= 'G';

            }
            C=R%1000%500/100;

        if(C==3){
            roman_string= 'H';
            }

          if(C==2){
            roman_string= 'I';
            }

           if(C==1){
            roman_string= 'J';
            }

           if((L==1) && (X==4)){
            roman_string= 'K';
            }
            if((L==1) && (X!=4)){
            roman_string='L';
            }
            if((L==0) && (X==4)){
            roman_string='M';
            }
            if(X==1){
            roman_string='N';
            }
            if(X==2){
            roman_string='O';
            }
            if(X==3){
            roman_string='P';
            }
            if((V==1) &&(I!=4)){
            roman_string='Q';
            }

       if(I==1){
            roman_string='R';
            }
       if(I==2) {
            roman_string='S';
            }

        if(I==3) {
            roman_string='T';
            }

    if((I==4) && (V%2==1)) {
            roman_string='U';
            }

    if((I==4) && (V%2==0)){
            roman_string='V';
            }




        switch (roman_string)
        {
            case 'A' :
                printf("Invalid Input");

        break;

         case 'B':
        printf("MMM");
        break;



        case 'C':
        printf("MM");
        break;


        case 'D':
        printf("M");
        break;



        case 'E':
        printf("CM");
        break;


        case 'F':
        printf("D");
        break;


        case 'G':
        printf("CD");
        break;

        case 'H':
        printf("CCC");
        break;


       case 'I':
        printf("CC");
        break;



    case 'J':
        printf("C");
    break;


    case 'K':
        printf("XC");
    break;


    case 'L':
        printf("L");
    break;


    case 'M':
        printf("XL");
    break;


    case 'N':
        printf("X");
    break;


    case'O':
        printf("XX");
    break;


    case 'P':
        printf("XXX");
    break;


    case 'Q':
        printf("V");
    break;


    case 'R':
        printf("I");
    break;


    case 'S':
        printf("II");
    break;


    case 'T':
        printf("III");
    break;


    case 'U':
        printf("IX");
    break;


    case 'V':
     printf("IV" );
    break;

}


    getch();
    return 0;
}
