/*
2 arrais con apuntadores 
a,b,...,e       el usuario mete un numero y se rellena de a a e sumando de 1 en 1
z, y,...,v el usuario mete n y se rellena de v a z sumando de 10 en 10
se intercambian los valores de las "tablas"
al final se imprime de a-e y de z-v
*/
#include <stdio.h>

int main(){
    int a, b, c, d, e;
    int z, y, x, w, v;
    int *ptri_1 = NULL, *ptrf_1 = NULL;
    int *ptri_z = NULL, *ptrf_z = NULL;
    int n1, n2;
	int tmp;

//esto solo muestra las direcciones  

    printf("Direccion de a: %p\n",&a);
	printf("Direccion de b: %p\n",&b);
	printf("Direccion de c: %p\n",&c);
	printf("Direccion de d: %p\n",&d);
	printf("Direccion de e: %p\n",&e);

    printf("Direccion de z: %p\n",&z);
	printf("Direccion de y: %p\n",&y);
	printf("Direccion de x: %p\n",&x);
	printf("Direccion de w: %p\n",&w);
	printf("Direccion de v: %p\n",&v);

    ptri_1=&a;
	ptrf_1=&e;

    ptri_z = &z;
    ptrf_z = &v;

	printf("Contenido de ptr_inicio: %p\n",ptri_1);
	printf("Contenido de ptr_fin: %p\n",ptrf_1);

	printf("Desde que numero quieres empezar? en ambas listas: ");
	scanf("%d %d", &n1, &n2); 

    while(ptri_1 != ptrf_1) {
		*ptri_1 = n1;
		n1++;
		ptri_1--;
	}

	while(ptri_z != ptrf_z) {
		*ptri_z = n2;
		n2 += 10;
		ptri_z--;
	}

    *ptri_1 = n1;

	printf("\n\n");
	printf("Contenido de a: %d\n",a);
	printf("Contenido de b: %d\n",b);
	printf("Contenido de c: %d\n",c);
	printf("Contenido de d: %d\n",d);
	printf("Contenido de e: %d\n",e);

	printf("Contenido de z: %d\n",z);
	printf("Contenido de y: %d\n",y);
	printf("Contenido de x: %d\n",x);
	printf("Contenido de w: %d\n",w);
	printf("Contenido de v: %d\n",v);

	printf("\n\n");

	printf("Contenido de ptr_inicio: %p\n",ptri_1);
	printf("Contenido de ptr_fin: %p\n",ptrf_1);

	tmp = a;
	a = z;
	z = tmp;

	tmp = b;
	b = y;
	y = tmp;

	tmp = c;
	c = x;
	x = tmp;

	tmp = d;
	d = w;
	w = tmp;

	tmp = e;
	e = v;
	v = tmp;

	printf("Contenido de a: %d\n",a);
	printf("Contenido de b: %d\n",b);
	printf("Contenido de c: %d\n",c);
	printf("Contenido de d: %d\n",d);
	printf("Contenido de e: %d\n",e);

	printf("Contenido de z: %d\n",z);
	printf("Contenido de y: %d\n",y);
	printf("Contenido de x: %d\n",x);
	printf("Contenido de w: %d\n",w);
	printf("Contenido de v: %d\n",v);

    return 0;
}
