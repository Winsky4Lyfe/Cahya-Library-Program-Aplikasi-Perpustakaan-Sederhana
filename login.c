#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header/main.h"

void login()
{
    printf("\nMasukan Username : ");
    scanf("%s",&user);
    printf("Masukan Password : ");
    scanf("%s",&pass);

    if(strcmp(user, "admin") == 0 && strcmp(pass, "admin") == 0)
    {
        printf("\nAkses diterima. Selamat Datang.\n");
        system("pause");
    }
    else
    {
        printf("\nUsername dan Password yang anda masukkan salah.\n");
        system("pause");
        exit(1);
    }
}