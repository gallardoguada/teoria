Universidad
Tecnológica
Nac ional 
Fa c ultad
Regi onal Res istencia
Té c nic o
Universitario
en
P rogra mación


Universidad
Tecnológica
Nac ional 
Fa c ultad
Regi onal
Res istencia
Té c nic o
Unive rs itario
en
P rogra mación

getcha r

putchar

sc anf

pr intf

gets

puts
.

Es tas
s ei s
func i ones
permiten
la
transfe renci a
de
i nformac i ón
entre
la
c omputa dora
y 
l os
di s positiv os
de
entrada/
s al ida
es tándar
(por
ej empl o,
un
tec l ado
y
un
moni tor).

getchar
y
putchar,
permi ten
la
transfe renci a
de
c aracteres
i ndi viduales
hacia
dentro
y
hac i a
fuera
de
la
c omputa dora;

gets
y
puts
permi ten
la
en trad a
y
s al i dade
c adenas
dec aracteres .

scanf
y
printf
s on
más
c ompl ic adas,
pero
permi ten
la
transfe renci a
de
c aracteres  
i ndi viduales ,
v al ores
numéri c os
y
c adenas
de
c ara c tere s
;


#
include
<
stdio.h
> /* nec esa riopara utilizar 
printf
()*/
#
include
<
conio.h
>/* nece sario para utilizar 
getch
()*/
int 
ma in()
{
char
c;
c=
getchar
();
putchar
(c);
getch
();
return
0;
}

getchar
y
putchar,
permiten
la
transferencia
de
caracteres
individuales
hacia
dentroy
hacia
fuera
de
la
computadora;


#include <stdio.h> /* necesa riopara utilizar printf()*/
#include < conio.h>/* nece sario para utilizar getch()*/
int m ain()
{
charc;
printf("Ingrese  un caracterportec lado");
printf
("
\
n");
c= getchar();
printf("El caracteringresa do es:" );
putchar (c);
return 
0;
}


#inclu de<stdio. h>/*nec esariopara utilizarprintf()*/
#include<conio. h>/* necesariopara utilizargetch()*/
intmain()
{
char c[10];
printf("In grese su nomb reporteclado");
printf
("
\
n");
gets(c );
printf("Elnom breingresado es:");
puts (c);
return0;
}

gets
y
puts
per miten
la
entrada
y
sa lida
de
ca denas
de
ca racteres
.


Es
la
fun ción
de
sali da
de
datos
con
formato .
La
s inta x is
es
:
prin tf
(texto, cadenade
control ,
li sta
de
argu mento s);
int
a;
a=
2;
...
printf

es
:%d",
a);
Universidad
Tecnológica
Nac ional 
Fa c ultad
Regi onal
Res istencia
Té c nic o
Unive rs itario
en
P rogra mación


Universidad
Tecnológica
Nac ional 
Fac ultad
Regional
Res istencia
Té c nic o
Unive rs itario
en
P rogra mación


Universidad
Tecnológica
Nac ional 
Fa c ultad
Regi onal
Res istencia
Téc nico
Univer si tario
en
Programación


#include <stdio.h> /* necesa riopara utilizar printf()*/
#include < conio.h>/* nece sario para utilizar getch()*/
int m ain()
{
charcar;
printf("Ingrese  un caracterportec lado");
printf("
\
n");
car= getchar();
printf("El caracteringresa do es:" );
putchar (car);
printf
("
\
n");
printf("El caracteringresa do 
 W^
return 
0;
}


#inclu de<stdio. h>/*nec esariopara utilizarprintf()*/
#include<conio. h>/* necesariopara utilizargetch()*/
intmain()
{
char car[10];
printf("In grese su nomb reporteclado");
printf("
\
n");
gets(car);
printf("Elnom breingresado es:");
pu ts(car);
printf("
\
n");
printf("Elnom breingresado es%s :",car);
return 0;
}


Universidad
Tecnológica
Nac ional 
Fac ultad
Regional
Res istencia
Té c nic o
Unive rs itario
en
P r ogr a mación
Las
s
e
cu
e
nc
i
as
de
e
s
c
a
p
e
son
c
a
denas
de
c
a
rac
t
e
r
es
que
tienen
di stinto s
signifi cado s
depend iendo
de
la
cadena
que
se
uti li ce
.
La
forma
más
sencilla
de
escribir
una
secuencia
de
escape
es
con
el
carácter
barra
invertid a
(
\
),
seguido
de
un
carácter
especial
.
Por
tanto,
cuando
en
la
cadena
de
control
de
la
fun ción
printf
se
escrib a
una
secuencia
de
escape,
o
bi en
se
mostrará
un
carácter
gráfico
po r
pantall a,
o
bi en
se
realizará
una
acción
.


Universidad
Tecnológica
Nac ional 
Fa c ultad
Regi onal
Res istencia
Té c nic o
Unive rs itario
en
P rogra mación



P e rmi te
e s c ribir
da tos
en
el
dis posi tivo
de
s a li da
e s tándar
util iza ndo
la
func ión
de
bibli ote c aprintf.

P e rmite
mos trar
una
c a de na
c on
forma to
y
mue s tra
la
mis ma
por
la
pa nta ll a.

La
func ión
printf
de l
e je mplo
mue s tra
el
me ns aje

prime r
progra ma"
a pa rece
el
s ímbolo
'
\
n';
e s te
ha c e
que
de s pués
de
mos trar
el
me ns aje
se
pa s e
a
la
lí ne a  
si guie nte,
corresponde
a
un
ca rácter
Ascii
no
imprimible.

La
c a de na
c on
forma to
prove e
una
de s c ripción
de
la
s a li da
c on
el
us o
de
un
a tributo
ma rcador
de
posi c ión
e s pe cifica
que
de s c ribe
el
valor
e s perado
de
un
c a mpo
de
e ntra da
us a ndo
c a racteres
de
e s c ape

pa ra
e s pe cificar
la
posi c ión 
relativa
y
el
tipo
de
s a li da
que
la
func ión
de be
producir.


Universidad
Tecnológica
Nac ional 
Fa c ultad
Regi onal
Res istencia
Téc nico
Univer si tario
en
Programación


Fo rmateadores:
Permite
dar
formato
específico
a
la
salida.
Ejemplo del
uso
de
Formateadores:


Universidad
Tecnológica
Nac ional 
Fa c ultad
Regi onal
Res istencia
Té c nic o
Unive rs itario
en
P rogra mación
#include
<stdio.h > 
int
main
()
{
ch arc; 
fl oat
x,
y; 
int
i;
printf("Ingrese 
un
caracter:");
c 
=
getch ar();
/*entrada
de
un
carácter
*/ 
printf
("Ingrese
un
valor
flotante:");
scanf("%f
\
n",&x );/*
entrada
de
nú mero
en
com a
flotante
*/ 
printf("Ingrese
un
valor
entero:");
scanf("%d
\
n",&i);/*entrada
de
enteros*/ 
printf
("Mostrar
los
valores
ingresados
:");
pu tchar(c
);/*salida
de
un
carácter
*/ 
printf("%3d
%7 .4 f",
i, 
x);
/*
salidade números*/
}


Es
lafunción
de
entr ada
de 
datos
con
f ormato
.
La
sintaxis
es
:
sc anf
(c adena
de
control,
&va ri abl e) ;
El
operador
&
es
necesario
en
scanf()
para
simular
las
ll amadas
por
referencia
,
y
hace
que
la
fun ción
trabaje
internamente
con
la
di rección
de
la
variable
.
Universidad
Tecnológica
Nac ional 
Fa c ultad
Regi onal
Res istencia
Té c nic o
Unive rs itario
en
P rogra mación


Universidad
Tecnológica
Nac ional 
Fa c ultad
Regi onal
Res istencia
Té c nic o
Unive rs itario
en
P rogra mación
#in clude
<stdio.h>
int
main
()
{
float
x; 
int
k;
p rintf("Ingrese 
un 
valor
flotante:");
scanf("%f",&x);/*
e ntrada
de
n ú meroe n
coma 
flotante
*/ 
p rintf("Ingrese
un
valor
e ntero:");
scanf("%d
\
n",&k);/*
e ntrada
de
e nteros
*/
p rintf("Mostrar 
los
valores
in gresados:");
›„]vı(~^o}„
flotante: 
9( ^
y
valor
˚ vı˚„}W9ˆ_U
x,k) ;
}


#
inclu de
<
stdio. h
>/*nec esariopara utilizar 
printf
()*/
#
inclu de
<
conio .h
>/* n eces ariopara utilizar 
getch
()*/
int
main
()
{
ch ar
p;
printf
("I ngres arun  
caracter
porteclado");
p=
getch ar
();
printf
("Elvalorin gres ado p or tec lado es :"),
pu tch ar
(p);
printf
("I ngres arun  
caracter
porteclado
\
n");
scanf
(" %
c",&p
);
printf
("Elvalorin gres ado p or tec lado es :"),
pu tch ar
(p);
return
0;
}


#
inclu de
<
stdio. h
>/*nec esariopara utilizar 
printf
()*/
#
inclu de
<
conio .h
>/* n eces ariopara utilizar 
getch
()*/
int
main
()
{
char
p;
printf
("Ingresarun  
caracter
porteclado");
p=
getch ar
();
printf
("Elvaloringresado portecladoes:"),
putchar
(p);
printf
("Ingresarun  
caracter
porteclado
\
n");
scanf
(" %
c",&p
);
printf
("Elvaloringresado portecladoes %
c",p
);
return
0;
}


EJERCICIOS 


#
include
<
stdio.h
> /* necesario para utilizar 
print f
()*/
int
main
()
{
char
p;
p=gets();
printf
("El valor ingresado por teclado es:");
putchar
(p);
return
0;
}
Ejercicio: 
Encontrarlos errores ycorregir


#
include
<
stdio.h
> /* necesario para utilizar 
print f
()*/
#
include
<
conio.h
> /* necesario para utilizar 
getch
()*/
int
main
()
{
char
p;
p=
getchar
();
printf ("El valor ingresado por teclado es
:")
putchar
(p);
return
0;
}
CORRECCIÓN


Eje rcic io
:
Completar
los
siguientes
trozos
de
programa
e
ind icar
si
se
obtien e
el
mismo
res ultado
.
Expresion
1
Expresion
1
int
a,b,c
;
a=
3
;
b=
4
;
c=a
-
b
;
printf
o
re sultado
de
la
resta
es
%
ˆ_U
)
;
int
a,b,c
;
a=
3
;
b=
4
;
printf
o
re s ultado
de
la
resta
es
%
ˆ_U
-
b)
;


Ejercicio
:
Se
pide
:

Cor regir
los
errores
del
sigu iente
programa
y

d ocu mentar lo
u san d o
comentar ios

cad a
mensa je
que
se
muest ra
por
pa ntal l a
debe
a pa recer
uno
deba jo
del
otro
.
#
include
stdio
.
h
int
mai n
()
{
int
a,b,c
;
p ri ntf
 P„˚’˚
los
val ores
p ara
real izar
la
op eraci ón
resta)
;
p ri ntf
 P„˚’˚
el
p ri mer
Ào }„ 
;
scanf
("
%
f ",&a
)
;
p ri ntf
 P„˚’˚
el
segu n d o
Ào }„ 
;
scanf
("
%
f ",&a
)
;
c=a
-
b
;
p ri ntf

resul tad o
de
la
resta
es
%
ˆ _U
)
;
retu rn
0
;
}


Universidad
Tecnológica
Nacional 
Facultad
Regional
Resistencia
Técnico
Universitar io
en
Pr ogramación
ProgramaciónI
SentenciaIF


Esta
forma
de
programar
(paradigma)
se
basa
en
un
famoso
teorema,
desarrollado
por
Edsger
Dikjstra,
que
demuestra
que
todo
programa
pued e
esc ribirse
utilizando
ún icamente
las
tres
estructuras
básicas
de
control
:

Secu enc ia
:
el
bloque
sec uencial
de
instrucciones,
ejec utadas
suc esivamente,
una
detrás
de
otra.

Selección :
la
instrucción
cond icional
con
dob le
alternativa,
de
la
forma 
^
if 
cond ición
then
instrucción
-
1
else
instrucción
î_X

Iteración:
el
buc le
condicional
^ÁZ]o˚
condición
do
]v’ı„µ]v_U
que
ejec utala
instrucción
repetidamente
mientras
la
cond ición
se
cu mp la.


Las
sentencias
de
control
permiten
controlar
el
fluj o
del
programa,
tomando 
dec ision es
a
partir
de 
com paraciones.

Se
u san
in strucciones
condicionales
y
de
cic los.

Un
condicional
es
un
conjunto
de
sentencias
que
pueden
o
no
ejecutarse,
d e pendiendo
d el
re sultado
de
una
con dición.

Un
cic lo
es
un
conjunto
de
sentencias
que
son
ejecutadas
varias
veces,
hasta
que
una
con dición
de
término
es
satisfecha
.

Tanto
los
condicionales
como
los
ciclos
contienen
a
otras
sentencias
.
Para
indicar
esta
relación
,las
sentencias
contenidas
no
se
escriben
en
la
misma
column a
que
la
sentencia
de
control,
sin o
un
p oco
más
a
la
derecha



Las
i
n
s
tr
u
c
c
iones
co
n
dic
i
onales
s
o
n
:

IF

SWITCH

Las
instrucciones
de 
cic lo
so n:

WHILE

FOR

REPEAT


S
e
us
a
n
para
e
x
presar
co
n
d
i
c
i
o
n
es
y
de
s
c
r
i
b
ir
una
r
e
la
c
i
ó
n
entre
dos
valores
if
(a
==
b)
printf
("Son
iguales");
OPERADOR
DESCRIPCIÓN
BINARIOS
>
Mayo
r
que
>=
Mayo
r
o
i
g
ua
l
que
<
Meno
r
que
<=
Me
n
o
r
o
i
g
ua
l
q
ue
==
I
gua
l
que
!=
Dif eren
t
e
que


La
estructura
if
adopta
una
de
las
dos 
formas
siguientes:
if
(condición)
sentencia;
en 
don decond ición
es
una
sentencia
que
se
evalúa 
com o
verdadera


#inclu de 
<stdi o. h>  
#inclu de
<con io .h >
int
main ()
{
int
nu m;
prin tf
("In grese
un 
nú mero
entero
por
teclado :
"); 
scanf("%d",
&num);
//
ejemplo
de
IF
if
(nu m
>
0) 
prin tf
("
%d
es
POSI TI VO", nu m);
getch();
return
0;
}
EJEMPLO
IF
SIMPLE


if
(condici
ón
)
sentencia1;
else
sentencia2;
en
dond e
expresión
es
una
sentencia
que
se
evalúa
como
verdadera
(devuelve
un
valor
no
nulo)
o
falsa
(devuelve
cero)
.
La
palabra
sentencia
pu ede
se r
una
sentencia
simple
terminada
con
un
punto
y
coma,
o
un
grupo
de
sentencias
encerradas
entre
llaves
{}
.


#inclu de
<stdi o. h>
#inclu de
<con io .h >
int
main ()
{
int
nu m;
printf
("Ing rese
un
nú mero
entero
por
teclado:
");
scanf
("%d",
&n u m);
//
ejempl o
de
IF
if
(nu m
>
0) 
prin tf
("
%d
es
POSI TI VO", nu m);
else
prin tf
("%d
es
negativo
o
ig ual
a
cero
\
n", nu m);
getch(); 
return
0;
}
EJEMPLO
IF
CON
ELSE


#in clu de 
<stdio .h > 
#inclu de
<con io .h >
int
main
()
{
int
n;
prin tf
("Teclee
un 
nú mero
entero:
"); 
scanf("%d",
&n);
//
ejemplo de
IF 
anid ado
simpl e
if
(n 
%
3==
0)
prin tf 
("
%d
es
di visib le
por
3
\
n", n);  
else
prin tf
("%d
No
es
múlti pl o
de
3
\
n", n);
getch(); 
return
0;
}
EJEMPLO
IF
CON
ELSE


#inclu de 
<stdi o. h>  
#inclu de
<con io .h >
int
main
()
{
char
car;
prin tf
("Teclee
un
caractero:
\
n
");
scanf
("%c",
&car);
//
ejemplo
de
IF
anid ado
if 
(car
==
'a')
p rin tf  
("Se
in greso
la 
letra
a
\
n"); 
else
printf 
("Sein gresoel
carácter
%c
\
n",car);
getch();
return
0;
}
EJEMPLO
IF
CON
ELSE
Comillasimple:
alt+ 39


Ejercicio
:
Verificar
si
el
sigu iente
código
cu mple
con
el
enun ciado
.
Si
no
cu mple
con
el
enunc iado
realizar
las
modificaciones
que
considere
necesarias
.
Enu nciado
:
El
programa
lee
un
nu mero
entero
y
lo
t ransforma
en
el
imp ar
inme diatame nte
mayor,
si
es
que
no
era
ya
imp ar
.
int
main
()
{
int
a
;
scanf
("%d", &a); 
if
(a % 2 == 0) /* Comprobar si a es p ar. 
*/
a = a  + 1; 
printf
( "Ahora es  impar: %
d n
", a 
);
return
0;
}
#i nc lude <stdio.h
>


#include<stdio.h> 
#include
<conio.h>
int
main
()
{
int
num,m
;
m=0;
printf
("Teclee
un
numero:
"); 
scanf
("%d",
&num);
if (num <= 10)
{
m=
2*num;
printf
("
El
duplo
de
%d
es
%d",
num,m);
}
else
{
m=3* num;
printf
("El
triplo
de
%d
es
%d
\
n",
num,m);
}
ge
t
ch
(
);  
return
0;
}
EJEMPLO
IF
CON
MÁS 
DE U NA
ACCIÓ N
POR 
COND ICIÓN


#include<stdio.h> 
#include
<conio.h>
int
main
()
{
int
num,m
;
m
=0;
printf
("Teclee
un
numero:
"); 
scanf
("%d",
&num);
if
(
num
>=
0
&&
num
<=
10)
{
m=
2*num;
printf
("
El
duplo
de
%d
es
%d",
num,m);
}
else
printf
("No
realiz ar
ninguna
operacion
\
n");
getch(); 
return
0;
}
EJEMPLO
IF
CON
MÁS 
DE UNA CON DICIÓN 
COMBINADA


Eje rcic io: 
Escribir el programa as ociado al siguiente diagrama  de  flujo



Es
pos ible
utilizar
las
instrucciones
IF
-
ELSE
anidadas,
es
decir,
que
alguna
de
las 
ramas
s ea
a
su
vez
otra
instrucció n
IF
-
ELSE.

Permite
implementar
dec ision es
que
implican
más
de
dos
alternativas.


#inclu de<stdi o. h>  
#inclu de
<con io .h >
int
main ()
{
int
nu m;
prin tf
("In grese
un 
nú mero
entero
por
teclado :
");  
scanf("%d",
&num);
//
ejemplo
de
IF
if
(nu m
>
0) 
p rin tf
("
%d
es
POSI TI VO", nu m);
else
if (num = = 
0) 
prin tf 
("Es 
i g u al 
acero
\
n"); 
else
prin tf
("%d
es
negativo
\
n", nu m);
getch();
return
0;
}
EJEMPLO
IF
ANIDAD O


¿Qué
dific ultad
p resenta
el
p rograma
con
respec to
al
uso
de
IF?


Actúan
sobre
exp resi on es
booleanas,
es
decir,
sob re
valores
verdadero
o
falso
generados
por
expresiones
como
las
explicadas
en
el
caso
anterior
.
OPERADOR
DESCRI PCI ÓN
UNARIO S
!
not
BINARIOS
&&
and
||
or


int
main
() 
{
int
ho ra; 
scanf
("%d", &hora); 
if
((h ora>= 0)&&(ho ra<12)) 
prin tf
("Buenos 
d


"); 
else
if
((hora>= 12)&&(hora<18)) 
printf
("Buenastardes");
else
if
((h ora>= 18)&&(ho ra< 24)) 
prin tf
("Buenasno ches"); 
else
prin tf
("Horano válid a" ); 
getch
();
return
0;
}
#inclu de<stdi o. h>  
#in clu de
<coni o. h>


Ejercicio:
Escrib ir un programa que lea t res val ores enteros ymuestre por pantal la el 
máxi mode ellos a parti r 
del si gu i enteal gori t mo,


¿E s posibleusar en este prog ram alos o peradoreslógicos?


Eje rcicio :Calcularlas raíce sde una ecuac ióncuadrática.


PROGRAMACIÓNI
Universidad
Tecnológica
Nacional 
Facultad
Regional
Resistencia 
Técnico
Superior
en
Programación


Univer sida d
Tecnológica
Nacional 
Fac ultad
Regional
Resistencia 
Téc nico
Superior
en
Pr ogramación
Eje
m
pl
o
:
Ingre
s
ar
tr es
n
ú
me
r
os
y
mo
s
t
r
a
r
los 
por
pantal la
#in clu de 
<stdio .h > 
int
main ()
{
int
nu m;
prin tf 

un a 

scanf("%d",&a);

Numeroin gresado: 
%d 

prin tf

una

scanf("%d", &b);

Numeroin gresado: 
%d 
 
printf

una

scanf("%d", &c);

Numeroin gresado: 
%d 

return
0;
}


Univer sida d
Tecnológica
Nacional 
Fac ultad
Regional
Resistencia 
Téc nico
Superior
en
Pr ogramación
Para
el
ejercicio
planteado,
se
puede
obser var
que
por
cada
vez
que
se
ingresa
una
variable
se
repiten
las
instrucciones
printf
y
scanf
.
Así
por
ejemplo
si
se
quisiera
realizar
la
misma
operación
para
10
n úmeros,
siguiendo
este
método
de
programación
se
debería
escribir
30
líneas
de
código
lo
cual
es
ineficiente
.
Para
solución
este
problema
se
utilizan
las
ESTRUCTURAS
CÍCLICAS
0
REPETITIVAS
.


WHILE
DO
t
WHILE 
FOR
Las
tres
co nstrucciones
para
realizar
bucles
so n:


Univer sida d
Tecnológica
Nacional 
Fac ultad
Regional
Resistencia 
Téc nico
Superior
en
Pr ogramación
Estructuradas
Repetitivas
o
cíc licas
La
estructura
repetitiva
se
utiliza
cuando
se
quiere
que
un
conjunto
de
instrucciones
se
ejecuten
un
cierto
número
finito
de
veces
.
Se
le
llama
bucle
o
ciclo
a
todo
proceso
que
se
repite
un
cierto
número
de
vec es
dentro
de
un
programa
.


Univer sida d
Tecnológica
Nacional 
Fac ultad
Regional
Resistencia 
Téc nico
Superior
en
Pr ogramación
Existen
dos
tipos
de
estructuras
repetitivas
;

la
primera
es
aquella
en
dond e
se
tiene
perfectamente
establecido
el
número
de
veces
que
un
grupo
de
acciones
se
van
a
ejecutar
(
20
,
5
,
2
veces)
.
En
este
caso
se
utiliza
un
contador
.
En
este
caso
el
contador
se
pu ede
incrementar
como
decrementar
.

y
la
segunda
en
la
que
el
número
de
repeticiones
es
desconocido
y
se
hará
hasta
que
se
cumpla
o
no
cierta
condición
.
Por
ejemplo
que
un
número
sea
mayor
que
cero
.
Estructuradas
Repetitivas
o
cíc licas


Univer sida d
Tecnológica
Nacional 
Fac ultad
Regional
Resistencia 
Téc nico
Superior
en
Pr ogramación
Acciones
Simples


Whileprime ro 
evalúa 
la 
co ndición 
y si se 
cumple 
entra 
enel 
ciclo
hasta
que
la 
co ndición
no
se 
cumpla.


Estructuradas
Repetitivas
o
cíclicas


Univer sida d
Tecnológica
Nacional 
Fac ultad
Regional
Resistencia 
Téc nico
Superior
en
Pr ogramación


Univer sida d
Tecnológica
Nacional 
Fac ultad
Regional
Resistencia 
Téc nico
Superior
en
Pr ogramación


Universidad
Tecnológica
Nacional 
Facultad
Regional
Resistencia 
Técnico
Superior
en
Pr ogramaci ón
Eje
m
pl
o
:
Ingre
s
ar
tr es
n
ú
me
r
os
y
mo
s
t
r
a
r
los 
por
pantalla
usando
WHILE
#
include
<stdio.h>
#
include
<conio.h>
int
main()
{
int
cont,acum,a;
cont=0;
/*
inicializ a
contador*/
acum=0;
/*
inicializ a
acumulador* /
w hile
(cont <3 )
{
printf

un
 
scanf
("%d",&a);
printf

Numero
ingresado
:
%
d
\
n
 
;
cont=cont+
1
;
/*
incrementa
contador*/
acum=acum+a
;
}
return
0;

El 
valor
acumulado
es:%d
\

}
En
este
problema
se
tiene
perfectamente
establecido
el
número
de
veces
que
un
gru po
de
acciones
se
van
a
ejecutar
.
En
este
caso
tres
veces
.
La
condición
será
evalua da
antes
de
ca da
iteración
El
cuerpo
del
bucle
w hile
se
ejecuta 
mientras
la
condición
sea
verdadera
El
conta
d
or
y
el
ac
u
mula
d
or
se 
actualiz a
en
ca daiter ac ión


int
main()
{
int
a,b,c;
›„]vı(~^
\
n
Introduce
un
número:

sca
n
f
~^
%
d
_U
&
a
);  
b=1;
while
(b
<=
10)
{
c=a*b;
printf 

%d x %d es = %d 
\
v_UUU
b=b+1;
}
return
0;
}
¿Qué hace el siguiente código?


a
b
c
4
1
4
4
2
8
4
3
12
4
4
16
4
5
20
4
6
24
..
..
..
4
10
40
Comprobación
o
Prueba
de
Escritorio


Calcular
el
perímetro
de
un
cuadrado
solamente
cuando
el
valor
ingresado
sea
correcto
.
La
verificación
se
realizará
solo
tres
veces
.
En
caso
de
que
se
supere
las
tres
posibilidades
se
mos trará
por
pantalla
un
mensaje
explicando
el
error
.
Usar
sentencia
While
.
Eje rc ic io


# includ e <stdio.h>   
int main()
{
int p,a,c;  
p= 0; 
a=0;
c=0;
while (a <=  0 && c < 3 )
{
printf ("Ingres e un  valor positivo
\
n");
scanf ("%d",&a);
c+ +;
}
if ( c== 3) printf("In gres o tres veces  un  valor incorrecto para calcular el 
perímetro.Debe ingres ar un valor positivo");
else
{
p
= a*4;
printf 
("Perimetro= %d
\
n",p);
}
return 0;
}


# include<s tdio.h> 
#
include
<c onio.h>
int
main()
{
int
p,a; 
p=0 ; 
a=0;
w hile
(a
<=
0)
{
print f
("Ingrese
un 
valor
positivo
\
n");
sc an f
("%d",&a );
}
p=
a*4;
printf
("Perimet ro=
%d
\
n",p) ;
getc h() ;
return
0;
}


Calcular
el
perímetro
de
un
cuadrado
solamente
cuando
el
valor
ingresado
se a
correcto
.
Ingres ar
la
cantidad
de
veces
que
se
verificará
que
el
valor
ingre sado
sea
co rrecto
.


# 
i nclu de
<
stdi o.h
> 
i nt
mai n
()
{
i nt
p,a,b,i
;
p=0; 
a=0;
i=0;
print f
("I ng rese l acant i da dde veces que veri f i cará el  val or del l ad o
\
n");
scanf
("%
d",&b
);
whil e
(a <= 0 &&i<b )
{
print f
("I ng rese un val or posi t i vo
\
n");
scanf
("%
d",& a
);
i + +;
}
if
(i==b) 
print f
("Supero l acant i da dde intentospermit i dos");
else
{
p= a*4;
printf
("
Perimetro
= %d
\
n",p
);
}
ret urn
0;
}


Modificar
el
programa
anterior
para
que
el
usuario
pueda
rea lizar
otro
cálc ulo
de
períme tro
si
lo
dese a
.


Realizar
un
programa
que
permita
contar
la
cantidad
de
núme ros
pares
ingre sados
por
teclado
.


# inc lude <s tdio.h> 
#
inc lude 
<c onio.h>
int
main()
{
/*
Es c ri bir
y
c onta r
los
núme ros
pa re s
de
10
núme ros
ingre sa dos
*/
int
num,
c,
d
, 
nu
; 
c =1 ;
d=0 ;
pri ntf
("Ingre se
c a n t i d a d  d e  
numer os a ingre s ar
\
n");
s c a nf
("%d",&
nu);
w hile(c
<=
nu
)
{
pri ntf("Ingre se
un
nume ro
\
n");
s c a nf
("%d",&num);
if (num% 2
==0 )
{
pri ntf("Nume ro:%d
\
n",num); 
d=d+1 ;
} 
c
+
+
;
}
if
(d==0 )
pri ntf
("No
se
ingre s aron
núme ros
pa re s
\
n"); 
e ls e
pri ntf("Se
ingr e sar on
%d
núme ros
pa re s
\
n",d);
ge tc h();
re tur n
0;
}


Dadoel programarealizado anteriormente, modificarlo paraqueel usuario 
pu edarepetirlo si lo desea.


1.
La
sentencia
break
¿ Se
p u e d e 
utilizar
e n u n a
estructura
repetitiva?
2.
La
sentencia
co ntinue
¿ Se puede
u tilizar
en
una
estructura
repetitiva?
3.
¿Existe 
relación
entre
la
sentencia
break
y
la
sentencia
continue?
4.
¿ Qu é
es
un
ciclo
controlado
p or
Bandera
o
cantinela?
Ejemplificar,
crear
un 
e n unciado
y
realizar
el
correspondiente
programa.
Univer sida d
Tecnológica
Nacional 
Fac ultad
Regional
Resistencia 
Téc nico
Superior
en
Pr ogramación
Responde r lassiguientes p
reguntas


Programación
l
Universidad
Tecnológica
Na ciona l 
Facultad
Regional
Resistencia 
Técnico
Superior
en
Programación
Sentencia SWITCH


Se
p u ede
programar
con
un
grupo
de
sentencias
if
the n
e lse
anidadas,
aunque
e llo
puede
se r
de
co mplicada
lectura. 
Para
e vitarlo
sep u e d e
u sar
la 
sentencia
switch.
Su
utilización
es:
switch
(valor)
{
case
valor1:
<sentencias> 
case
valor2:
<sentencias>
...
default:
<sentencias>
}
En
la
sentencia
switch
se
co mprueba
el
valor
que
ingrese
el
usuario
que
es
el
que
tomará
la
varia ble
expresió n
y
lo
compara
co n
al gunas
de
las
etiquetas
que
acompañen
a
cada
case
.
En
caso
de
no
encontrar
ninguna
co inci dencia,
el
valor
lo
tomará
como
default
.
La
sentencia
switch()
en
Lenguaje
C
es
una
sentencia
de
selección
.
Esta
sentencia
permite
seleccionar
las
acciones
a
realizar
de
acuerdo
al
valor
que
tome
una
variable
.


IMPORTANCIA
DE
BREAK
Cu ando
el
control
de l
program a
llega
a
una
sente ncia
switch
y
se
evalúa
la
expresión
de
control
de
la
mism a,
el
programa
comie nza
a
ejecutar
las
se nte ncias
presente s
en
el
bloque
correspondiente
a
alguna
cláusula
case,
o
quizá
a
la
claúsula
default
.
¿Qué
s uce de
de sp ué s
de
e jecutar
la
últim a
sente ncia
de l
bloque ?
Si
el
bloque
es
el
último,
el
programa
e jecuta
la
se nte ncia
inm ediatam ente
siguiente
al
switch
.
Pero
si
no
es
el
último,
el
programa
ejecuta
la
primera
sentencia
inme diatamente
siguiente
al
bloque
.
Y
luego
la
siguiente,
y
la
siguente,
etc
.
La
se nte ncia
break,
sir ve
para
hace r
que
el
programa
ab an do ne
la
sente ncia
switch
.
Si
no
se
encuentra
un
bre ak,
se
e jecuta
el
siguiente
bloqu e
de
código,
y
así
hasta
hallar
un
break
o
salir
de
la
sentencia
switch
.
Di cho
de
otro
modo,
las
cláusulas
case
son
puntos
de
entrada
al
conjunto
de
líneas
de
código
que
hay
en
el
interior
de l
switch
.
Las
sente ncias
bre ak
son
pu ntos
de
salida,
y
deb em os
organizar
cuidadosamente
ambas
cosas
para
evitar
errores
que
no
podrá
detectar
el
compilador
.


#include
<stdio
.
h>
#include
<conio
.
h>
int
main()
{
int
n u m;
p rintf(
"Introduce
un
número
"
);
scanf(
"%i",
&n u m
);
if (
n u m==1
)
p rintf
(
"Es
un
1
\
n"
);
e lse if ( 
n u m= =2 
) 
p rintf 
( "Esu n 2
\
n " ) ; 
el se
if (
nu m==3
)
printf
(
"Es
un
3
\
n"
);
e lse
p rintf
(
"N o
era
ni
1,
ni
2,
ni
3
\
n"
); 
getch();
return
0;
}


#include
<stdio
.
h>
#include
<conio
.
h>
int
main()
{
int
num;
printf(
"In troduce
un
nú mero
"
); 
sc anf(
"%d",
&num
);
switch(
num
)
{
case
1
:
printf(
"Es
un
1
\
n"
)
;
break
;
case
2
:
printf(
"Es
un
2
\
n"
)
;
break
;
case
3
:
printf(
"Es
un
3
\
n"
)
;
b reak
;
default:
printf(
"No
es
ni1,
ni
2,
ni3
\
n"
) 
break;
}
getch(); 
return
0;
}
La
sentencia
break
provoca
la
salida
de
switch
.
En
caso
contrario
continua
la
siguiente
secuencia
case
o
default
aun q u e
no
se
cu mpla
la
con dición
.


#in clude<std io.h> 
#in clude
<conio.h>
int
main()
/*
Escribe
el
día
de
la
se mana
*/
{
int
d ia;
printf("Introduce 
e ld ía: 
") ; 
scanf("%d",&dia); 
switch(dia)
{
case 
1: 
p rintf(" Lu nes"); 
break; 
case 
2: 
p rintf(" Marte s");b re ak; 
case
3:
p rintf
(" Miércoles");
b re ak; 
case 
4: 
p rintf(" Ju eves");b re ak; 
case 
5: 
printf("V iernes");break; 
case 
6: 
p rintf 
(" Sábad o" ); 
break; 
case
7:
p rintf
(" D omingo");
b re ak;
d efault:
p r int f
~
cor responde
a
n in gun
dia
de
la
se mana
\
n");break;
}
return
0;
getch();
}


Resu men:

La
estructura
switch
es
especialmente
útil
cuando
la
selecc ión
se
basa
en
el
valor
de
una
variable
simple
o
de
una
expresión
simple
denominada
expresión
de
control
o
selector
.

Lo s
valores
de
cada
case
del
switch
han
de
ser
constantes
.

El
valor
de
esta
expresión
puede
ser
de
tipo
int
o
char
,
pero
no
pude
ser
del
tipo
float
ni
double
.

La
etiqueta
default
marca
el
bloque
de
código
que
se
ejecuta
por
defecto
(cuando
al
evaluar
la
expresión
se
obtiene
un
valor
no
especificado
por
los
casos
anteriores
d el
switch
)
.

La
sentencia
SWITCH
compara
solamente
igualdad
.

Por
cada
CASE
pu ed e
haber
1
o
más
instrucciones
.


#in cl u d e 
<stdio.h> 
#inc lud e
<conio. h>
int
main()
{
ch ar
car;
printf("Ingrese 
un 
caracter"); 
scanf
("%c",&car);
switch(car)
{
case'a':printf 
(" 
Vocal 
a");break; 
case'e':printf 
(" 
Vocal 
e");break; 
case'i':printf 
(" 
Vocal 
i");break; 
case'o':printf 
(" 
Vocal 
o");break; 
case'u':printf 
(" 
Vocal 
u");break; 
default:
p rintf ("No
es 
vocal
")
;
break
;
}
return
0; 
getch();
}


Ejercicios:
El
Estad io
^}’
en
el
(µ ı }o_
tien e
d iversos
se ctores
.
El
costo
de
la
entrada
a
l os
eventos
fu tbolísticos
del
estadi o
se
as ign an
en
virtud
de
l os
s e ctore s
del
esta dio
med iante
la
siguiente
tab la
:
Se
pide
co nstru ir
un
programa
que
permita
se leccionar
un
se ctor
de l
estad io,
ing res ar
la
cant idad
de
entrad as
solicitada s
y
calcular
el
total
a
pagar
por
las
entrada s
.


El
pro grama
de
co ntar
co n
un
m enú
de
o pcio nes
co rrespo ndiente
co n
la
siguiente
imagen
:
IMPORTANTE
:
-
Obser ve
que
las
lecturas
de
dato s
están
^Ào]ˆˆ ’_U
esto
significa
que
en
cas o
que
el
usua rio
ingrese
valo res
inco rrecto s
se
genera
un
mensaj e
que
indica
al
usua rio
cúal
es
el
erro r
co metido
.
t
Pruebe
lo
anterior
ingresa ndo
un
número
de
secto r
inexistente
por
eje mplo
10
)
o
una
cantidad
de
entrada s
inco rrecta
(por
ejemplo
-
5
)
.


Tipos
de
Datos
.
Tipo s
Pr imitivos
de
Datos
.
Do minio
de
cada
Tipo
.
Operaciones
válidas
.
Ocupación
de
Memoria
.
Datos
Compuestos
.
Estruc turas
de
Datos
.
Estruc turas
estáticas
y
dinámicas
.
Tipos
de
Datos
:
Constantes,
var iabl es
.
Operadores
matemáticos,
relacionales
y
lógicos
.
Prec ede ncia
entre
operadores
.
Operadores
de
asi gna ci ón
.
Func iones
básicas
de
entrad a/sal ida
.


Una
estructura
de
datos
es
una
form a
de
organizar
y
alma ce nar
datos
de
ma nera
que
puedan
ser
utilizad os
eficienteme nte
E sta
"disposición"
permite
que
una
estruct ura
de
datos
sea
eficiente
en
algun as
operaciones
e
ineficiente
en
otras
.
Las
estructuras
de
datos
son
aqu ellas
que
permiten
organizar
la
información
de
manera
efi ciente,
y
en
definitiva
di señar
la
soluc ión
correcta
para
un
determinado
problema
.


Estructura de  
datos
E stru c tura sE stática s
Pr imitivas
Entero
Rea l
Boole an o
C arác ter
C ompu estas
Arreg los
S trin gs
Arch ivos
Reg istros
Estru ctu rasDin ámicas
Lin ea le s
Listas
Pil as
C ola s
No Lin ea le s
Árb ole s
Grafos


Las
ESTRU C TUR AS
DE
DATOS
ESTÁTICAS
son
aquellas
en
las
que
el
tamaño
ocupado
en
memoria
se
define
ante s
de
que
el
programa
se
ejecute
y
no
puede
modificarse
dich o
tamaño
durante
la
ejecuc ión
del
programa,
mientra s
que
una
ESTR U C TU RA
DE
DATOS
DINÁMICA
es
aq uella
en
la
que
el
tamaño
ocupado
en
memoria
pu ede
modificarse
du rante
la
ejecuc ión
del
programa
.


ARR EGLOS 
Un
arreglo
se
define
como
una
colec c ión
finita,
homogénea
y
ordenad a
de
elementos
de
un
mismo
tipo
.


STRINGS
U
na
cadena
de
caracteres
es
una
sec uencia
ordenada
de
longitud
fin ita
de
elementos
que
pertenec en
a
un
cierto
lenguaje
formal
o
alfabeto
análogas
a
una
fórmula
o
a
una
oración
.
En
general,
una
cadena
de
caracteres
es
una
suc esión
de
caracteres
(letras,
nú meros
u
otros
sign os
o
símbolos)
.
Si
no
se
pon en
restr icciones
al
alfab eto,
una
cadena
podrá
estar
formad a
por
cu alquier
combinac ión
finita
de
los
caracteres
di sponibles
(las
letras
de
la
'a'
a
la
'z'
y
de
la
'A'
a
la
'Z',
los
números
del
'
0
'
al
'
9
',
el
espacio
en
blanco
'
',
símb olos
diversos
'!',
'@',
'
%
',
etcétera)
.


Un
fichero
o
arch ivo
es
una
colección
orden ada
de
datos
que
tienen
entre
sí
una
relación
y
que
se
almacenan
de
forma
permanente
en
un
dispositivo
de
memo ria
no
volátil
.
En
este
contex to,
permanente
qu iere
dec ir
qu e,
salvo
fallo s
cata st róficos
o
h asta
que
sean
borrados
a
propósito,
esto s
dato s
permanec en
en
el
medio
en
que
se
almacen an
y
continúan
existi endo
d espu és
de
que
el
programa
que
los
creó
deja
de
ejecutarse,
inc luso
despu és
de
apagar
el
ordenad or
.
E sto
marca
la
diferenc ia
con
los
datos
que
son
provisional mente
a lmace nad os
en
la
memoria
RA M,
la
memoria
volátil
del
ordenador,
que
no
sobreviven
al
programa
que
los
crea
y
much o
menos
a
la
desconexión
del
computador
.
ARCHIVO O FICHERO


ESTRU C TUR ADE DATOS LINEALES
Las
estruc tu ras
de
datos
lineales
son
aquell as
en
l as
q ue
los
ele mentos
ocupan
lugares
suces ivos
en
la
estruct ura
y
cada
uno
de
ellos
tiene
un
único
sucesor
y
un
único
predec es or,
es
dec ir,
sus
elementos
están
ub icados
uno
al
lado
d el
otro
relacionad os
en
forma
lineal
.
Hay 
tres tipo s d e
estructu rasde datos lineales
:

Listas enlazadas

Pilas

Colas


LISTAS
ENL AZADAS
Las
lista s
enla zadas
se
construyen
con
elementos
que
están
ub icados
en
una
secuenc ia
.
Es
dec ir
que
cada
elemento
se
con ecta
con
el
sigu iente
a
través
de
un
enlace
que
contiene
la
posic ión
del
sig u iente
elemento
.
De
este
modo,
teniendo
la
referenc ia
del
p rinc ipio
de
la
lista
se
pu ede
acc eder
a
tod os
los
elementos
de
la
misma
.


PILA
La
PI LA
es
un
tipo
especial
de
lista
lineal
dentro
de
las
e stru ctu ras
de
datos
din ámicas
que
permite
al mac enar
y
recuperar
datos,
s iend o
el
modo
de
acc eso
a
sus
ele mentos
de
tipo
LIFO
(d el
inglés
Last
In,
First
Out
,
es
dec ir,
último
en
entrar,
primero
en
salir
)
.
¿
Cómo
fu nc iona?
A
través
de
do s
ope racione s
bás icas
:
ap ilar
(
pu sh
),
que
coloca
un
objeto
en
la
pi la,
y
su
ope ración
inversa ,
d e s ap ilar
(p op) ,
q ue
retira
el
último
eleme nto
ap ilad o
.


COL A
La
COLS
es
un
tipo
especial
de
lista
line al
dentro
de
las
estru ctu ras
de
datos
din ámicas
que
permite
al mac enar
y
recuperar
datos,
s iend o
el
modo
de
acc eso
a
sus
elementos
de
tipo
FIFO
(del
inglés
First
In,
First
Out
,
es
dec ir,
primero
en
entrar,
primero
en
salir
)
.
¿
Cómo
fu nc iona?
A
través
de
dos
ope racio ne s
bás icas
:
en co lar
que
co loca
un
objeto
en
la
co l a
y
su
ope ra ció n
inversa ,
de se ncolar
que
ret ira
el
primer
eleme nto
en coladp
.


ESTRUC TURA
DE
DATOS
NO
LINEALES
Las
estructuras
de
datos
no
lineales
,
también
llamadas
multienlazada s
,
son
aqu ellas
en
las
que
cada
elemento
pu ede
estar
enl azado
a
cualqu ier
otro
componente
.
Es
dec ir,
cada
elemento
pu ede
tener
varios
sucesore s
o
varios
p red ec esores
.
E xisten
d os
tipos
:

Árboles

Grafos


ARBOLES
En
estructura
de
datos
,
los
árboles
consiste n
en
una
estructu ra
no
lineal
que
se
utiliza
para
re presenta r
datos
con
una
relación
jerárquica
en
la
que
cada
elemento
tiene
un
ún ico
antecesor
y
pu ede
tener
varios
sucesores
.
Los
mismos
se
en cuentran
clasif icados
en
:
árbol
general
,
un
árbol
donde
cada
elemento
puede
tener
un
número
ilimitad o
de
sub
árboles
y
árboles
binarios
,
que
son
una
estructura
de
datos
homogéne a,
dinámica
y
no
li ne al
en
dond e
a
cada
eleme nto
le
pueden
se gu ir
com o
máximo
dos
nodos
.


GRAFOS
Otro
tipo
de
no
lineal
de
estructu ra
de
datos
en
p rogramación
,
son
los
grafos
.
Se
trata
de
una
estruct ura
m ate mática
formada
p or
un
conjunto
de
puntos
v
una
estruct ura
de
datos
v
y
un
conjunto
de
línea s,
cada
una
de
las
cu ales
une
un
pu nto
a
otro
.
Los
pu ntos
se
llaman
nodos
o
vért ices
del
grafo
y
las
línea s
se
llaman
ar istas
o
arcos
.
