#include "lista.h"
#include "intro.h"

int main(){

    intro();
    setlocale(LC_ALL, "Portuguese");

	int *ptr_b, *ptr_a, **ptr_p, val = 55,i;
	ptr_a = (int*) malloc (4 * sizeof(int));
	ptr_b = &ptr_a[1];
	ptr_p = &ptr_b;

    mudar_cor(1);

    printf("\n\t\t -- LISTA DE FUN??ES COM PONTEIROS --\n\n");

    mudar_cor(9);
    printf("- Defini??o de constantes e vari?veis.\n\n");
	for (i =0; i<4; i++)
	{
		ptr_a[i] = 2*i + 1;
		printf("ptr_a[%i]:\t%d\n",i, ptr_a[i]);
	}

	val = ptr_b[1];

	printf("\nptr_a:\t%6X\n", ptr_a);
	printf("ptr_b:\t%6X\n", ptr_b);
  	printf("ptr_p:\t%6X\n\n", ptr_p);

    mudar_cor(11);
	printf("Valor de a) ptr_p[0][2]: ");
	mudar_cor(10);
	printf("%d\n", ptr_p[0][2]);

	mudar_cor(11);
	printf("Valor de b) ptr_a[4]: ");
	mudar_cor(10);
	printf("%d", ptr_a[4]);
	mudar_cor(4);
	printf("\t--- ERRO ---\n");

	mudar_cor(11);
	printf("Valor de c) **ptr_p + 3: ");
	mudar_cor(10);
	printf("%d\n", **ptr_p + 3);

    mudar_cor(11);
	printf("Valor de d) *(ptr_b+1) + val: ");
	mudar_cor(10);
	printf("%d\n", *(ptr_b+1) + val);

    mudar_cor(11);
	printf("Valor de e) ptr_p[0]: ");
	mudar_cor(10);
	printf("%6X\n", ptr_p[0]);

    mudar_cor(11);
	printf("Valor de f) ++(*ptr_b): ");
	mudar_cor(10);
    printf("%d\n", ++(*ptr_b));

    mudar_cor(11);
	printf("Valor de g) *(ptr_p - 1): ");
	mudar_cor(10);
	printf("%6X\n", *(ptr_p - 1));

    mudar_cor(11);
	printf("Valor de h) *(ptr_b+1) * 2: ");
	mudar_cor(10);
	printf("%d\n", *(ptr_b+1) * 2);

    mudar_cor(11);
	printf("Valor de i) &(*ptr_p): ");
	mudar_cor(10);
	printf("%6X\n", &(*ptr_p));

    mudar_cor(11);
	printf("Valor de j) *(&ptr_b[1] - 2) + 3: ");
	mudar_cor(10);
	printf("%d\n", *(&ptr_b[1] - 2) + 3);

    mudar_cor(11);
	printf("Valor de k) ptr_b[1] == *(ptr_a + 1): ");
	mudar_cor(10);
	printf("%d\n", ptr_b[1] == *(ptr_a +1));

	mudar_cor(11);
	printf("Valor de l) *ptr_p - (*ptr_b - 6): ");
	mudar_cor(10);
	printf("%6X\n", *ptr_p - (*ptr_b - 6));

	mudar_cor(11);
	printf("Valor de m) val * *ptr_b: ");
	mudar_cor(10);
	printf("%d\n", val * *ptr_b);

    mudar_cor(11);
	printf("Valor de n) ptr_b + ptr_a[1] - 5: ");
	mudar_cor(10);
	printf("%6X\n", ptr_b + ptr_a[1] - 5);

	mudar_cor(11);
	printf("Valor de o) **(&ptr_b + 1): ");
	mudar_cor(10);
	printf("%d", **(&ptr_b + 1));
	mudar_cor(4);
	printf("\t--- ERRO ---\n");

    mudar_cor(1);
    printf("\n\t\t--- LISTA DE FUN??ES EQUIVALENTES ---\n\n");

	ptr_b = &ptr_a[1];
	ptr_p = &ptr_b;

    mudar_cor(9);
    printf("- Defini??o de constantes e vari?veis.\n\n");
	for (i =0; i<4; i++)
	{
		ptr_a[i] = 2*i + 1;
		printf("ptr_a[%i]:\t%d\n",i, ptr_a[i]);
	}

	val = ptr_b[1];

	printf("\nptr_a:\t%6X\n", ptr_a);
	printf("ptr_b:\t%6X\n", ptr_b);
  	printf("ptr_p:\t%6X\n\n", ptr_p);

    mudar_cor(11);
	printf("Valor de a) *(ptr_p[0] + 2): ");
	mudar_cor(10);
	printf("%d\n", *(ptr_p[0] + 2));

	mudar_cor(11);
	printf("Valor de b) *(ptr_a + 4): ");
	mudar_cor(10);
	printf("%d", *(ptr_a + 4));
	mudar_cor(4);
	printf("\t--- ERRO ---\n");

	mudar_cor(11);
	printf("Valor de c) *(*(ptr_p)) + 3: ");
	mudar_cor(10);
	printf("%d\n", *(*(ptr_p)) + 3);

	mudar_cor(11);
	printf("Valor de d) ptr_b[1] + val: ");
	mudar_cor(10);
	printf("%d\n", ptr_b[1] + val);

	mudar_cor(11);
	printf("Valor de e) *ptr_p: ");
	mudar_cor(10);
	printf("%6X\n", *ptr_p);

    mudar_cor(11);
	printf("Valor de f) ++(ptr_b[0]): ");
	mudar_cor(10);
	printf("%d\n", ++(ptr_b[0]));

    mudar_cor(11);
	printf("Valor de g) *ptr_p - 1: ");
	mudar_cor(10);
	printf("%6X\n", ptr_p[-1]);

    mudar_cor(11);
	printf("Valor de h) ptr_b[1] * 2: ");
	mudar_cor(10);
	printf("%d\n", ptr_b[1] * 2);

    mudar_cor(11);
	printf("Valor de i) *&ptr_p: ");
	mudar_cor(10);
	printf("%6X\n", *&ptr_p);

    mudar_cor(11);
	printf("Valor de j) *(&ptr_b[1] - 2) + 3: ");
	mudar_cor(10);
	printf("%d\n", *(&ptr_b[1] - 2) + 3);

    mudar_cor(11);
	printf("Valor de k) *(ptr_b + 1) == *(&ptr_a[1]): ");
	mudar_cor(10);
	printf("%d\n", *(ptr_b + 1) == *(&ptr_a[1]));

    mudar_cor(11);
	printf("Valor de l) ptr_p[0] - (ptr_b[0] - 6): ");
	mudar_cor(10);
	printf("%6X\n", ptr_p[0] - (ptr_b[0] - 6));

    mudar_cor(11);
	printf("Valor de m) val * ptr_b[0]: ");
	mudar_cor(10);
	printf("%d\n", val * ptr_b[0]);

    mudar_cor(11);
	printf("Valor de n) ptr_b + *(ptr_a + 1) - 5: ");
	mudar_cor(10);
	printf("%6X\n",ptr_b + *(ptr_a + 1) - 5);

    mudar_cor(11);
	printf("Valor de o) **(ptr_p + 1): ");
	mudar_cor(10);
	printf("%d", **(ptr_p+1));
	mudar_cor(4);
	printf("\t--- ERRO ---\n");
	mudar_cor(7);

return 0;
}
