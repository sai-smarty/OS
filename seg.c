#include<stdio.> 
void main()
{
int buffer[10], bufsize, in, out, produce, consume, 
choice=0; in = 0;
out = 0;
bufsize = 10;
while(choice !=3)
{
printf(“\n1. Produce \t 2. Consume \t3. Exit”); 
printf(“\nEnter your choice: ”);
scanf(“%d”,&choice); 
switch(choice) {
case 1: if((in+1)%bufsize==out)
printf(“\nBuffer is Full”);
else
{
}
break;;;
case 2: if(in == out)
printf(“\nBuffer is Empty”);
} } }
int tph, philname[20], status[20], howhung, hu[20], cho; main()
{
int i; clrscr();
printf("\n\nDINING PHILOSOPHER PROBLEM");
printf("\nEnter the total no. of philosophers: "); 
scanf("%d",&tph);
for(i=0;i<tph;i++)
{
philname[i]=(i+1); status[i]=1;
}
printf("How many are hungry : "); 
scanf("%d", &howhung); 
if(howhung==tph)
{
printf(“\n All are hungry..\nDead lock stage will occur”); 
printf(\n”Exiting\n”);
else{ 
for(i=0;i<howhung;i++){
printf(“Enterphilosopher%dposition:”,(i+1)); 
scanf(“%d”,&hu[i]);
status[hu[i]]=2;
}
do
{
printf("1.One can eat at a time\t2.Two can eat at a time
\t3.Exit\nEnter your choice:"); 
scanf("%d", &cho); 
switch(cho)
{
case 1: one();
case 2: two();
break; 
case 3: exit(0);
break;
}
}
one()
{
}
}while(1);
default: printf("\nInvalid option..");
}
}
one()
{
}
}while(1);
}
}
One()
{
int pos=0, x, i;
printf("\nAllow one 
philosopher to eat at any 
time\n"); for(i=0;i<howhung; 
i++, pos++)
{
printf("\nP %d is granted to 
eat", philname[hu[pos]]); 
for(x=pos;x<howhung;x++)
printf("\nP %d is waiting", philname[hu[x]]);
}
two()
{
}
int i, j, s=0, t, r, x;
printf("\n Allow two philosophers to eat 
at same time\n"); for(i=0;i<howhung;i++)
{
for(j=i+1;j<howhung;j++)
{
if(abs(hu[i]-hu[j])>=1&& abs(hu[i]-hu[j])!=4)
{
printf("\n\ncombination
%d \n", (s+1)); t=hu[i]; 
r=hu[j]; s++;
printf("\nP %d and P %d are granted to 
eat", philname[hu[i]],
philname[hu[j]]);
for(x=0;x<howhung;x++)
{
}
else
{
if((hu[x]!=t)&&(hu[x]!=r))
printf("\nP %d is waiting", philname[hu[x]]);
}
}
}
}
}
else
{consume = buffer[out];
printf(“\nThe consumed value is %d”, consume); out = (out+1)%bufsize;
}
break;