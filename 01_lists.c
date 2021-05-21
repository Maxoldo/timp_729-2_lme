#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct list
{
struct list *next;
double Data;
} list;
typedef struct node
{
struct node *next;
double Data;
}node;
void init( list **l)
{
*l = (list *)malloc(sizeof(list));
(*l)->next = NULL;
(*l)->Data = 2147483648;
}
void clean( list *l)
{
list *Temp = l;
do
{
Temp = Temp->next;
free(l);
l = Temp;
} while (l != NULL);
}
bool is_empty( list *l)
{
if (l == NULL)
return 0;
else
return 1;
}
node *find( list *l, int value)
{
list *Temp = l;
while (1)
{
if (Temp == NULL)
return NULL;
else
{
if ((Temp->Data) == value)
return (( node *)l);
}
Temp = Temp->next;
}
}
int push_back( list *l, int value)
{
if (l->Data == 2147483648)
{
l->Data = value;
return 0;
}
list *Temp = ( list *)malloc(sizeof(list));
Temp = l;
while (Temp->next != NULL)
Temp = Temp->next;
Temp->next = ( list *)malloc(sizeof( list));
Temp = Temp->next;
Temp->Data = value;
Temp->next = NULL;
return 0;
}
int push_front( list **l, int value)
{
list *Temp = ( list *)malloc(sizeof(list));
Temp->Data = value;
Temp->next = (*l);
(*l) = Temp;
return 0;
}
int insert_after( node *l, int value)
{
list *Temp = ( list *)malloc(sizeof(list)), *Temp2;
Temp2=( list *)l->next;
l->next =( node *)Temp;
Temp->Data = value;
Temp->next = Temp2;
return 0;
}
int remove_node( list *l, int value)
{
list *Temp = l;
if (l != NULL)
{
while (1)
{
if ((Temp->next) == NULL)
return 1;
if ((Temp->next->Data) == value)
{
list *Temp2 = ( list *)malloc(sizeof(list));
Temp2 = Temp->next->next;
free(Temp->next);
Temp->next = Temp2;
return 0;
}
Temp = Temp->next;
}
}
else
return 1;
}
void print( list *l)
{
while (l != NULL)
{
printf("%.0lf ", l->Data);
l = l->next;
}
printf("\n");
}
int main()
{
list *l, *Temp;
int N, i;
double a, b;
scanf("%d", &N);//1
init(&l);//2
for (i = 0; i < N; i++)
{
scanf("%lf", &a);
push_back(l, a);
}
print(l);//3
for (i = 0; i < 3; i++)//4
{
scanf("%lf", &a);
if (find(l, a) == NULL)
printf("0\n");
else
printf("1\n");
}
scanf("%lf", &a);//5
push_back(l, a);
print(l);//6
scanf("%lf", &a);//7
push_front(&l, a);
print(l);//8
scanf("%lf", &a);//9
scanf("%lf", &b);
node *el=( node *)l;
while (a != 1)
{
el = el->next;
a--;
}
insert_after(el, b);
print(l);//10
scanf("%lf", &a);//11
if (l->Data==a)
{
Temp=l->next;
free(l);
l=Temp;
}
else
remove_node(l, a);
print(l);//12
clean(l);//13
return 1;
}
