#include<graphics.h>
#include<conio.h>

int main()
{
  int gd = DETECT,gm,i,maxx,midy;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  maxx = getmaxx();
  midy = getmaxx()/2;
  cleardevice();
  for(i=0;i<maxx-150;i+=5)
  {
   cleardevice();
   setcolor(WHITE);
   line(0,midy+37,maxx,midy+37);

   setcolor(12);                                    \\ Light Red
   setfillstyle(SOLID_FILL,4);                      \\ RED
   rectangle(0+i,midy+23,100+i,midy-10);
   floodfill(5+i,midy+22,12);
   rectangle(100+i,midy-50,140+i,midy+23);
   floodfill(105+i,midy-45,12);
   setfillstyle(SOLID_FILL,0);
   rectangle(110+i,midy-40,130+i,midy-20);
   floodfill(111+i,midy-38,12);

   setcolor(0);                                     \\ Black
   setfillstyle(SOLID_FILL,0);
   arc(30+i,midy+23,0,180,11);
   arc(120+i,midy+23,0,180,11);
   floodfill(30+i,midy+23,0);
   floodfill(120+i,midy+23,0);

   setcolor(7);                                     \\ Light Grey
   setfillstyle(SOLID_FILL,DARKGRAY);               \\ Color code 8
   circle(30+i,midy+25,10);
   circle(120+i,midy+25,10);
   floodfill(30+i,midy+25,7);
   floodfill(120+i,midy+25,7);
   delay(50);
  }
  getch();
  closegraph();
  return 0;
}
