## define_big_number.c

```c
#define BIG_NUMBER 10 ** 10

int main()
{
    int index = 0;                

    while (index < BIG_NUMBER) {
        index = index * 8;
    }
    return (0);
}
```

## define_composto.c

```c
#include <stdio.h>

#define FIRST_PART      7 
#define LAST_PART       5 
#define ALL_PARTS       FIRST_PART + LAST_PART 

int main() { 
    printf("O quadrado de todas as partes vale %d\n", 
	ALL_PARTS * ALL_PARTS); 
    return (0);
} 
```

## define_composto_1.c

```c
#include <stdio.h>

#define SIZE    10;
#define SIZE_2  (SIZE -2);

int main()
{
    int tamanho;
    
    tamanho = SIZE_2;
    printf("O tamanho vale %d\n", tamanho);
    return (0);
}
```

## ifdef.c

```c
#include <stdio.h>

#define FIRST_PART      7 
#define LAST_PART       5 
#define ALL_PARTS       (FIRST_PART + LAST_PART) 

int main() { 
    printf("O quadrado de todas as partes vale %d\n", 
	ALL_PARTS * ALL_PARTS); 
    
#ifdef DEBUG
  printf("##FIRST_PART: %d\n", FIRST_PART);
#endif
    
    
    return (0);
} 
```

## macros.c

```c
#include <stdio.h>
#include <stdlib.h>

#define SQR(x) ((x) * (x))

#define DEBUG

int main()
{
    int counter;

    for (counter = 0; counter < 5; ++counter)
    {
        printf("x: %d, x ao quadrado: %d\n",
            counter+1, SQR(counter+1));
    }

    #ifdef DEBUG
    puts("Debug ativado!");
    #endif // DEBUG

    getchar();

    return (0);
}
```

## macros_string.c

```c
#include <stdio.h>

#define con(a,b) a ## b
#define mkstr(x) #x

int main(){

    printf("%s\n", (con(mkstr(a\),b)));
}
```

## operador_string.c

```c
#include <stdio.h>

#define MKSTR(S) # S

int main()  {    
    printf(MKSTR(Teste de string));
        
    return 0;
}
```

## operador_string_1.c

```c
#include <stdio.h>

#define CONCAT(A,B)  A ## B

int main()
{
int xy = 10;
printf("%d \n", CONCAT(x,y));
}
```