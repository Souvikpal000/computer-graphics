#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>

// pre-processor directories to calculate co-ordinates for the displaying device
#define fx(x) (getmaxx()/2+x)
#define fy(y) (getmaxy()/2-y)
int main(void)
{
    int x1,y1,x2,y2,x3,y3,x4,y4;
    initwindow(860,860);     // creating window
    line(getmaxx()/2,0,getmaxx()/2,getmaxy());
        line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
          line(fx(0),fy(100),fx(100),fy(100));
                    line(fx(100),fy(100),fx(100),fy(0));
                              line(fx(0),fy(0),fx(0),fy(100));
                                        line(fx(0),fy(0),fx(100),fy(0));

                            x1=0+100*3;
                            y1=100;

                            x2=100+100*3;
                            y2=100;


                            x3=0+0*3;
                            y3=0;

                            x4=100+0*3;
                            y4=0;


                                      line(fx(x1),fy(y1),fx(x2),fy(y2));
                                      line(fx(x2),fy(y2),fx(x4),fy(y4));
                                      line(fx(x1),fy(y1),fx(x3),fy(y3));
                                      line(fx(x3),fy(y3),fx(x4),fy(y4));







    getch();
    return 0;
}  // end of main
