#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<ctime>

using namespace std;
int main()
{
    int n;
    cout << "Nhap so luong may tinh trong Token Ring: ";
    cin >> n;
   int gd = DETECT, gm, x, y, angle = 0, goc = 0, i, k, l;
   srand(time(NULL));
   i = rand()%n + 1 ;
   k = rand()%n + 1 ;
   struct arccoordstype a;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
   delay(2000);
   settextstyle(3,0,1);
outtextxy(getmaxx()/5,0,"===Welcome to Token Ring Simulation===");
delay(500);
   while(angle<=360)
   {
      setcolor(8);
      circle(getmaxx()/2,getmaxy()/2, 75);

      arc(getmaxx()/2,getmaxy()/2,angle,angle+2,75);
      setcolor(4);
      getarccoords(&a);
      circle(a.xstart,a.ystart,9);

      setfillstyle(1,4);
      floodfill(a.xstart, a.ystart, 4);

      angle = angle+360/n;
      delay(50);
   }
   while(goc >= 0 && goc <= 1080)
    {
      setcolor(1);
      arc(getmaxx()/2,getmaxy()/2,goc,goc+2,110);
      getarccoords(&a);
      circle(a.xstart,a.ystart,6);

      setfillstyle(1,1);
      floodfill(a.xstart, a.ystart, 1);
      delay(3);

      setcolor(0);
      circle(a.xstart,a.ystart,6);

      setfillstyle(1,0);
      floodfill(a.xstart, a.ystart,0);
      delay(3);

   if(i*360/n + 360 == goc){
        l = 110;
        while(l>=75){
      setcolor(1);
      arc(getmaxx()/2,getmaxy()/2,i*360/n,i*360/n+2,l);
      getarccoords(&a);
      circle(a.xstart,a.ystart,6);

      setfillstyle(1,1);
      floodfill(a.xstart, a.ystart, 1);
      delay(15);

      setcolor(0);
      arc(getmaxx()/2,getmaxy()/2,i*360/n,i*360/n+2,l);
      getarccoords(&a);
      circle(a.xstart,a.ystart,6);

      setfillstyle(1,0);
      floodfill(a.xstart, a.ystart, 0);
      delay(15);
      l = l-5;
      }
   }

      if(k*360/n + 360 == goc){
        l = 110;
        while(l>=75){
      setcolor(1);
      arc(getmaxx()/2,getmaxy()/2,k*360/n,k*360/n+2,l);
      getarccoords(&a);
      circle(a.xstart,a.ystart,6);

      setfillstyle(1,1);
      floodfill(a.xstart, a.ystart, 1);
      delay(15);

      setcolor(0);
      arc(getmaxx()/2,getmaxy()/2,k*360/n,k*360/n+2,l);
      getarccoords(&a);
      circle(a.xstart,a.ystart,6);

      setfillstyle(1,0);
      floodfill(a.xstart, a.ystart, 0);
      delay(15);
      l = l-5;
      }
   }
   goc = goc + 2;
   }

   getch();
   closegraph();
}
