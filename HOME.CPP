#include<graphics.h>
#include<conio.h>
int main()
{
	int gd = DETECT,gm,
	points[]={100,120,0,200,200,200,600,100,500,40},
	points1[]={0,200,0,400,200,400,200,200},
	points2[]={200,200,200,400,600,260,600,100},
	points3[]={50,280,50,320,150,320,150,280},
	points4[]={380,240,380,336,440,315,440,220};

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	/*	Roof Top	*/
	setfillstyle(XHATCH_FILL,BROWN);
	fillpoly(5,points);
	line(100,120,200,200);

	/*	3D Styling	*/
	setfillstyle(SOLID_FILL,GREEN);
	fillpoly(4,points1);

	setfillstyle(SOLID_FILL,RED);
	fillpoly(4,points2);

	/*	Door and Window	*/
	setfillstyle(SOLID_FILL,YELLOW);
	fillpoly(4,points3);
	fillpoly(4,points4);

	getch();
	closegraph();
	return 0;
}
