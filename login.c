#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "project.c"
#include "title.c"

static int i = 0;
struct w
{
    char nama[30], pass[30];
} w[100];
int n;
void login(void);
void reg(void);
void main()
{
menu:
    system("cls");
    system("color 80");
    title();
    printf("\n\nPress any key to Continue");
    if (getch() == 13)
    {
        system("cls");
        title();
    }
    else
    {
        goto menu;
    }
menu_main:
    printf("\n\t\t1] Sign In\n\t\t2] Register\n");
    printf("\n\n\n\tInput: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        system("cls");
        title();
        login();
        break;
    case 2:
        system("cls");
        title();
        reg();
        break;
    default:
        system("cls");
        title();
        printf("\n\n\t\t\t\tInvalid Input!");
        getch();
        system("cls");

        title();
        goto menu_main;
    }
}
void login()
{
    FILE *fp;
    char c, nama[10], pass[10];
    int z = 0;
    int cekun, cekpw;
    fp = fopen("file.txt", "r");
    for (i = 0; i <= 10; i++)
    {
        printf("\n\n\t\t\t\t  Username: ");
        scanf("%s", nama);
        printf("\n\t\t\t\t  Password: ");
        while ((c = getch()) != 13)
        {
            pass[z++] = c;
            printf("%c", '*');
        }
        pass[z] = '\0';
        while (!feof(fp))
        {
            fread(&w[i], sizeof(w[i]), 1, fp);
            cekun = strcmp(nama, w[i].nama);
            cekpw = strcmp(pass, w[i].pass);
            if (cekun == 0 && cekpw == 0)
            {
                system("cls");

                title();
                printf("\n\n\n\t\t\tLogin Successfull!");
                getch();
                project();
            }
            else if (cekun == 0)
            {
                printf("\n\n\n\t\t\t Invalid Credentials!");
                printf("\n\n\t\t\t\t  Enter to Retry!\n");
                //if (getch() == 32)
                getch();
                system("cls");
                title();
                login();
            }
            else if (cekun != 0 && cekpw != 0)
            {
            h:
                printf("\n\n\n\t\t\tInvalid Username\n\t\t\tSpace to Register!\n\t\t\tPress any key to Retry");
                if (getch() == 32)
                {
                    system("cls");

                    title();
                    reg();
                }
                else
                {
                    system("cls");

                    title();
                    login();
                }
            }
            else if (cekun != 0 && cekpw == 0)
            {
                goto h;
            }
        }
        break;
    }
    getch();
}
void reg()
{
    FILE *fp;
    char c, username[30];
    int z = 0;
    fp = fopen("file.txt", "ab+");
    system("cls");

    title();
    for (i = 0; i < 99; i++)
    {
        printf("\n\n\t\t\t\t  Username: ");
        scanf("%s", username);
        while (!feof(fp))
        {
            fread(&w[i], sizeof(w[i]), 1, fp);
            if (strcmp(username, w[i].nama) == 0)
            {
                system("cls");

                title();
                printf("\n\n\t\t\t  Username is Unavailable!");
                getch();
                system("cls");

                title();
                reg();
            }
            else
            {
                strcpy(w[i].nama, username);
                break;
            }
        }
        z = 0;
        printf("\n\n\t\t\t\t  Password: ");
        while ((c = getch()) != 13)
        {
            w[i].pass[z++] = c;
            printf("%c", '*');
        }
        fwrite(&w[i], sizeof(w[i]), 1, fp);
        fclose(fp);
        printf("\n\n\tEnter to Continue with the Credentials?");
        if ((c = getch()) == 13)
        {
            system("cls");

            title();
            printf("\n\n\t\tRegistered Successfully!");
            printf("\n\n\t\t   Enter to Continue to Login\n\n\t\t   ESC to Exit\n\n\t\t\t\t");
            if (getch() == 13)
            {
                system("cls");

                title();
                login();
            }
            else if (getch() == 27)
            {
                system("cls");
                break;
            }
        }
        break;
    }
}