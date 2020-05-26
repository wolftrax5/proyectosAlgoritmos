#include "stdlib.h"
#include "stdio.h"
#include "string.h"

struct client
{
    /* data */
    char Name[50];
    char Id[10];
    float Credit;
    char Address[100];
};

int main(int argc, char const *argv[])
{
    /* code */
    struct client client1 = {0};
    strcpy(client1.Name, "Alejandro Medina");
    strcpy(client1.Id, "0000000001");
    client1.Credit = 100000;
    strcpy(client1.Address, "Alaman 135 Mexico Aguascalientes");
    printf("The cliet Name is : %s \n", client1.Name);
    printf("The cliet ID is : %s \n", client1.Id);
    printf("The cliet Credit is: %f \n", client1.Credit);
    printf("The cliet Address is : %s \n", client1.Address);
    return 0;
}

// compilacion  gcc uddt.c -o uddt.exe
