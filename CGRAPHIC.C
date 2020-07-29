#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gdriver=DETECT,gmode;
int x1,y1,x2,y2,x,y,dy,dx,steps,i;
float xinc,yinc,m;
clrscr;
printf("Enter the starting coordinates");
scanf("%d %d",&x1,&y1);
printf("Enter the ending coordinates");
scanf("%d %d",&x2,&y2);
dy=y2-y1;
dx=x2-x1;
m=dy/(float)dx;
if(abs(x1)>abs(y1))
{
steps=abs(x1);
}
else
{
steps=abs(y1);
}
xinc=dx/(float)steps;
yinc=dy/(float)steps;
initgraph(&gdriver,&gmode,"c:/turboc3/bgi");
outtextxy(0,0,"Prachit Tupe 192117");
x=x1;
y=y1;
for(i=0;i<steps;i++)
{
putpixel(x,y,GREEN);
x=x+xinc;
y=y+yinc;
delay(100);
}
getch();
closegraph();


}
