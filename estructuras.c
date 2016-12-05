#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct alumno{
	float nota;
	char nombre[40];
	int edad;
};
int main(int argc, char *argv[]) {
	fflush(stdin);
	struct alumno a1;
	printf("Nombre del alumno: ");
	scanf("%s",&a1.nombre);
	printf("Edad: ");
	scanf("%d",&a1.edad);
	printf("Nota:");
	scanf("%f",&a1.nota);
	printf("datos: %s %d %.2f",a1.nombre,a1.edad,a1.nota);
	system("PAUSE");
	return 0;
}
