#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<strings.h>
int table[4][4];
int a[16]={1,6,3,4,5,2,7,8,11,15,9,12,13,14,10,0};
char name[20];
int i,z=1,j,n,option,ch;
FILE *fp, *ft;
int countw=0,countb=0,turn=0;
char board[8][8],initialpos1,finalpos1,initialpos2,finalpos2;
int createboard() ;
int display2();
int movecoins();
int pawn(char x,char y,char z,char w);
int horse(char x,char y,char x1,char y1);
int rook(char x,char y,char x1,char y1);
int bishop(char x,char y,char x1,char y1);
int queen(char x,char y,char x1,char y1);
int king(char x,char y,char x1,char y1);
int check();
int checkmate();
int profile();
int contacts();
int newcontacts();
int editcontact();
int deletecontacts();
int display1();
void display();
void movenumbers();
void moveleft();
void moveright();
void movedown();
void moveup();
void settable();
int checkforfinish();
int randa();
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
void factorial();
void operations();
int array[4][4]={0};
int check1(int i);
int check2(int i);
void game1(char c);
void right1();
void left1();
void up1();
void down1();
void print1();
int search1(int key);
void  bookTicket(char theatre[5][9],int rows , int cols , char theatre3[5][9] , int rows1 , int cols1  ,char theatre8[5][9] , int rows2, int cols2 ,char theatre9[5][9] , int rows3 , int cols3 , char theatre10[5][9], int rows4 , int cols4 ,char theatre11[5][9] , int rows5 , int cols5 ,char  theatre12[5][9] , int rows6 , int cols6 , char theatre13[5][9] , int rows7 , int cols7 );
void  cancelTicket(char theatre[5][9],int rows , int cols , char theatre3[5][9] , int rows1 , int cols1  ,char theatre8[5][9] , int rows2, int cols2 ,char theatre9[5][9] , int rows3 , int cols3 , char theatre10[5][9], int rows4 , int cols4 ,char theatre11[5][9] , int rows5 , int cols5 ,char  theatre12[5][9] , int rows6 , int cols6 , char theatre13[5][9] , int rows7 , int cols7 );
void  printTheatre(char theatre[5][9]);
void makeSeatsEmpty(char theatre[5][9]);
void  timings(char theatre[5][9],int rows , int cols , char theatre3[5][9] , int rows1 , int cols1  ,char theatre8[5][9] , int rows2, int cols2 ,char theatre9[5][9] , int rows3 , int cols3 , char theatre10[5][9], int rows4 , int cols4 ,char theatre11[5][9] , int rows5 , int cols5 ,char  theatre12[5][9] , int rows6 , int cols6 , char theatre13[5][9] , int rows7 , int cols7 );
void  timings1(char theatre[5][9],int rows , int cols , char theatre3[5][9] , int rows1 , int cols1  ,char theatre8[5][9] , int rows2, int cols2 ,char theatre9[5][9] , int rows3 , int cols3 , char theatre10[5][9], int rows4 , int cols4 ,char theatre11[5][9] , int rows5 , int cols5 ,char  theatre12[5][9] , int rows6 , int cols6 , char theatre13[5][9] , int rows7 , int cols7 );
int theatreBookingSystem(char theatre[5][9] , int rows , int cols , int no ,  char theatre3[5][9] , int rows1, int cols1 , char theatre8[5][9] , int rows2, int cols2 , char theatre9[5][9] , int rows3, int cols3 , char theatre10[5][9] , int rows4, int cols4 , char theatre11[5][9] , int rows5, int cols5 , char theatre12[5][9] , int rows6 , int cols6 , char theatre13[5][9] , int rows7 , int cols7);
void line();
void price();
void price2();
void booking(char theatre[5][9] , int rows , int cols);
void cancel(char theatre[5][9] ,int rows , int cols);
void empty(char theatre1[5][9]  ,char theatre2[5][9] , char theatre4[5][9] , char theatre5[5][9] , char theatre6[5][9] ,char  theatre7[5][9],char theatre0[5][9],char theatre20[5][9],char theatre21[5][9]  ,char theatre22[5][9] ,char  theatre23[5][9] , char theatre24[5][9] ,char  theatre25[5][9] ,char  theatre26[5][9],char theatre27[5][9],char theatre28[5][9],char theatre29[5][9]  , char theatre30[5][9] , char theatre31[5][9] , char theatre32[5][9] , char theatre33[5][9] , char theatre34[5][9],char theatre35[5][9], char theatre36[5][9],char theatre37[5][9]  , char theatre38[5][9] , char theatre39[5][9] ,char  theatre40[5][9] ,char  theatre41[5][9] ,char  theatre42[5][9],char theatre43[5][9],char theatre44[5][9]);
void screen(char theatre1[5][9]  ,char theatre2[5][9] , char theatre4[5][9] , char theatre5[5][9] , char theatre6[5][9] ,char  theatre7[5][9],char theatre0[5][9],char theatre20[5][9],char theatre21[5][9]  ,char theatre22[5][9] ,char  theatre23[5][9] , char theatre24[5][9] ,char  theatre25[5][9] ,char  theatre26[5][9],char theatre27[5][9],char theatre28[5][9],char theatre29[5][9]  , char theatre30[5][9] , char theatre31[5][9] , char theatre32[5][9] , char theatre33[5][9] , char theatre34[5][9],char theatre35[5][9], char theatre36[5][9],char theatre37[5][9]  , char theatre38[5][9] , char theatre39[5][9] ,char  theatre40[5][9] ,char  theatre41[5][9] ,char  theatre42[5][9],char theatre43[5][9],char theatre44[5][9]);
char theatre1[5][9]  , theatre2[5][9] ,  theatre4[5][9] ,  theatre5[5][9] ,  theatre6[5][9] ,  theatre7[5][9], theatre0[5][9], theatre20[5][9],theatre21[5][9]  , theatre22[5][9] ,  theatre23[5][9] ,  theatre24[5][9] ,  theatre25[5][9] ,  theatre26[5][9], theatre27[5][9], theatre28[5][9],theatre29[5][9]  , theatre30[5][9] ,  theatre31[5][9] ,  theatre32[5][9] ,  theatre33[5][9] ,  theatre34[5][9], theatre35[5][9], theatre36[5][9],theatre37[5][9]  , theatre38[5][9] ,  theatre39[5][9] ,  theatre40[5][9] ,  theatre41[5][9] ,  theatre42[5][9], theatre43[5][9], theatre44[5][9];
int main()
{
int choicee;
char proceed;
system("color F0");
printf("WELCOME to RSK APPSTORE \n\n");
printf("\nEnter any key to proceed to Main Menu\n");
scanf("%c",&proceed);
system("cls");
system("color 09");
menu();
return 0;
}
void  menu()
{
int choice;
printf("                   Main Menu :) \n\n");
line();
printf("\n\t\t1. Mini Book My Show\n \t\t2. Calculator \n \t\t3. 15puzzle\n\t\t4. Contacts\n\t\t5. 2048 game\n\t\t6. Chess(Partially Executed) \n\t\t7. Exit \n");
line();
printf("\n\n");
printf("                     What you want to do today?\n");
printf("                        Enter ur choice\n");
scanf("%d",&choice);
system("cls");
system("color 9F");
  switch(choice)
{
    case 1: mini_book_my_show();
    break;

    case 2: calci();
    break;

    case 3: puzzle();
    break;
    case 4: contacts();
    break;
    case 5: game_2048();
        break;
    case 6: chess();
    break;
    case 7:
    printf("\n Exiting\n Please visit again\n Thanks :) \n");
    line();
    exit(0);
    default : printf("\nInvalid choice , Please try after sometime");
    break;
}
}
int calci()
{
   char choice;
   system("cls");
   operations();
    while(1)
    {
        printf("\n Which operation you want to do?? \n");
        choice=getchar();
        switch(choice)
        {
            case '+': addition();
                      break;

            case '-': subtraction();
                      break;

            case '*': multiplication();
                      break;

            case '/': division();
                      break;

            case '.': modulus();
                      break;

            case '!': factorial();
                      break;

            case '^': power();
                      break;

            case 'e':
            case 'E':
            system("cls");
            menu();
            break;


            default : system("cls");
                      printf("\n  Invalid option \n Please try again \n ");
                      operations();
        }
    }
}
void operations()
{
    system("cls");
    line();
    printf("\n \t\t\t\t\t\t\t\t\t\t\t\tWelcome to Calculator \n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tWhat you want do ? \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tEnter + symbol for Addition \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tEnter - symbol for Subtraction \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tEnter * symbol for Multiplication \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tEnter / symbol for Division \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tEnter . symbol for Modulus\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tEnter ^ symbol for Power \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tEnter ! symbol for Factorial \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tEnter 'E' or 'e' to quit \n");
    line();
}

void addition()
{
    int n, sum=0, count=0, number;
    char enter;
    system("cls");
    printf("\nEnter the number of elements you want to add : ");
    scanf("%d",&n);
    system("cls");
    printf("Please enter %d numbers one after the other :  \n",n);
    while(count<n)
    {
        scanf("%d",&number);
        sum=sum+number;
        count++;
    }
    printf("Sum of %d numbers = %d \n",n,sum);
    printf("\n");
    enter=getche();
    calci();
}

void subtraction()
{
    int no1, no2, diff = 0 ;
    char enter;
    system("cls");
    printf("\n Enter first number  : ");
    scanf("%d", &no1);
    printf("\n Enter second number : ");
    scanf("%d", &no2);
    system("cls");
    diff = no1 - no2;
    printf("\n%d - %d = %d\n", no1, no2, diff);
    printf("\n");
    enter=getche();
    calci();
}

void multiplication()
{
    int n, mul=1, count=0, number;
    char enter;
    system("cls");
    printf("\nEnter the number of elements on which you want to perform multiplication : ");
    scanf("%d",&n);
    system("cls");
    printf("Please enter %d numbers one after the other :  \n",n);
    while(count<n)
    {
        scanf("%d",&number);
        mul=mul*number;
        count++;
    }
    printf("Product of %d numbers = %d \n",n,mul);
    printf("\n");
    enter=getche();
    calci();
}

void division()
{
    int no1, no2, div=0;
    char enter;
    system("cls");
    printf("\nEnter first number : ");
    scanf("%d", &no1);
    printf("\nEnter second number : ");
    scanf("%d", &no2);
    div=no1/no2;
    printf("\nDivision of %d and %d = %d\n",no1,no2,div);
    printf("\n");
    enter=getche();
    calci();
}

void modulus()
{
    int no1, no2, mod=0;
    char enter;
    system("cls");
    printf("\nEnter first number   : ");
    scanf("%d", &no1);
    printf("\nEnter second number  : ");
    scanf("%d", &no2);
    mod=no1%no2;
    printf("\nModulus of %d and %d = %d\n",no1,no2,mod);
    printf("\n");
    enter=getche();
    calci();
}

void power()
{
    int no1,no2,p;
    char enter;
    system("cls");
    printf("\nEnter the base no \n");
    scanf("%d",&no1);
    printf("Enter exponent(power)  : ");
    scanf("%d",&no2);
    p=pow(no1,no2);
    printf("\n%d to the power %d = %d ",no1,no2,p);
    printf("\n");
    enter=getche();
    calci();
}

void factorial()
{
    int i,fact=1,no;
    char enter;
    system("cls");
    printf("\nEnter a number to find factorial : ");
    scanf("%d",&no);
    if (no<0)
    {
        printf("\nPlease enter a positive number to");
        printf(" find factorial and try again. \n");
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0  \n");
        return 1;
    }

    for(i=1;i<=no;i++)
    fact=fact*i;
    printf("\n");
    printf("Factorial of entered number %d is:%d\n",no,fact);
    printf("\n");
    enter=getche();
    calci();
}
int puzzle()
{
    char key;
    int i,set;
system("color F0");
    printf("\t\t   WELCOME TO THE 15 PUZZLE GAME  :)  \n\n\n");
    printf("\t\t\t    Press Enter to START \n\n");
    scanf("%c",&key);
    if(key=='\n')
    {
        printf("\t\tPress 1 to set puzzle\n\t\tPress 2 for random puzzle");
        scanf("%d",&set);
     if(set==1)
    settable();
   if(set==2)
    randa();
    }

    return 0;
}
int randa()
{
    int i,j,k=15;
    printf("\n\t\tPlease enter the numbers for the top row from left to right\n");
    for(i = 0; i < 4; i++)
    {

        for(j = 0; j < 4; j++)
        {
            table[i][j]=a[k--];
        }
    }

    display();
}

void settable()
{
    int i,j;
    printf("\nPlease enter the numbers for the top row from left to right\n");
    for(i = 0; i < 4; i++)
    {

        for(j = 0; j < 4; j++)
        {
            scanf("%d", &table[i][j]);
        }
    }

    display();
}

void display()
{

    int i,j,a;

      system("cls");
    for(i = 0; i < 4; i++)
    {
        printf("\n\n");
        for(j = 0; j < 4; j++)
        {
            if(table[i][j] == 0)
                printf("      ");
            else if(table[i][j] < 10)
                printf(" %d    ",table[i][j]);
            else
                printf("%d    ",table[i][j]);
        }
    }
    printf("\n");
    a=checkForFinish();
   // printf("a value %d",a);
    if(a==15)
    {
        system("cls");
        printf("\n\n\n\t\t***You won***\n\n\n");

    }
    else{


    moveNumbers();
}}
void moveUp()
{
    int temp,i,j;
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(table[i][j] == 0 && i != 0)
            {
                temp = table[i-1][j];
                table[i-1][j] = 0;
                table[i][j] = temp;
            }
        }
    }
}
void moveDown()
{
    int temp,i,j;
    for(i = 3; i >= 0; i--)
    {
        for(j = 3; j >= 0; j--)
        {
            if(table[i][j] == 0 && i != 3)
            {
                temp = table[i+1][j];
                table[i+1][j] = 0;
                table[i][j] = temp;
            }
        }
    }
}
void moveRight()
{
    int temp,i,j;
    for(i = 3; i >= 0; i--)
    {
        for(j = 3; j >= 0; j--)
        {
            if(table[i][j] == 0 && j != 3)
            {
                temp = table[i][j+1];
                table[i][j+1] = 0;
                table[i][j] = temp;
            }
        }
    }
}
void moveLeft()
{
    int temp,i,j;
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(table[i][j] == 0 && j != 0)
            {
                temp = table[i][j-1];
                table[i][j-1] = 0;
                table[i][j] = temp;
            }
        }
    }
}
void moveNumbers()
{
    int key;
    printf("\n\nMake your move : [ A(Left), D(Right) , W(Up)  or S(Down) ] \n");
    key = getchar();
    if(key == 'a' || 'A')
        moveLeft();
    if(key == 'd' || 'D')
        moveRight();
    if(key == 'w' || 'W')
        moveUp();
    if(key == 's' || 'S')
        moveDown();
    display();


}
int checkForFinish()
{
    int i,j,temp,result;
    result = 0;
    temp = 1;
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(table[i][j] == temp)
            {
                temp += 1;
            }
            else{
                temp--;
            }
        }
    }
    if(temp == 15)
        result = 1;
    return temp;
}

int  mini_book_my_show()
{
    empty( theatre1  , theatre2 ,  theatre4 ,  theatre5 ,  theatre6 ,  theatre7, theatre0, theatre20, theatre21  , theatre22 ,  theatre23 , theatre24 ,  theatre25 ,  theatre26, theatre27, theatre28, theatre29  ,  theatre30 ,  theatre31 ,  theatre32 ,  theatre33 ,  theatre34, theatre35,  theatre36, theatre37  ,  theatre38 ,  theatre39 ,  theatre40 ,  theatre41 ,  theatre42, theatre43, theatre44);
    screen( theatre1  , theatre2 ,  theatre4 ,  theatre5 ,  theatre6 ,  theatre7, theatre0, theatre20, theatre21  , theatre22 ,  theatre23 , theatre24 ,  theatre25 ,  theatre26, theatre27, theatre28, theatre29  ,  theatre30 ,  theatre31 ,  theatre32 ,  theatre33 ,  theatre34, theatre35,  theatre36, theatre37  ,  theatre38 ,  theatre39 ,  theatre40 ,  theatre41 ,  theatre42, theatre43, theatre44);
    system("color 0f");
    return 0;
}
void screen(char theatre1[5][9]  ,char theatre2[5][9] , char theatre4[5][9] , char theatre5[5][9] , char theatre6[5][9] ,char  theatre7[5][9],char theatre0[5][9],char theatre20[5][9],char theatre21[5][9]  ,char theatre22[5][9] ,char  theatre23[5][9] , char theatre24[5][9] ,char  theatre25[5][9] ,char  theatre26[5][9],char theatre27[5][9],char theatre28[5][9],char theatre29[5][9]  , char theatre30[5][9] , char theatre31[5][9] , char theatre32[5][9] , char theatre33[5][9] , char theatre34[5][9],char theatre35[5][9], char theatre36[5][9],char theatre37[5][9]  , char theatre38[5][9] , char theatre39[5][9] ,char  theatre40[5][9] ,char  theatre41[5][9] ,char  theatre42[5][9],char theatre43[5][9],char theatre44[5][9])
{
    int choice1,i,j,ch;
    system("color 1F");
    line();
    printf("\nWelcome to Mini Book My Show \nWe have four screens with 4 different movies i.e \n 1. Screen1 - Interstellar  \n 2. Screen2 - Dawn Of the Planet Of the Apes\n 3. Screen3 - Logan \n 4. Screen4 - John Wick 2 \n 5. Exit\n");
    line();
    printf("\nEnter your choice\n");
    scanf("%d",&choice1);
    system("cls");
    line();
    if(choice1==1)
    {
    printf("\nScreen %d\n", choice1);
    theatreBookingSystem(theatre1,5,9,choice1, theatre2 , 5 , 9 , theatre4 , 5, 9 , theatre5 , 5 , 9 , theatre6, 5 , 9 , theatre7 , 5 , 9 , theatre0 , 5 , 9 , theatre20 , 5 , 9 );
    }
    else if(choice1==2)
    {
    printf("\nScreen %d\n", choice1);
    theatreBookingSystem(theatre21,5,9,choice1, theatre22 , 5 , 9 , theatre23 , 5, 9 , theatre24 , 5 , 9 , theatre25, 5 , 9 , theatre26 , 5 , 9 , theatre27 , 5 , 9 , theatre28 , 5 , 9 );
    }
    else if(choice1==3)
    {
    printf("\nScreen %d\n", choice1);
    theatreBookingSystem(theatre29,5,9,choice1, theatre30 , 5 , 9 , theatre31 , 5, 9 , theatre32 , 5 , 9 , theatre33, 5 , 9 , theatre34 , 5 , 9 , theatre35 , 5 , 9 , theatre36 , 5 , 9 );
    }

    else if(choice1==4)
   {
    printf("\nScreen %d\n", choice1);
    theatreBookingSystem(theatre37,5,9,choice1, theatre38 , 5 , 9 , theatre39 , 5, 9 , theatre40 , 5 , 9 , theatre41, 5 , 9 , theatre42 , 5 , 9 , theatre43 , 5 , 9 , theatre44 , 5 , 9 );
   }
    else if(choice1==5)
    {
    system("cls");
    menu();
    }
    else
    {
    printf("\n Invalid Screen no \n Please try after some time\n Thanks ");
    return 1;
    }
}
void line()
{
    int i;
    for(i=0;i<10;i++)
    printf("--------");
}
int theatreBookingSystem(char theatre[5][9] , int rows , int cols , int no ,  char theatre3[5][9] , int rows1, int cols1 , char theatre8[5][9] , int rows2, int cols2 , char theatre9[5][9] , int rows3, int cols3 , char theatre10[5][9] , int rows4, int cols4 , char theatre11[5][9] , int rows5, int cols5 , char theatre12[5][9] , int rows6 , int cols6 , char theatre13[5][9] , int rows7 , int cols7)
{
    int choice,i,j,slot,show;
    line();
    while(1)
    {
    printf("\nWelcome to the Screen %d Booking System. \n What do you want to do ? \n 1.Book Ticket \n 2.Cancel Ticket\n 3.View Seats \n 4.Exit\n 5.Return to Main Menu\n \n ", no);
    scanf("%d",&choice);
    system("cls");
    line();
    printf("\n");
    switch(choice)
    {
        case 1: timings(theatre,rows,cols, theatre3 , rows1 , cols1 , theatre8 , rows2, cols2 , theatre9 , rows3 , cols3 , theatre10, rows4 , cols4 , theatre11 , rows5 , cols5 , theatre12 , rows6 , cols6 , theatre13 , rows7 , cols7);
        break;

        case 2: timings1(theatre,rows,cols, theatre3 , rows1 , cols1 , theatre8 , rows2, cols2 , theatre9 , rows3 , cols3 , theatre10, rows4 , cols4 , theatre11 , rows5 , cols5 , theatre12 , rows6 , cols6 , theatre13 , rows7 , cols7);
        break;
        case 3:
            line();
            printf("\n 1.Morning show\n 2.Matinee show\n 3.First show\n 4.Second show\n");
            printf("\nEnter which show seats you want to view\n");
            scanf("%d",&show);
            system("cls");
            line();
            switch(show)
            {
          case 1:
            printf(" You have selected to view morning show seats\n");
            system("cls");
                        system("color 91");

            printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
            printTheatre(theatre);
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
            printTheatre1(theatre3);
            line();
            break;
          case 2: printf(" You have selected to view matinee show seats\n");
            printTheatre(theatre8);
            printTheatre1(theatre9);
            line();
            break;
          case 3:  printf(" You have selected to view first show seats\n");
            printTheatre(theatre10);
            printTheatre1(theatre11);
            line();
            break;
          case 4: printf(" You have selected to view second show seats\n");
            printTheatre(theatre12);
            printTheatre1(theatre9);
            line();
            break;
            default: printf("\nInvalid choice\n");
            break;
            }
            break;
        case 4:
            printf("\n Exiting\n Please visit again\n Thanks :) \n");
            line();
            exit(0);
        break;
        case 5:
        screen( theatre1  , theatre2 ,  theatre4 ,  theatre5 ,  theatre6 ,  theatre7, theatre0, theatre20, theatre21  , theatre22 ,  theatre23 , theatre24 ,  theatre25 ,  theatre26, theatre27, theatre28, theatre29  ,  theatre30 ,  theatre31 ,  theatre32 ,  theatre33 ,  theatre34, theatre35,  theatre36, theatre37  ,  theatre38 ,  theatre39 ,  theatre40 ,  theatre41 ,  theatre42, theatre43, theatre44);
        default: printf("\nWrong choice\n\n Please try again\n\n");
    }
  }
  return 0;
}

void makeSeatsEmpty(char theatre[5][9])
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<9;j++)
        {
            theatre[i][j]='E';
        }
    }
}
void printTheatre(char theatre[5][9])
{
    int i,j,temp;
    temp=65;
    printf("----------------------------- ^``PLATINUM=100Rs``^---------------------------");
   printf("\n");
    for(j=0;j<9;j++)
     {
       printf("\t%d",j+1);
     }
     printf("\n");
     for(i=0;i<5;i++)
    {
        printf("%c:\t",temp);
        temp++;
        for(j=0;j<9;j++)
        {
         printf("%c\t",theatre[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void printTheatre1(char theatre[5][9])
{
    int i,j,temp;
    temp=65;
    printf("----------------------------- ^``GOLD=75Rs``^--------------------------------");
    printf("\n");
     for(i=0;i<5;i++)
    {
        printf("%c:\t",temp);
        temp++;
        for(j=0;j<9;j++)
        {
         printf("%c\t",theatre[i][j]);
        }
        printf("\n");
    }
    printf("\n");
printf("-----------------------``E~~EMPTY``--------------``B~~BOOKED``-----------------------");
}

void  bookTicket(char theatre[5][9],int rows , int cols , char theatre3[5][9] , int rows1 , int cols1  ,char theatre8[5][9] , int rows2, int cols2 ,char theatre9[5][9] , int rows3 , int cols3 , char theatre10[5][9], int rows4 , int cols4 ,char theatre11[5][9] , int rows5 , int cols5 ,char  theatre12[5][9] , int rows6 , int cols6 , char theatre13[5][9] , int rows7 , int cols7 )
{
int price1,more,decision,decision3;
price();
printf("\nPlease enter the price of the ticket which you want to book\n ");
scanf("%d",&price1);
system("cls");
line();
if(price1==100)
{
    printf("\n You are in the %d rupees ticket slot\n\n ",price1);
    booking(theatre , rows , cols);

}
else if(price1==75)
{
    printf("\n You are in the %d rupees ticket slot\n\n ",price1);
    booking(theatre3 , rows1 , cols1);
}
else
{
 printf("\nSorry this price ticket doesn't exist \n Please try after some time \n Thank you\n");
 exit(0);
}
printf("\n What you want to do \n 1. Want to book more tickets for the same movie\n 2. Want to cancel tickets on the same movie \n 3. Return to Screen menu \n 4. Return to Main menu \n 5. exit \n");
scanf("%d",&more);
system("cls");
line();
printf("\n");
if(more==1)
{
printf("\nDo you want to book more tickets in the same show , if so enter 1 else enter 2\n");
scanf("%d",&decision);
    system("cls");
if(decision==1)
bookTicket(theatre,rows,cols, theatre3 , rows1 , cols1 , theatre8 , rows2, cols2 , theatre9 , rows3 , cols3 , theatre10, rows4 , cols4 , theatre11 , rows5 , cols5 , theatre12 , rows6 , cols6 , theatre13 , rows7 , cols7);
else if(decision==2)
{
timings(theatre,rows,cols, theatre3 , rows1 , cols1 , theatre8 , rows2, cols2 , theatre9 , rows3 , cols3 , theatre10, rows4 , cols4 , theatre11 , rows5 , cols5 , theatre12 , rows6 , cols6 , theatre13 , rows7 , cols7);
}
else{
printf("\n This option doesn't exist\n Try again after sometime\n Thank you\n");
return 1;}
}
else if(more==2)
{
    printf("\nDo you want to cancel tickets in the same show , if so enter 1 else enter 2\n");
scanf("%d",&decision3);
    system("cls");
if(decision3==1)
cancelTicket(theatre,rows,cols, theatre3 , rows1 , cols1 , theatre8 , rows2, cols2 , theatre9 , rows3 , cols3 , theatre10, rows4 , cols4 , theatre11 , rows5 , cols5 , theatre12 , rows6 , cols6 , theatre13 , rows7 , cols7);
else if(decision3==2)
{
timings1(theatre,rows,cols, theatre3 , rows1 , cols1 , theatre8 , rows2, cols2 , theatre9 , rows3 , cols3 , theatre10, rows4 , cols4 , theatre11 , rows5 , cols5 , theatre12 , rows6 , cols6 , theatre13 , rows7 , cols7);
}
else{
printf("\n This option doesn't exist\n Try again after sometime\n Thank you\n");
return 1;}
}
else if(more==3)
return 1;
else if(more==4)
screen( theatre1  , theatre2 ,  theatre4 ,  theatre5 ,  theatre6 ,  theatre7, theatre0, theatre20, theatre21  , theatre22 ,  theatre23 , theatre24 ,  theatre25 ,  theatre26, theatre27, theatre28, theatre29  ,  theatre30 ,  theatre31 ,  theatre32 ,  theatre33 ,  theatre34, theatre35,  theatre36, theatre37  ,  theatre38 ,  theatre39 ,  theatre40 ,  theatre41 ,  theatre42, theatre43, theatre44);
else if(more==5)
exit(0);
else{
printf("\n Sorry the %d option doesn't exist \n Please try after some time \n Thank you \n", more);
return 1;}
}

void  cancelTicket(char theatre[5][9],int rows , int cols , char theatre3[5][9] , int rows1 , int cols1  ,char theatre8[5][9] , int rows2, int cols2 ,char theatre9[5][9] , int rows3 , int cols3 , char theatre10[5][9], int rows4 , int cols4 ,char theatre11[5][9] , int rows5 , int cols5 ,char  theatre12[5][9] , int rows6 , int cols6 , char theatre13[5][9] , int rows7 , int cols7 )
{
int more,price1,decision1,decision2;
price2();
printf("\nPlease enter the price of the ticket which you want to cancel\n ");
scanf("%d",&price1);
system("cls");
line();
if(price1==100)
{
printf("\n You are in the %d rupees ticket slot\n\n ",price1);
cancel(theatre , 5 , 9);
}
else if(price1==75)
{
printf("\n You are in the %d rupees ticket slot\n\n ",price1);
cancel(theatre3 , 5 , 9);
}
else
{
 printf("\nSorry this price ticket doesn't exist \n Please try after some time \n Thank you\n");
 exit(0);
}
line();
printf("\n What you want to do now\n 1. Want to book more tickets \n 2. Want to cancel the tickets \n 3. Return to Screen menu \n 4. Return to Main menu \n 5. exit \n");
scanf("%d",&more);
    system("cls");
line();
printf("\n");
if(more==1)
{
   printf("\nDo you want to book more tickets in the same show , if so enter 1 else enter 2\n");
scanf("%d",&decision1);
    system("cls");
if(decision1==1)
bookTicket(theatre,rows,cols, theatre3 , rows1 , cols1 , theatre8 , rows2, cols2 , theatre9 , rows3 , cols3 , theatre10, rows4 , cols4 , theatre11 , rows5 , cols5 , theatre12 , rows6 , cols6 , theatre13 , rows7 , cols7);
else if(decision1==2)
{
timings(theatre,rows,cols, theatre3 , rows1 , cols1 , theatre8 , rows2, cols2 , theatre9 , rows3 , cols3 , theatre10, rows4 , cols4 , theatre11 , rows5 , cols5 , theatre12 , rows6 , cols6 , theatre13 , rows7 , cols7);
}
else{
printf("\n This option doesn't exist\n Try again after sometime\n Thank you\n");
return 1;}
}
else if(more==2)
{
printf("\nDo you want to cancel tickets in the same show , if so enter 1 else enter 2\n");
scanf("%d",&decision2);
    system("cls");
if(decision2==1)
cancelTicket(theatre,rows,cols, theatre3 , rows1 , cols1 , theatre8 , rows2, cols2 , theatre9 , rows3 , cols3 , theatre10, rows4 , cols4 , theatre11 , rows5 , cols5 , theatre12 , rows6 , cols6 , theatre13 , rows7 , cols7);
else if(decision2==2)
{
timings1(theatre,rows,cols, theatre3 , rows1 , cols1 , theatre8 , rows2, cols2 , theatre9 , rows3 , cols3 , theatre10, rows4 , cols4 , theatre11 , rows5 , cols5 , theatre12 , rows6 , cols6 , theatre13 , rows7 , cols7);
}
else{
printf("\n This option doesn't exist\n Try again after sometime\n Thank you\n");
return 1;}
}
else if(more==3)
return 1;
else if(more==4)
screen( theatre1  , theatre2 ,  theatre4 ,  theatre5 ,  theatre6 ,  theatre7, theatre0, theatre20, theatre21  , theatre22 ,  theatre23 , theatre24 ,  theatre25 ,  theatre26, theatre27, theatre28, theatre29  ,  theatre30 ,  theatre31 ,  theatre32 ,  theatre33 ,  theatre34, theatre35,  theatre36, theatre37  ,  theatre38 ,  theatre39 ,  theatre40 ,  theatre41 ,  theatre42, theatre43, theatre44);
else if(more==5)
exit(0);
else{
printf("\n Sorry the %d option doesn't exist \n Please try after some time \n Thank you \n");
return 1;
}
}

void price()
{
  line();
  printf("\nWe have two different types of slots in a screen for  different seats which costs different prices based on Air conditioners and Quality of seats i.e\n");
  line();
  printf("\n  For best Air conditioned Quality seats ticket price is 100Rupees\n  For moderate Air conditioned Quality seats ticket price is 70Rupees\n");
  line();
}
void price2()
{
   line();
   printf("\nAs you know we have 2 types of slots in a Screen\n ");
   printf("\nBest Air conditioned Quality seats ticket price is 100 Rupees \n \t\t\t\t\\t\t\t \n  Moderate Air conditioned Quality seats ticket price is 75 Rupees\n");
}
void  timings(char theatre[5][9],int rows , int cols , char theatre3[5][9] , int rows1 , int cols1  ,char theatre8[5][9] , int rows2, int cols2 ,char theatre9[5][9] , int rows3 , int cols3 , char theatre10[5][9], int rows4 , int cols4 ,char theatre11[5][9] , int rows5 , int cols5 ,char  theatre12[5][9] , int rows6 , int cols6 , char theatre13[5][9] , int rows7 , int cols7 )
{
    int ch;
    printf("\nWe have four shows i.e\n");
    printf(" 1.Morning show\n 2.Matinee show\n 3.First show\n 4.Second show\n");
    line();
    printf("\nEnter your show no\n");
    scanf("%d",&ch);
    system("cls");
    line();
    switch(ch)
    {
     case 1: printf("\nYou are in the morning show booking system\n");
     bookTicket(theatre,rows,cols, theatre3 , rows1 , cols1 , theatre8 , rows2, cols2 , theatre9 , rows3 , cols3 , theatre10, rows4 , cols4 , theatre11 , rows5 , cols5 , theatre12 , rows6 , cols6 , theatre13 , rows7 , cols7);
     break;
     case 2: printf("\nYou are in the matinee show booking system\n");
     bookTicket(theatre8,rows2,cols2, theatre9 , rows3 , cols3 , theatre , rows, cols , theatre3 , rows1 , cols1 , theatre10, rows4 , cols4 , theatre11 , rows5 , cols5 , theatre12 , rows6 , cols6 , theatre13 , rows7 , cols7);
     break;
     case 3: printf("\nYou are in the first show booking system\n");
     bookTicket(theatre10 ,  rows4 , cols4 , theatre11 ,  rows5 , cols5 ,theatre,rows,cols, theatre3 , rows1 , cols1 , theatre8 , rows2, cols2 , theatre9 , rows3 , cols3 , theatre12 , rows6 , cols6 , theatre13 , rows7 , cols7);
     break;
     case 4: printf("\nYou are in the second show booking system\n");
     bookTicket(theatre12 ,  rows6 , cols6 , theatre13 ,  rows7 , cols7 , theatre,rows,cols, theatre3 , rows1 , cols1 , theatre8 , rows2, cols2 , theatre9 , rows3 , cols3 , theatre10, rows4 , cols4 , theatre11 , rows5 , cols5);
     break;
     default: printf("\nSorry this show doesn't exist\n Please try after some time\n Thank you\n");exit(0);
    }
}
void  timings1(char theatre[5][9],int rows , int cols , char theatre3[5][9] , int rows1 , int cols1  ,char theatre8[5][9] , int rows2, int cols2 ,char theatre9[5][9] , int rows3 , int cols3 , char theatre10[5][9], int rows4 , int cols4 ,char theatre11[5][9] , int rows5 , int cols5 ,char  theatre12[5][9] , int rows6 , int cols6 , char theatre13[5][9] , int rows7 , int cols7 )
{
    int ch;
    printf("\nWhich show contains your tickets\n");
    printf(" 1.Morning show\n 2.Matinee show\n 3.First show\n 4.Second show\n");
    line();
    printf("\nEnter your show no\n");
    scanf("%d",&ch);
        system("cls");
    line();
    switch(ch)
    {
     case 1: printf("\nYou are in the morning show cancellation system\n");
     cancelTicket(theatre,rows,cols, theatre3 , rows1 , cols1 , theatre8 , rows2, cols2 , theatre9 , rows3 , cols3 , theatre10, rows4 , cols4 , theatre11 , rows5 , cols5 , theatre12 , rows6 , cols6 , theatre13 , rows7 , cols7);
     break;
     case 2: printf("\nYou are in the matinee show cancellation system\n");
     cancelTicket(theatre8,rows2,cols2, theatre9 , rows3 , cols3 , theatre , rows, cols , theatre3 , rows1 , cols1 , theatre10, rows4 , cols4 , theatre11 , rows5 , cols5 , theatre12 , rows6 , cols6 , theatre13 , rows7 , cols7);
     break;
     case 3: printf("\nYou are in the first show cancellation system\n");
     cancelTicket(theatre10 ,  rows4 , cols4 , theatre11 ,  rows5 , cols5 ,theatre,rows,cols, theatre3 , rows1 , cols1 , theatre8 , rows2, cols2 , theatre9 , rows3 , cols3 , theatre12 , rows6 , cols6 , theatre13 , rows7 , cols7);
     break;
     case 4: printf("\nYou are in the second show cancellation system\n");
     cancelTicket(theatre12 ,  rows6 , cols6 , theatre13 ,  rows7 , cols7 , theatre,rows,cols, theatre3 , rows1 , cols1 , theatre8 , rows2, cols2 , theatre9 , rows3 , cols3 , theatre10, rows4 , cols4 , theatre11 , rows5 , cols5);
     break;
     default: printf("\nSorry this show doesn't exist\n Please try after some time\n Thank you\n");exit(0);
    }
}
void booking(char theatre[5][9] , int rows , int cols)
{
int seat_no,seat_no1,temp,temp1,count=0,i,j,k,No_Of_Seats,single_seat;
char row_name,row_name1,single_row;
printf("\nEnter 1 if you want to book only 1 seat else Enter any no i.e greater than one and less than or equal to %d\n\n",cols);
scanf("%d",&No_Of_Seats);
system("cls");
if(No_Of_Seats>1 && No_Of_Seats<=cols)
{
printf("\nPlease enter the required initial row name and seat no from where you want to start bookings\n\n");
fflush(stdin);
scanf("%c",&row_name);
scanf("%d",&seat_no);
printf("\nPlease enter the required final row name and seat no till where you want to end bookings\n\n");
fflush(stdin);
scanf("%c",&row_name1);
scanf("%d",&seat_no1);
system("cls");
temp=row_name-64;
temp1=row_name1-64;
if (temp>5 || temp< 0 || seat_no>9 || seat_no<0 || temp1 > 5 || temp1< 0 || seat_no1>9 || seat_no1<0 )
{
 printf("\nSorry , The above seat number doesn't exist\n Please try again\n\n");
return 1;//Seat doesn't exit
}
if(temp==temp1)
{
    for(i=temp;i<=temp1;i++)
{
 for(j=seat_no;j<=seat_no1;j++)
{
if(theatre[i-1][j-1]!='B')
{
theatre[i-1][j-1]='B';
count++;
}
else
{
printf("\nSorry the seat no %c%d is already booked\n\n",i+64,j);
}
}
}
}
else
{
 count=0;
 k=seat_no;
 if(temp<=temp1)
 {
     while(temp<temp1)
   {
      i=temp;
      for(j=k;j<=cols;j++)
      {
          if(theatre[i-1][j-1]!='B')
           {
             theatre[i-1][j-1]='B';
              count++;
           }
           else
          {
             printf("\nSorry the seat no %c%d is already booked\n\n",i+64,j);
           }
      }
     temp++;
     k=1;
  }
   if(temp==temp1)
  {
      for(i=temp;i<=temp1;i++)
     {
    for(j=1;j<=seat_no1;j++)
     {
    if(theatre[i-1][j-1]!='B')
           {
             theatre[i-1][j-1]='B';
              count++;
           }
           else
          {
             printf("\nSorry the seat no %c%d is already booked\n\n",i+64,j);
           }
     }
   }
 }
}
}
}
else if(No_Of_Seats==1)
{
   printf("\nPlease enter the required seat no which you want to book\n\n");
  fflush(stdin);
  scanf("%c",&single_row);
  scanf("%d",&single_seat);
  system("cls");
  temp=single_row-64;
  if(temp>5 || temp< 0 || single_seat>12 || single_seat<0 )
{
   printf("\nSorry , The above seat number doesn't exist\n Please try again\n\n");
  return 1;//Seat doesn't exit
}
if(theatre[temp-1][single_seat-1]!='B')
           {
             theatre[temp-1][single_seat-1]='B';
              count=1;
           }
           else
          {
             printf("\nSorry the seat no %c%d is already booked\n\n",temp+64,single_seat);
           }
}
else
{
    printf("\n\n NO JOKES , PLEASE TRY AGAIN WITH A VALID SEAT NO :) \n THANKS\n ");
    return 1;
}
printf("\nYou have booked %d tickets\n Thank you\n\n",count);
line();
}

void cancel(char theatre[5][9] ,int rows , int cols)
{
int seat_no2,seat_no3,temp2,temp3,count1=0,i,j,k1,No_Of_Seats1,single_seat1;
char row_name2,row_name3,single_row1;
printf("\nEnter 1 if you want to cancel only 1 seat else Enter any no i.e greater than one and less than or equal to %d\n\n",cols);
scanf("%d",&No_Of_Seats1);
    system("cls");
if(No_Of_Seats1>1 && No_Of_Seats1<=cols)
{
printf("\nPlease enter the required initial row name and seat no from where you want to start your cancellation process\n\n");
fflush(stdin);
scanf("%c",&row_name2);
scanf("%d",&seat_no2);
printf("\nPlease enter the required final row name and seat no till where you want to end your cancellation process\n\n");
fflush(stdin);
scanf("%c",&row_name3);
scanf("%d",&seat_no3);
    system("cls");
temp2=row_name2-64;
temp3=row_name3-64;
if (temp2 > 5 || temp2< 0 || seat_no2>9 || seat_no2<0 || temp3 > 5 || temp3< 0 || seat_no3>9 || seat_no3<0  )
{
 printf("\nThe above seat number doesn't exist\n Please try again\n\n");
return 1; // seat doesn't exist
}
if(temp2==temp3)
{
for(i=temp2;i<=temp3;i++)
{
 for(j=seat_no2;j<=seat_no3;j++)
{
if(theatre[i-1][j-1]!='E')
{
theatre[i-1][j-1]='E';
count1++;
}
else
{
printf("\nSorry the seat no %c%d is not booked to cancel\n\n",i+64,j);
}
}
}
}
else
{
 count1=0;
 k1=seat_no2;
 if(temp2<=temp3)
 {
     while(temp2<temp3)
   {
      i=temp2;
      for(j=k1;j<=cols;j++)
      {
          if(theatre[i-1][j-1]!='E')
{
theatre[i-1][j-1]='E';
count1++;
}
else
{
printf("\nSorry the seat no %c%d is not booked to cancel\n\n",i+64,j);
}
      }
     temp2++;
     k1=1;
  }
   if(temp2==temp3)
  {
      for(i=temp2;i<=temp3;i++)
     {
    for(j=1;j<=seat_no3;j++)
     {
    if(theatre[i-1][j-1]!='E')
{
theatre[i-1][j-1]='E';
count1++;
}
else
{
printf("\nSorry the seat no %c%d is not booked to cancel\n\n",i+64,j);
}
     }
   }
 }
}
}
}
else if(No_Of_Seats1==1)
{
   printf("\nPlease enter the required seat no which you want to cancel\n\n");
  fflush(stdin);
  scanf("%c",&single_row1);
  scanf("%d",&single_seat1);
      system("cls");
  temp2=single_row1-64;
  if(temp2>5 || temp2< 0 || single_seat1>9 || single_seat1<0 )
{
   printf("\nSorry , The above seat number doesn't exist\n Please try again\n\n");
  return 1;//Seat doesn't exit
}
if(theatre[temp2-1][single_seat1-1]!='E')
           {
             theatre[temp2-1][single_seat1-1]='E';
              count1=1;
           }
           else
          {
             printf("\nSorry the seat no %c%d is not booked to cancel\n\n",temp2+64,single_seat1);
           }
}
else
{
    printf("\n\n NO JOKES , PLEASE TRY AGAIN WITH A VALID SEAT NO :) \n THANKS\n ");
    return 1;
}
printf("\n\n%d seats succesfully cancelled\n\n Thank you\n",count1);
}

void empty(char theatre1[5][9]  ,char theatre2[5][9] , char theatre4[5][9] , char theatre5[5][9] , char theatre6[5][9] ,char  theatre7[5][9],char theatre0[5][9],char theatre20[5][9],char theatre21[5][9]  ,char theatre22[5][9] ,char  theatre23[5][9] , char theatre24[5][9] ,char  theatre25[5][9] ,char  theatre26[5][9],char theatre27[5][9],char theatre28[5][9],char theatre29[5][9]  , char theatre30[5][9] , char theatre31[5][9] , char theatre32[5][9] , char theatre33[5][9] , char theatre34[5][9],char theatre35[5][9], char theatre36[5][9],char theatre37[5][9]  , char theatre38[5][9] , char theatre39[5][9] ,char  theatre40[5][9] ,char  theatre41[5][9] ,char  theatre42[5][9],char theatre43[5][9],char theatre44[5][9])
{
    makeSeatsEmpty(theatre1);
    makeSeatsEmpty(theatre2);
    makeSeatsEmpty(theatre4);
    makeSeatsEmpty(theatre5);
    makeSeatsEmpty(theatre6);
    makeSeatsEmpty(theatre7);
    makeSeatsEmpty(theatre0);
    makeSeatsEmpty(theatre20);
    makeSeatsEmpty(theatre21);
    makeSeatsEmpty(theatre22);
    makeSeatsEmpty(theatre23);
    makeSeatsEmpty(theatre24);
    makeSeatsEmpty(theatre25);
    makeSeatsEmpty(theatre26);
    makeSeatsEmpty(theatre27);
    makeSeatsEmpty(theatre28);
    makeSeatsEmpty(theatre29);
    makeSeatsEmpty(theatre30);
    makeSeatsEmpty(theatre31);
    makeSeatsEmpty(theatre32);
    makeSeatsEmpty(theatre33);
    makeSeatsEmpty(theatre34);
    makeSeatsEmpty(theatre35);
    makeSeatsEmpty(theatre36);
    makeSeatsEmpty(theatre37);
    makeSeatsEmpty(theatre38);
    makeSeatsEmpty(theatre39);
    makeSeatsEmpty(theatre40);
    makeSeatsEmpty(theatre41);
    makeSeatsEmpty(theatre42);
    makeSeatsEmpty(theatre43);
    makeSeatsEmpty(theatre44);
}
struct contact
{
    long int phone;
    char name[20],add[20],email[30];
} list;
int contacts()
{
    system("color 4F");
    display1();
}
int display1()
{
    do
    {
        system("cls");
        printf("\t||_------------------------------------_||\n\t||\t\t:CONTACT APP:       \t||\n\t||_------------------------------------_||\n");

        printf("\t||    Select What you want to view:     ||\n");
        printf("\t||--------------------------------------||\n");
        printf("\t||[1] Add a new Contact                 ||\n");
        printf("\t||[2] List all Contacts                 ||\n");

        printf("\t||[3] Edit a Contact                    ||\n");
        printf("\t||[4] Delete all Contact                ||\n");
        printf("\t||[5] Exit                              ||\n");
        printf("\t||_------------------------------------_||\n\t||\t\t\t\t\t||\n\t||_------------------------------------_||\n");
        printf("\n\n \tselect option:\t");
        scanf("%d",&option);
        fflush(stdin);

        switch(option)
        {
        case 1:
            newcontacts();
            break;
        case 2:
            profile();
            break;
        case 3:
            editcontact();
            break;
        case 4:
            deletecontacts();

            break;
case 5:
system("cls");
menu();
break;

        default:
            printf("Wrong option try after some time  thank you [ you are returning to main menu ]");
            menu();
            break;
        }
    }
    while(option<5);

}
int deletecontacts()
{
    system("cls");
    fflush(stdin);
    printf("\t||_------------------------------------_||\n\t||\t\t| DELETE CONCACTS|    \t||\n\t||_------------------------------------_||\n");

    printf("\t||          |All contats deleted|     : ||\n");

    //gets(name);
    fp=fopen("contact.txt","r");
    ft=fopen("temp.dat","w");
    while(fread(&list,sizeof(list),1,fp)!=0)
    {
        if (stricmp(name,list.name)!=0)
        {
            fwrite(&list,sizeof(list),1,ft);

            fclose(fp);
            fclose(ft);
            remove("contact.txt");
            rename("temp.dat","contact.txt");
        }
    }
    printf("\t||_------------------------------------_||\n\t||\t\t\t\t\t||\n\t||_------------------------------------_||\n");
    do
    {
        printf("\n\n\t\t  :Enter the Choice:\n\n\t\t[1] Back\t\t\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            display1();
            break;

        default:
            printf("Invalid choice");
            break;
        }
    }
    while(ch<2);
}
int editcontact()
{
    system("cls");
    fp=fopen("contact.txt","r");
    ft=fopen("temp.dat","w");

    printf("\t||_------------------------------------_||\n\t||\t\t:EDIT CONTACT:      \t||\n\t||_------------------------------------_||\n");

    printf("\t||    Select What you want to edit:     ||\n\t\tEnter Name:");

    gets(name);
    while(fread(&list,sizeof(list),1,fp)==1)
    {
        if(stricmp(name,list.name)!=0)
            fwrite(&list,sizeof(list),1,ft);
    }

    printf("\n\n\t\t:Editing '%s'\n\n",name);
    printf("\t\t  Name:");

    gets(list.name);
    printf("\t\t  Phone:");
    scanf("%2d",&list.phone);

    printf("\t\t  address:");
    gets(list.add);
    gets(list.add);
    printf("\t\t  email address:");
    gets(list.email);
    printf("\n");
    fwrite(&list,sizeof(list),1,ft);
    fclose(fp);
    fclose(ft);
    remove("contact.txt");
    rename("temp.dat","contact.txt");
    printf("\t||_------------------------------------_||\n\t||\t\t\t\t\t||\n\t||_------------------------------------_||\n");
    do
    {
        printf("\n\n\t\t  :Enter the Choice:\n\n\t\t[1] Back\t");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            display1();
            break;

        default:
            printf("Invalid choice");
            break;
        }
    }
    while(ch<2);
}
int profile()
{
    system("cls");
    printf("\t||_------------------------------------_||\n\t||\t\t| PROFILE |           \t||\n\t||_------------------------------------_||\n");

    printf("\t||                                      ||\n");
    printf("\t||                                      ||\n");
    fp=fopen("contact.txt","r");
    fflush(stdin);

    for(i=0; i<=10; i=i+1)
    {


        while(fread(&list,sizeof(list),1,fp)==1)
        {
            if(list.name[i])
            {
                printf("\n\t%d",z);
                z++;
                printf("\n\t\tName\t: %s\n\n\t\tPhone\t: %ld\n\n\t\tAddress\t: %s\n\n\t\tEmail\t: %s\n",list.name,list.phone,list.add,list.email);

            }
        }

    }
    printf("\t||_------------------------------------_||\n\t||\t\t\t\t\t||\n\t||_------------------------------------_||\n");

    fclose(fp);
    do
    {
        printf("\n\n\t\t  :Enter the Choice:\n\n\t\t[1] Back\t\t");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            display1();
            break;

        default:
            printf("Invalid choice");
            break;
        }
    }
    while(ch<2);
}



int newcontacts()
{
    system("cls");
    fp=fopen("contact.txt","a");
    printf("\t||_------------------------------------_||\n\t||\t\t:ADD CONTACTS:     \t||\n\t||_------------------------------------_||\n");
    printf("\t||    Enter the data:                   ||\n");
    printf("\t||--------------------------------------||\n");
    printf("\t\t   Name:");

    gets(list.name);
    printf("\t\t   Phone:");

    scanf("%1d",&list.phone);
    fflush(stdin);
    printf("\t\t   address:");
    gets(list.add);

    fflush(stdin);
    printf("\t\t   email address:");
    gets(list.email);
    printf(" \n");
    printf("\t||_------------------------------------_||\n\t||\t\t\t\t\t||\n\t||_------------------------------------_||\n");
    fwrite(&list,sizeof(list),1,fp);

    fclose(fp);
    do
    {
        printf("\n\n\t\t  :Enter the Choice:\n\n\t\t[1] Back\t");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            display1();
            break;

        default:
//printf("Invalid choice");
            break;
        }
    }
    while(ch<2);
}

int game_2048()
{
 int i,j,x,y,count=0,win=0;
 char c,ch,clr,win_check;
 system("cls");
 system("color 5B");
 do
 {
  while(count==0)
  {
   x=rand()%4;
   y=rand()%4;
   if(array[x][y]==0)
   count=1;
  }
  do
  {
   x=rand()%4;
   y=rand()%4;
  }while(array[x][y]!=0);
  array[x][y]=2;
  print1();
  printf("\n\nMake your move : [ A(Left), D(Right) , W(Up)  or S(Down) ] \n");
  c = _getch();
  system("cls");
  game1(c);
  win=search1(2048);
  if(win==1)
  {
   printf("\n You win :) , Do you still want to continue?[**Enter y to exit / Enter any key to continue**]\n");
   scanf("%c",&win_check);
   if(win_check=='y'|| 'y')
   printf("Well Played , Thank you :) \n");
   exit(0);
  }
  else
  {
  printf("\n Do u want to quit the game?[**Enter y to exit / Enter any key to continue**]\n");
  scanf("%c",&ch);
  if(ch!='y' || 'Y')
  system("cls");
  else
  printf("Well Played , Thank you :) \n");
  }
 }while(ch!='y');
 return 0;
}
void game1(char c)
{
    int i,j;
 switch (c)
 {
  case 'D':
  case 'd':
  right1();
  break;
  case 'A':
  case 'a':
  left1();
  break;
  case 'W':
  case 'w':
  up1();
  break;
  case 'S':
  case 's':
  down1();
  break;
  default:printf("Invalid choice \n Please make a valid move\n");
  break;
}
}
void right1()
{
 int i,j,n,k,check_value;
 for(i=0;i<4;i++)
 {
  for(j=0;j<4;j++)
  {
   check_value=check1(i);
   if(check_value!=3)
   {
   n=j+1;
   if(n<4)
   {
    if(array[i][n]!=0)
    {
     if(array[i][j]==array[i][n])
     {
      array[i][n]=2*array[i][n];
      array[i][j]=0;
      if(array[i][n+1]==0&&n<3)
      {
       array[i][n+1]=array[i][n];
       array[i][n]=0;
      }
      j++;
     }
     else if(array[i][j]!=array[i][n])
     {
      k=n+1;
      if(k<2&&array[i][k]==0)
      {
       array[i][k]=array[i][n];
       array[i][n]=array[i][j];
      }
     }
    }
    else if(array[i][n]==0)
    {
     array[i][n]=array[i][j];
     array[i][j]=0;
    }
   }
   }
  }
 }
}
void left1()
{
 int i,j,n,k,check_value;
 for(i=0;i<4;i++)
 {
  for(j=3;j>=0;j--)
  {
   check_value=check1(i);
   if(check_value!=3)
   {
   n=j-1;
   if(n>=0)
   {
    if(array[i][n]!=0)
    {
     if(array[i][j]==array[i][j-1])
     {
      array[i][n]=2*array[i][n];
      array[i][j]=0;
      if(array[i][n-1]==0&&n>0)
      {
       array[i][n-1]=array[i][n];
       array[i][n]=0;
      }
      j--;
     }
     else if(array[i][j]==array[i][n])
     {
      k=n-1;
      if(k>1&&array[i][k]==0)
      {
       array[i][k]=array[i][n];
       array[i][n]=array[i][k];
      }
     }
    }
    else if(array[i][n]==0)
    {
     array[i][n]=array[i][j];
     array[i][j]=0;
    }
   }
   }
  }
 }
}
void up1()
{
 int i,j,n,k,check_value;
 for(i=0;i<4;i++)
 {
  for(j=3;j>=0;j--)
  {
   check_value=check2(i);
   if(check_value!=3)
   {
   n=j-1;
   if(n>=0)
   {
    if(array[n][i]!=0)
    {
     if(array[j][i]==array[n][i])
     {
      array[n][i]=2*array[n][i];
      array[j][i]=0;
      if(array[n-1][i]==0&&n>0)
      {
       array[n-1][i]=array[n][i];
       array[n][i]=0;
      }
      j--;
     }
     else if(array[j][i]!=array[n][i])
     {
      k=n-1;
      if(k>1&&array[k][i]==0)
      {
       array[k][i]=array[n][i];
       array[n][i]=array[j][i];
      }
     }
    }
   else if(array[n][i]==0)
    {
     array[n][i]=array[j][i];
     array[j][i]=0;
    }
   }
   }
  }
 }
}
void down1()
{
 int i,j,n,k,check_value;
 for(i=0;i<4;i++)
 {
  for(j=0;j<4;j++)
  {
   check_value=check2(i);
   if(check_value!=3)
   {
   n=j+1;
   if(n<4)
   {
    if(array[n][i]!=0)
    {
     if(array[j][i]==array[n][i])
     {
      array[n][i]=2*array[n][i];
      array[j][i]=0;
      if(array[n+1][i]==0&&n<3)
      {
       array[n+1][i]=array[n][i];
       array[n][i]=0;
      }
      j++;
     }
     else if(array[j][i]!=array[n][i])
     {
      k=n+1;
      if(k<2&&array[k][i])
      {
       array[k][i]=array[n][i];
       array[n][i]=array[j][i];
      }
     }
    }
    else if(array[n][i]==0)
    {
     array[n][i]=array[j][i];
     array[j][i]=0;
    }
   }
   }
  }
 }
}
void print1()
{
 int i,j;
  printf("\t\t\t");
     printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,203,205,205,205,205,205,203,205,205,205,205,205,203,205,205,205,205,205,187);
     printf("\n");
 for(i=0;i<4;i++)

 {
     printf("\t\t\t");
  for(j=0;j<4;j++)
  {
      printf("%c",186);
      if(array[i][j] == 0)
      {
          printf("     ");
      }
      else
   printf("%3d  ",array[i][j]);
  }
  printf("%c",186);
  if(i == 3)
  {
   printf("\n\t\t\t");
     printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,202,205,205,205,205,205,202,205,205,205,205,205,202,205,205,205,205,205,188);
     printf("\n");
  }
  else
  {
   printf("\n\t\t\t");
     printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,206,205,205,205,205,205,206,205,205,205,205,205,206,205,205,205,205,205,185);
     printf("\n");
  }
 }
 }
int check1(int i)
{
 int j,n=0;
 for(j=0;j<3;j++)
 {
  if((array[i][j]!=0)&&(array[i][j+1]!=0)&&(array[i][j]!=array[i][j+1]))
  n++;
 }
 return n;
}
int check2(int i)
{
 int j,n=0;
 for(j=0;j<3;j++)
 {
  if((array[j][i]!=0)&&(array[j+1][i]!=0)&&(array[j][i]!=array[j+1][i]))
  n++;
 }
 return n;
}

int search1(int key)
{
 int i,j;
 for(i=0;i<4;i++)
 {
  for(j=0;j<4;j++)
  {
    if(array[i][j]==key)
            return 1;
    else
        return 0;
    }
 }
}

int chess()
{
    system("color A");
    char key;
    printf("\n\n\n\n\t\t***Welcome to chess game***\n\n\n");
    printf("\t\t     Enter to START <-' \n\n");
    printf("\t\tGame does not change the colour if u press a wrong move \n\n");
    scanf("%c",&key);
    if(key=='\n')
    {
        createboard();

    }

    return(0);
}

int createboard()
{
    system("cls");
    system("color F0");
    int i,j;
    char row ;

    row='@';
    for(i=0; i<8; i++)
    {
        board[1][i]='p';
    }
    for(i=0; i<8; i++)
    {
        board[6][i]='P';
    }
    board[0][3]='k';
    board[0][4]='q';
    board[0][0]='e';
    board[0][7]='e';
    board[0][1]='h';
    board[0][2]='c';
    board[0][5]='c';
    board[0][6]='h';
    board[7][3]='Q';
    board[7][4]='K';
    board[7][0]='E';
    board[7][7]='E';
    board[7][1]='H';
    board[7][2]='C';
    board[7][5]='C';
    board[7][6]='H';


    printf("\n\n\n");
    for(i=2; i<6; i++)
    {
        for(j=0; j<8; j++)
        {
            board[i][j]='.';
        }
    }
    /*  for(i=0; i<8; i++)
      {
          row++;
          printf( "%c ", row );
          for(j=0; j<8; j++)
          {
              printf("%8c",board[i][j]);
          }

          printf("\n\n\n");
      }

      movecoins();
    */
    display2();
    return(0);
}
int display2()
{

    system("cls");
    int i,j;
    char row;
    row='@';
    for( j = 0 ; j < 8 ; j++)
    {
        printf ( "% 8d", j+1);
    }
    printf("\n\n\n");
    for(i=0; i<8; i++)
    {
        row++;
        printf( "%c ", row );
        for(j=0; j<8; j++)
        {
            printf("%8c",board[i][j]);
        }

        printf("\n\n\n");
    }
    fflush(stdin);
    ++turn;
    if(check()==1)
    {

        printf("\n\n\t\t***Check***");

    }
    if(checkmate()==1)
    {

        printf("\n\n\t\t***Check Mate you won***");

    }
    movecoins();
}
int movecoins()
{
    int a,b,c,d;



    if (turn%2==0)
    {
        system("color A");
        printf("\nBlacks turn:\n");
    }
    else
    {
        system("color F0");
        printf("\nWhites turn:\n");
    }
    printf("\t\t||Select a chess coin||\n\n(king=K,Queen=Q,Pawn=P,Horse=H,Elephant=E&camlie=c)\n\n");
    printf("\t***Enter row nd col number***\n\n For Example a8;e7:\t");
    initialpos1=getchar();
    initialpos2=getchar();
    a=(int)(initialpos1-'_')-2;
    b= (int)(initialpos2-'0')-1;



    if( board[a][b]=='p'&&turn%2==0)
    {
        printf("\nEnter final position\t");
        finalpos1=getchar();
        finalpos2=getchar();
        finalpos1=getchar();
        pawn(initialpos1,initialpos2,finalpos1,finalpos2);
    }


    else if(board[a][b]=='P')
    {
        printf("\nEnter final position\t");
        finalpos1=getchar();
        finalpos2=getchar();
        finalpos1=getchar();
        pawn(initialpos1,initialpos2,finalpos1,finalpos2);
    }





    else if(board[a][b]=='h'&&turn%2==0)
    {

        printf("\nEnter final position\t");
        finalpos1=getchar();
        finalpos2=getchar();
        finalpos1=getchar();
        horse(initialpos1,initialpos2,finalpos1,finalpos2);
    }
    else if(board[a][b]=='H')
    {

        printf("\nEnter final position\t");
        finalpos1=getchar();
        finalpos2=getchar();
        finalpos1=getchar();
        horse(initialpos1,initialpos2,finalpos1,finalpos2);
    }

    else if(board[a][b]=='e'&&turn%2==0)
    {

        printf("\nEnter final position\t");
        finalpos1=getchar();
        finalpos2=getchar();
        finalpos1=getchar();
        rook(initialpos1,initialpos2,finalpos1,finalpos2);
    }
    else if(board[a][b]=='E')
    {

        printf("\nEnter final position\t");
        finalpos1=getchar();
        finalpos2=getchar();
        finalpos1=getchar();
        rook(initialpos1,initialpos2,finalpos1,finalpos2);
    }


    else if(board[a][b]=='c'&&turn%2==0)
    {

        printf("\nEnter final position\t");
        finalpos1=getchar();
        finalpos2=getchar();
        finalpos1=getchar();
        bishop(initialpos1,initialpos2,finalpos1,finalpos2);
    }
    else if(board[a][b]=='C')
    {

        printf("\nEnter final position\t");
        finalpos1=getchar();
        finalpos2=getchar();
        finalpos1=getchar();
        bishop(initialpos1,initialpos2,finalpos1,finalpos2);
    }
    else if(board[a][b]=='q'&&turn%2==0)
    {

        printf("\nEnter final position\t");
        finalpos1=getchar();
        finalpos2=getchar();
        finalpos1=getchar();
        queen(initialpos1,initialpos2,finalpos1,finalpos2);
    }
    else if(board[a][b]=='Q')
    {

        printf("\nEnter final position\t");
        finalpos1=getchar();
        finalpos2=getchar();
        finalpos1=getchar();
        queen(initialpos1,initialpos2,finalpos1,finalpos2);
    }

    else if(board[a][b]=='k'&&turn%2==0)
    {

        printf("\nEnter final position\t");
        finalpos1=getchar();
        finalpos2=getchar();
        finalpos1=getchar();
        king(initialpos1,initialpos2,finalpos1,finalpos2);
    }
    else if(board[a][b]=='K')
    {

        printf("\nEnter final position\t");
        finalpos1=getchar();
        finalpos2=getchar();
        finalpos1=getchar();
        king(initialpos1,initialpos2,finalpos1,finalpos2);
    }

}

int pawn(char x,char y,char z,char w)
{
    int a,b,c,d,i;
    int key1[8],key2[8];
    a=(int)(x-'_')-2;
    b= (int)(y-'0')-1;
    c=(int)(w-'_')-2;
    d= (int)(z-'0')-1;
    //printf("%d a\n%d b\n%d c\n%d d\n ",a,b,c,d);

    if(abs(a-c)==2||abs(a-c)==1)
    {
        if(turn%2==0)
        {
            if(abs(a-c)==2&&key1[b]<1)
            {
                board[c][d]='p';
                board[a][b]='.';
                key1[b]+=1;
//            break;
            }
            else
            {

                board[c][d]='p';
                board[a][b]='.';
            }
        }
        else
        {
            if(abs(a-c)==2&&key2[b]<1)
            {
                board[c][d]='P';
                board[a][b]='.';
                key2[b]+=1;
            }
            else
            {


                board[c][d]='P';
                board[a][b]='.';
            }
        }
    }
    //else if(board[c+1][d-1]=='p'||board[c-1][d+1]=='p'||board[c-1][d-1]=='p'||board[c+1][d+1]=='p'||board[c+1][d-1]=='P'||board[c-1][d+1]=='P'||board[c-1][d-1]=='P'||board[c+1][d+1]=='P'||board[c+1][d-1]=='h'||board[c-1][d+1]=='h'||board[c-1][d-1]=='h'||board[c+1][d+1]=='h'||board[c+1][d-1]=='H'||board[c-1][d+1]=='H'||board[c-1][d-1]=='H'||board[c+1][d+1]=='H'||board[c+1][d-1]=='c'||board[c-1][d+1]=='c'||board[c-1][d-1]=='c'||board[c+1][d+1]=='c'||board[c+1][d-1]=='C'||board[c-1][d+1]=='C'||board[c-1][d-1]=='C'||board[c+1][d+1]=='C'||board[c+1][d-1]=='q'||board[c-1][d+1]=='q'||board[c-1][d-1]=='q'||board[c+1][d+1]=='q'||board[c+1][d-1]='Q'||board[c-1][d+1]=='Q'||board[c-1][d-1]=='Q'||board[c+1][d+1]=='Q'board[c+1][d-1]=='K'||board[c-1][d+1]=='K'||board[c-1][d-1]=='K'||board[c+1][d+1]=='K'||board[c+1][d-1]=='k'||board[c-1][d+1]=='k'||board[c-1][d-1]=='k'||board[c+1][d+1]=='k'||board[c+1][d-1]=='E'||board[c-1][d+1]=='E'||board[c-1][d-1]=='E'||board[c+1][d+1]=='E'||board[c+1][d-1]=='e'||board[c-1][d+1]=='e'||board[c-1][d-1]=='e'||board[c+1][d+1]=='e' )
    //{
    //   if(turn%2==0)
    //    {
    //     board[c][d]='p';
    //   board[a][b]='.';
    //    }
    // else
    //    {
    //   board[c][d]='P';
    // board[a][b]='.';
    //   }


    else
    {
        printf("Move not possible\n");
        turn--;
    }
    fflush(stdin);
    display2();
    return(0);
}

int horse(char x,char y,char z,char w)
{
    int a,b,c,d,dontmove;

    a=(int)(x-'_')-2;
    b= (int)(y-'0')-1;
    c=(int)(w-'_')-2;
    d= (int)(z-'0')-1;
    //printf("%d a\n%d b\n%d c\n%d d\n ",a,b,c,d);
    if (turn%2==0)
    {
        if(board[c][d]=='h'||board[c][d]=='p'||board[c][d]=='k'||board[c][d]=='q'||board[c][d]=='c'||board[c][d]=='e')
        {
            dontmove=10;
        }
    }
    else if(board[c][d]=='H'||board[c][d]=='P'||board[c][d]=='K'||board[c][d]=='Q'||board[c][d]=='C'||board[c][d]=='E')
    {
        dontmove=10;
    }
    if(((b+1)==d&&(a-2)==c)&&dontmove!=10||((b-1)==d&&(a-2)==c)&&dontmove!=10||((b+1)==d&&(a+2)==c)&&dontmove!=10||((b-1)==d&&(a+2)==c)&&dontmove!=10||((b-2)==d&&(a-1)==c)&&dontmove!=10||((b+2)==d&&(a-1)==c)&&dontmove!=10||((b-2)==d&&(a+1)==c)&&dontmove!=10||((b+2)==d&&(a+1)==c)&&dontmove!=10)
    {
        if(turn%2==0)
        {
            board[c][d]='h';
            board[a][b]='.';
        }
        else
        {
            board[c][d]='H';
            board[a][b]='.';
        }
    }
    else
    {
        printf("Move not possible\n");
        turn--;
    }
    fflush(stdin);
    display2();
    return(0);
}
int rook(char x,char y,char z,char w)
{
    int a,b,c,d,dontmove;

    a=(int)(x-'_')-2;
    b= (int)(y-'0')-1;
    c=(int)(w-'_')-2;
    d= (int)(z-'0')-1;
    if(b==d)
    {
        if(a>c)
        {
            for(a; a>=c; a++)
            {
                if(board[a][d]=='h'||board[a][d]=='H'||board[a][d]=='P'||board[a][d]=='p'||board[a][d]=='k'||board[a][d]=='K'||board[a][d]=='Q'||board[a][d]=='q'||board[a][d]=='c'||board[a][d]=='C'||'e'||'E')
                {
                    dontmove=10;
                    if (turn%2==0)
                    {
                        if(board[c][d]=='h'||board[c][d]=='p'||board[c][d]=='k'||board[c][d]=='q'||board[c][d]=='c'||board[c][d]=='e')
                        {
                            dontmove=0;
                        }
                    }
                    else if(board[c][d]=='H'||board[c][d]=='P'||board[c][d]=='K'||board[c][d]=='Q'||board[c][d]=='C'||board[c][d]=='E')
                    {
                        dontmove=0;
                    }
                }

            }
        }

        if(a<c)
        {
            for(a; a<=c; a++)
            {
                if(board[a][d]=='h'||board[a][d]=='H'||board[a][d]=='P'||board[a][d]=='p'||board[a][d]=='k'||board[a][d]=='K'||board[a][d]=='Q'||board[a][d]=='q'||board[a][d]=='c'||board[a][d]=='C'||'e'||'E')
                {
                    dontmove=10;
                    if (turn%2==0)
                    {
                        if(board[c][d]=='h'||board[c][d]=='p'||board[c][d]=='k'||board[c][d]=='q'||board[c][d]=='c'||board[c][d]=='e')
                        {
                            dontmove=0;
                        }
                    }
                    else if(board[c][d]=='H'||board[c][d]=='P'||board[c][d]=='K'||board[c][d]=='Q'||board[c][d]=='C'||board[c][d]=='E')
                    {
                        dontmove=0;
                    }
                }

            }
        }

    }
    if(a==c)
    {
        if(b>a)
        {


            for(a=b; b<=d; b++)
            {

                if(board[a][d]=='h'||board[a][d]=='H'||board[a][d]=='P'||board[a][d]=='p'||board[a][d]=='k'||board[a][d]=='K'||board[a][d]=='Q'||board[a][d]=='q'||board[a][d]=='c'||board[a][d]=='C'||'e'||'E')
                {
                    dontmove=10;
                    if (turn%2==0)
                    {
                        if(board[c][d]=='h'||board[c][d]=='p'||board[c][d]=='k'||board[c][d]=='q'||board[c][d]=='c'||board[c][d]=='e')
                        {
                            dontmove=0;
                        }
                    }
                    else if(board[c][d]=='H'||board[c][d]=='P'||board[c][d]=='K'||board[c][d]=='Q'||board[c][d]=='C'||board[c][d]=='E')
                    {
                        dontmove=0;
                    }
                }

            }
            if(b<a)
            {


                for(a=b; b<=d; b++)
                {

                    if(board[a][d]=='h'||board[a][d]=='H'||board[a][d]=='P'||board[a][d]=='p'||board[a][d]=='k'||board[a][d]=='K'||board[a][d]=='Q'||board[a][d]=='q'||board[a][d]=='c'||board[a][d]=='C'||'e'||'E')
                    {
                        dontmove=10;
                        if (turn%2==0)
                        {
                            if(board[c][d]=='h'||board[c][d]=='p'||board[c][d]=='k'||board[c][d]=='q'||board[c][d]=='c'||board[c][d]=='e')
                            {
                                dontmove=0;
                            }
                        }
                        else if(board[c][d]=='H'||board[c][d]=='P'||board[c][d]=='K'||board[c][d]=='Q'||board[c][d]=='C'||board[c][d]=='E')
                        {
                            dontmove=0;
                        }
                    }

                }
            }
        }
    }
    //printf("%d a\n%d b\n%d c\n%d d\n ",a,b,c,d);
    if(b==d&&dontmove!=10||a==c&&dontmove!=10)
    {
        if(turn%2==0)
        {
            board[c][d]='e';
            board[a][b]='.';
        }
        else
        {
            board[c][d]='E';
            board[a][b]='.';
        }
    }
    else
    {
        printf("Move not possible\n");
        turn--;
    }
    fflush(stdin);
    display2();
    return(0);
}


int bishop(char x,char y,char z,char w)
{
    int a,b,c,d,dontmove;

    a=(int)(x-'_')-2;
    b= (int)(y-'0')-1;
    c=(int)(w-'_')-2;
    d= (int)(z-'0')-1;
    if(a==c)
    {
        for(a; a<=c; a++)
        {
            if(board[a][d]=='h'||board[a][d]=='H'||board[a][d]=='P'||board[a][d]=='p'||board[a][d]=='k'||board[a][d]=='K'||board[a][d]=='Q'||board[a][d]=='q'||board[a][d]=='c'||board[a][d]=='C'||'e'||'E')
            {
                dontmove=10;
                if (turn%2==0)
                {
                    if(board[c][d]=='h'||board[c][d]=='p'||board[c][d]=='k'||board[c][d]=='q'||board[c][d]=='c'||board[c][d]=='e')
                    {
                        dontmove=0;
                    }
                }
                else if(board[c][d]=='H'||board[c][d]=='P'||board[c][d]=='K'||board[c][d]=='Q'||board[c][d]=='C'||board[c][d]=='E')
                {
                    dontmove=0;
                }
            }

        }
    }
    if(a==c)
    {
        for(a; a<=c; a++)
        {
            if(board[a][d]=='h'||board[a][d]=='H'||board[a][d]=='P'||board[a][d]=='p'||board[a][d]=='k'||board[a][d]=='K'||board[a][d]=='Q'||board[a][d]=='q'||board[a][d]=='c'||board[a][d]=='C'||'e'||'E')
            {
                dontmove=10;
                if (turn%2==0)
                {
                    if(board[c][d]=='h'||board[c][d]=='p'||board[c][d]=='k'||board[c][d]=='q'||board[c][d]=='c'||board[c][d]=='e')
                    {
                        dontmove=0;
                    }
                }
                else if(board[c][d]=='H'||board[c][d]=='P'||board[c][d]=='K'||board[c][d]=='Q'||board[c][d]=='C'||board[c][d]=='E')
                {
                    dontmove=0;
                }
            }

        }
    }

    if(a-1==c&&b-1==d||a+1==c&&b+1==d||a-2==c&&b-2==d||a+2==c&&b+2==d||a-3==c&&b-3==d||a+3==c&&b+3==d||a-4==c&&b-4==d||a+4==c&&b+4==d||a-5==c&&b-5==d||a+5==c&&b+5==d||a-6==c&&b-6==d||a+6==c&&b+6==d||a+1==c&&b+1==d||a+1==c&&b+1==d||a+2==c&&b+2==d||a+2==c&&b+2==d||a+3==c&&b+3==d||a+3==c&&b+3==d||a+4==c&&b+4==d||a+4==c&&b+4==d||a+5==c&&b+5==d||a+5==c&&b+5==d||a+6==c&&b+6==d||a+6==c&&b+6==d||a-1==c&&b-1==d||a-1==c&&b-1==d||a-2==c&&b-2==d||a-2==c&&b-2==d||a-3==c&&b-3==d||a-3==c&&b-3==d||a-4==c&&b-4==d||a-4==c&&b-4==d||a-5==c&&b-5==d||a-5==c&&b-5==d||a-6==c&&b-6==d||a-6==c&&b-6==d||a+1==c&&b+1==d||a-1==c&&b-1==d||a+2==c&&b+2==d||a-2==c&&b-2==d||a+3==c&&b+3==d||a-3==c&&b-3==d||a+4==c&&b+4==d||a-4==c&&b-4==d||a+5==c&&b+5==d||a-5==c&&b-5==d||a+6==c&&b+6==d||a-6==c&&b-6==d)
    {
        if(turn%2==0)
        {
            board[c][d]='c';
            board[a][b]='.';
        }
        else
        {
            board[c][d]='C';
            board[a][b]='.';
        }
    }
    else
    {
        printf("Move not possible\n");
        turn--;
    }
    fflush(stdin);
    display2();
    return(0);
}

int queen(char x,char y,char z,char w)
{
    int a,b,c,d,dontmove;

    a=(int)(x-'_')-2;
    b= (int)(y-'0')-1;
    c=(int)(w-'_')-2;
    d= (int)(z-'0')-1;
    if(a-1==c&&b-1==d||a+1==c&&b+1==d||a-2==c&&b-2==d||a+2==c&&b+2==d||a-3==c&&b-3==d||a+3==c&&b+3==d||a-4==c&&b-4==d||a+4==c&&b+4==d||a-5==c&&b-5==d||a+5==c&&b+5==d||a-6==c&&b-6==d||a+6==c&&b+6==d||a+1==c&&b+1==d||a+1==c&&b+1==d||a+2==c&&b+2==d||a+2==c&&b+2==d||a+3==c&&b+3==d||a+3==c&&b+3==d||a+4==c&&b+4==d||a+4==c&&b+4==d||a+5==c&&b+5==d||a+5==c&&b+5==d||a+6==c&&b+6==d||a+6==c&&b+6==d||a-1==c&&b-1==d||a-1==c&&b-1==d||a-2==c&&b-2==d||a-2==c&&b-2==d||a-3==c&&b-3==d||a-3==c&&b-3==d||a-4==c&&b-4==d||a-4==c&&b-4==d||a-5==c&&b-5==d||a-5==c&&b-5==d||a-6==c&&b-6==d||a-6==c&&b-6==d||a+1==c&&b+1==d||a-1==c&&b-1==d||a+2==c&&b+2==d||a-2==c&&b-2==d||a+3==c&&b+3==d||a-3==c&&b-3==d||a+4==c&&b+4==d||a-4==c&&b-4==d||a+5==c&&b+5==d||a-5==c&&b-5==d||a+6==c&&b+6==d||a-6==c&&b-6==d)
    {
        if(turn%2==0)
        {
            board[c][d]='q';
            board[a][b]='.';
        }
        else
        {
            board[c][d]='Q';
            board[a][b]='.';
        }
    }
    if(b==d)
    {
        if(a>c)
        {
            for(a; a>=c; a++)
            {
                if(board[a][d]=='h'||board[a][d]=='H'||board[a][d]=='P'||board[a][d]=='p'||board[a][d]=='k'||board[a][d]=='K'||board[a][d]=='Q'||board[a][d]=='q'||board[a][d]=='c'||board[a][d]=='C'||'e'||'E')
                {
                    dontmove=10;

                    if (turn%2==0)
                    {
                        if(board[c][d]=='h'||board[c][d]=='p'||board[c][d]=='k'||board[c][d]=='q'||board[c][d]=='c'||board[c][d]=='e')
                        {
                            dontmove=0;
                        }
                    }
                    else if(board[c][d]=='H'||board[c][d]=='P'||board[c][d]=='K'||board[c][d]=='Q'||board[c][d]=='C'||board[c][d]=='E')
                    {
                        dontmove=0;
                    }
                }

            }
        }
        if(a<c)
        {
            for(a; a<=c; a++)
            {
                if(board[a][d]=='h'||board[a][d]=='H'||board[a][d]=='P'||board[a][d]=='p'||board[a][d]=='k'||board[a][d]=='K'||board[a][d]=='Q'||board[a][d]=='q'||board[a][d]=='c'||board[a][d]=='C'||'e'||'E')
                {
                    dontmove=10;
                    if (turn%2==0)
                    {
                        if(board[c][d]=='h'||board[c][d]=='p'||board[c][d]=='k'||board[c][d]=='q'||board[c][d]=='c'||board[c][d]=='e')
                        {
                            dontmove=0;
                        }
                    }
                    else if(board[c][d]=='H'||board[c][d]=='P'||board[c][d]=='K'||board[c][d]=='Q'||board[c][d]=='C'||board[c][d]=='E')
                    {
                        dontmove=0;
                    }
                }

            }
        }

    }
    else if(a==c)
    {
        if(b>a)
        {


            for(a=b; b<=d; b++)
            {

                if(board[a][d]=='h'||board[a][d]=='H'||board[a][d]=='P'||board[a][d]=='p'||board[a][d]=='k'||board[a][d]=='K'||board[a][d]=='Q'||board[a][d]=='q'||board[a][d]=='c'||board[a][d]=='C'||'e'||'E')
                {
                    dontmove=10;
                    if (turn%2==0)
                    {
                        if(board[c][d]=='h'||board[c][d]=='p'||board[c][d]=='k'||board[c][d]=='q'||board[c][d]=='c'||board[c][d]=='e')
                        {
                            dontmove=0;
                        }
                    }
                    else if(board[c][d]=='H'||board[c][d]=='P'||board[c][d]=='K'||board[c][d]=='Q'||board[c][d]=='C'||board[c][d]=='E')
                    {
                        dontmove=0;
                    }
                }

            }
        }
        if(b<a)
        {


            for(a=b; b<=d; b++)
            {

                if(board[a][d]=='h'||board[a][d]=='H'||board[a][d]=='P'||board[a][d]=='p'||board[a][d]=='k'||board[a][d]=='K'||board[a][d]=='Q'||board[a][d]=='q'||board[a][d]=='c'||board[a][d]=='C'||'e'||'E')
                {
                    dontmove=10;
                    if (turn%2==0)
                    {
                        if(board[c][d]=='h'||board[c][d]=='p'||board[c][d]=='k'||board[c][d]=='q'||board[c][d]=='c'||board[c][d]=='e')
                        {
                            dontmove=0;
                        }
                    }
                    else if(board[c][d]=='H'||board[c][d]=='P'||board[c][d]=='K'||board[c][d]=='Q'||board[c][d]=='C'||board[c][d]=='E')
                    {
                        dontmove=0;
                    }
                }

            }
        }

    }
    //printf("%d a\n%d b\n%d c\n%d d\n ",a,b,c,d);

    else if(b==d&&dontmove!=10||a==c&&dontmove!=10)
    {
        if(turn%2==0)
        {
            board[c][d]='q';
            board[a][b]='.';
        }
        else
        {
            board[c][d]='Q';
            board[a][b]='.';
        }
    }
    else
    {

        printf("Move not possible\n");
        turn--;
    }
    fflush(stdin);
    display2();
    return(0);
}
int king(char x,char y,char z,char w)
{
    int a,b,c,d;
    int dontmove;

    a=(int)(x-'_')-2;
    b= (int)(y-'0')-1;
    c=(int)(w-'_')-2;
    d= (int)(z-'0')-1;
    //printf("%d a\n%d b\n%d c\n%d d\n ",a,b,c,d);
    if (turn%2==0)
    {
        if(board[c][d]=='h'||board[c][d]=='p'||board[c][d]=='k'||board[c][d]=='q'||board[c][d]=='c'||board[c][d]=='e')
        {
            dontmove=0;
        }
    }
    else if(board[c][d]=='H'||board[c][d]=='P'||board[c][d]=='K'||board[c][d]=='Q'||board[c][d]=='C'||board[c][d]=='E')
    {
        dontmove=0;
    }
    if(abs(a-c)==1&&dontmove!=0||abs(b-d)==1&&dontmove!=0)
    {
        if(turn%2==0)
        {
            board[c][d]='k';
            board[a][b]='.';
        }
        else
        {
            board[c][d]='K';
            board[a][b]='.';
        }
    }
    else
    {
        printf("Move not possible\n");
        turn--;
    }
    fflush(stdin);
    display2();
    return(0);
}
int check()
{
    int i,j,king1,king2;

    if(turn%2==0)
    {
        for(i=0; i<8; i++)
        {
            for(j=0; j<8; j++)
            {
                if(board[i][j]=='K')
                {
                    king1=i;
                    king2=j;
                    break;
                }
            }
        }
        if(board[king1-1][king2-1]=='p'||board[king1-1][king2+1]=='p')
        {
            return(1);
        }
        if(board[king1-1][king2-1]=='p'||board[king1-1][king2+1]=='p')
        {
            return(1);
        }

    }
    else
    {
        for(i=0; i<8; i++)
        {
            for(j=0; j<8; j++)
            {
                if(board[i][j]=='k')
                {
                    king1=i+1;
                    king2=j+1;
                    break;
                }
            }
        }
        if(board[king1+1][king2+1]=='P'||board[king1+1][king2-1]=='P')
        {
            return(1);
        }


    }


    return(0);
}
int checkmate()
{


    return(0);
}


