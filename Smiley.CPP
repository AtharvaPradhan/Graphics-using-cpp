#include<graphics.h>
#include<conio.h>
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
    arc(260,260,0,360,120);                 // x axis, y axis, starting degree, ending degree, size in diameter
    arc(100,220,5,320,50);
    arc(410,220,235,155,50);
    arc(180,380,109,360,50);
    arc(325,380,180,60,50);
    arc(255,80,0,360,60);
    arc(230,70,0,360,10);
    arc(280,70,0,360,10);
    arc(255,90,200,340,30);
    getch();
    closegraph();
    return 0;
}
