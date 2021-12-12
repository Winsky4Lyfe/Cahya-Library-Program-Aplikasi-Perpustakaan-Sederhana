#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header/main.h"

void login()
{
    printf("\n------------------------------------------------");
    printf("\nMasukan Username : ");
    scanf("%s",&user);
    printf("Masukan Password : ");
    scanf("%s",&pass);
    printf("------------------------------------------------\n");

    if(strcmp(user, "admin") == 0 && strcmp(pass, "admin") == 0)
    {
        printf("\n------------------------------------------------");
        printf("\nAkses diterima. Selamat Datang.");
        printf("\n------------------------------------------------\n");
        system("pause");
    }
    else
    {
        printf("\n------------------------------------------------");
        printf("\nUsername atau Password yang anda masukkan salah.");
        printf("\n------------------------------------------------\n");
        system("pause");
        exit(1);
    }
}
