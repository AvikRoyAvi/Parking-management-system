#include<stdio.h>
#include<conio.h>

int menu();
void rickshaw();
void cycle();
void bus();
void showDetails();
void delete();

int nor = 0, nob = 0, noc = 0, amount = 0, count = 0;

void main()
{
    while (1)
    {
        clrscr();
    
        switch(menu())
        {
            case 1:
                bus();
                break;
            case 2:
                rickshaw();
                break;
            case 3:
                cycle();
                break;
            case 4:
                showDetails();
                break;
            case 5:
                delete();
                break;
            case 6:
                exit(0);
            default:
                printf("\nInvalid choice.");
    }

        getch();
    }
    
}

int menu()
{
    int ch;
    printf("1. Enter Rickshaw.\n2. Enter Cycle.\n3. Enter Bus.\n4. Show status.\n5. Delete data.\n6. Exit.");
    printf("\n\nEnter your choice: %d", ch);
    scanf("%d", &ch);
    return(ch);
}

void rickshaw()
{
    printf("Entry Success!");
    nor++;
    amount = amount + 50;
    count++;
}

void cycle()
{
    printf("Entry Success!");
    noc++;
    amount = amount + 20;
    count++;
}

void bus()
{
    printf("Entry Success!");
    nob++;
    amount = amount + 100;
    count++;
}

void showDetails()
{
    printf("Entered number of Bus: %d\n", nob);
    printf("Entered number of Rickshaw: %d\n", nor);
    printf("Entered number of Cycle: %d\n", noc);
    printf("Total number of vahicle: %d\n", count);
    printf("Total gained amount: %d\n", amount);
}

void delete()
{
    nor = 0;
    noc = 0;
    nob = 0;
    amount = 0;
    count = 0;
}