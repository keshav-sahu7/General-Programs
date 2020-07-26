/*
    author : Keshav Sahu

*/


#include <cstdio>
#include <cstring>
#include <cctype>
#include <cstdlib>
using namespace std;

void print(char c)
{
    if(islower(c))
        c = toupper(c);
    switch(c)
    {
        case 'A':
        printf("ooooo\no   o\nooooo\no   o\no   o\n\n\n");
        break;
        case 'B':
        printf("oooo \no   o\nooooo\no   o\noooo \n\n\n");
        break;
        case 'C':
        printf(" oooo\no    \no    \no    \n oooo\n\n\n");
        break;
        case 'D':
        printf("oooo \n o  o\n o  o\n o  o\noooo \n\n\n");
        break;
        case 'E':
        printf("ooooo\no    \nooooo\no    \nooooo\n\n\n");
        break;
        case 'F':
        printf("ooooo\no    \nooooo\no    \no    \n\n\n");
        break;
        case 'G':
        printf("ooooo\no   o\no    \no ooo\nooo o\n\n\n");
        break;
        case 'H':
        printf("o   o\no   o\nooooo\no   o\no   o\n\n\n");
        break;
        case 'I':
        printf("   o \n   o \n   o \n   o \n   o \n\n\n");
        break;
        case 'J':
        printf("  oo \n   o \n   o \n o o \n ooo \n\n\n");
        break;
        case 'K':
        printf(" o  o\n o o \n oo  \n o o \n o  o\n\n\n");
        break;
        case 'L':
        printf(" o  \n o   \n o   \n o  o\n oooo\n\n\n");
        break;
        case 'M':
        printf(" o o \no o o\no o o\no   o\no   o\n\n\n");
        break;
        case 'N':
        printf("o   o\noo  o\no o o\no  oo\no   o\n\n\n");
        break;
        case 'O':
        printf("ooooo\no   o\no   o\no   o\nooooo\n\n\n");
        break;
        case 'P':
        printf("ooooo\no   o\nooooo\no    \no    \n\n\n");
        break;
        case 'Q':
        printf("oooo \no  o \no  o \noooo \n    o\n\n\n");
        break;
        case 'R':
        printf("ooooo\no   o\noooo \no  o \no   o\n\n\n");
        break;
        case 'S':
        printf("ooooo\no    \nooooo\n    o\nooooo\n\n\n");
        break;
        case 'T':
        printf("ooooo\n  o  \n  o  \n  o  \n  o  \n\n\n");
        break;
        case 'U':
        printf("o   o\no   o\no   o\no   o\n ooo \n\n\n");
        break;
        case 'V':
        printf("o   o\no   o\no   o\n o o \n  o  \n\n\n");
        break;
        case 'W':
        printf("o   o\no   o\no o o\no o o\noo oo\n\n\n");
        break;
        case 'X':
        printf("o   o\n o o \n  o  \n o o \no   o\n\n\n");
        break;
        case 'Y':
        printf("o   o\n o o \n  o  \n  o  \n  o  \n\n\n");
        break;
        case 'Z':
        printf("ooooo\n   o \n  o  \n o   \nooooo\n\n\n");
        break;
        case ' ':
        printf("\n\n\n\n\n\n\n");
        break;
        default:
        printf("\n   not \nsupported\ncharacter\n\n\n\n");
    }
}

void print(char name[],int len)
{
    for (int i = 0; i < len; i++)
    {
        print(name[i]);
    }
}

int main()
{
    char name[20];
    printf("Enter Your Name\n");
    gets(name);
    
    int len = strlen(name);
    printf("View the magic\n\n\n");
    print(name,len);
    system("pause");
    return 0;
}
