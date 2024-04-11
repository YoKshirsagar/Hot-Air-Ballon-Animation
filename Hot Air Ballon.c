#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main()
{
    int gd = DETECT, gm, i;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    settextstyle(10, 0, 5);
    setcolor(4);
    outtextxy(35, 150, "HOT AIR BALLON");
    settextstyle(1, 0, 1);
    setcolor(3);
    outtextxy(400, 350, "CREATED BY-->");
    setcolor(2);
    outtextxy(450, 380, "* Kshirsagar Yogesh");
    getch();
    cleardevice();
    line(0, 430, 800, 430); // bottom horizontal line
    setfillstyle(1, 2);
    floodfill(1, 431, 15);

    setfillstyle(1, 9);
    floodfill(30, 30, 15);

    setcolor(3);
    rectangle(50, 390, 120, 433); // brown rectangle
    setfillstyle(1, 6);
    floodfill(51, 391, 3);
    setcolor(12);
    rectangle(50, 390, 120, 433); // brown rectangle

    setcolor(15);
    rectangle(70, 360, 100, 380); // black rectangle
    setfillstyle(1, 0);
    floodfill(71, 361, 15);

    arc(85, 360, 0, 180, 10); // small arc
    setfillstyle(1, 6);
    floodfill(84, 359, 15);

    line(50, 390, 30, 340);
    line(120, 390, 140, 340);

    arc(85, 340, 0, 180, 55);
    line(30, 340, 140, 340);

    setfillstyle(1, 4);
    floodfill(31, 339, 15);
    setcolor(4);
    arc(85, 340, 0, 180, 55);
    line(30, 340, 140, 340);
    setcolor(15);

    arc(300, 100, 50, 200, 30);
    arc(350, 82, 50, 170, 30);
    arc(397, 70, 50, 160, 30);
    arc(300, 100, 180, 300, 30);
    arc(343, 115, 200, 340, 30);
    arc(400, 120, 190, 340, 30);
    arc(455, 125, 190, 340, 30);
    arc(483, 105, 270, 90, 30);
    arc(455, 75, 0, 100, 30);
    arc(430, 65, 40, 140, 30);

    setfillstyle(1, 15);
    floodfill(350, 120, 15);
    setcolor(0);
    arc(520, 120, 0, 50, 30);    // first bird
    arc(580, 120, 130, 180, 30); // first bird
    arc(519, 120, 0, 50, 30);    // first bird
    arc(579, 120, 130, 180, 30); // first bird

    arc(550, 120, 0, 50, 30);    // second bird
    arc(610, 120, 130, 180, 30); // second bird
    arc(549, 120, 0, 50, 30);    // second bird
    arc(609, 120, 130, 180, 30); // second bird

    setcolor(15);
    line(0, 430, 800, 430); // bottom horizontal line
    setfillstyle(1, 2);
    floodfill(1, 431, 15);

    getch();
    cleardevice();
    setcolor(15);
    arc(300, 100, 50, 200, 30);
    arc(350, 82, 50, 170, 30);
    arc(397, 70, 50, 160, 30);
    arc(300, 100, 180, 300, 30);
    arc(343, 115, 200, 340, 30);
    arc(400, 120, 190, 340, 30);
    arc(455, 125, 190, 340, 30);
    arc(483, 105, 270, 90, 30);
    arc(455, 75, 0, 100, 30);
    arc(430, 65, 40, 140, 30);
    setfillstyle(1, 15);
    floodfill(350, 120, 15);
    setcolor(0);
    arc(520, 120, 0, 50, 30);    // first bird
    arc(580, 120, 130, 180, 30); // first bird
    arc(519, 120, 0, 50, 30);    // first bird
    arc(579, 120, 130, 180, 30); // first bird

    arc(550, 120, 0, 50, 30);    // second bird
    arc(610, 120, 130, 180, 30); // second bird
    arc(549, 120, 0, 50, 30);    // second bird
    arc(609, 120, 130, 180, 30); // second bird
    setcolor(15);
    for (i = 0; i < 300; i++)
    {
        delay(20);
        settextstyle(1, 0, 1);
        setcolor(15);
        outtextxy(1 + i + i, 441, "PRESS ANY KEY FOR EXIT");
        delay(20);

        if (kbhit())
        {
            exit(0);
        }
        setcolor(0);
        arc(520, 120, 0, 50, 30);    // first bird
        arc(580, 120, 130, 180, 30); // first bird
        arc(519, 120, 0, 50, 30);    // first bird
        arc(579, 120, 130, 180, 30); // first bird

        arc(550, 120, 0, 50, 30);    // second bird
        arc(610, 120, 130, 180, 30); // second bird
        arc(549, 120, 0, 50, 30);    // second bird
        arc(609, 120, 130, 180, 30); // second bird
        setcolor(15);

        line(0, 430, 800, 430); // bottom horizontal line
        setfillstyle(1, 2);
        floodfill(1, 431, 15);

        setfillstyle(1, 9);
        floodfill(30, 30, 15);

        setcolor(3);
        rectangle(50, 390 - i + 1, 120, 433 - i + 1); // brown rectangle
        setfillstyle(1, 9);
        floodfill(51, 392 - i + 1, 3);
        setcolor(9);
        rectangle(50, 390 - i + 1, 120, 433 - i + 1); // brown rectangle

        delay(10);
        setcolor(3);
        rectangle(50, 390 - i, 120, 433 - i); // brown rectangle
        setfillstyle(1, 6);
        floodfill(51, 391 - i, 3);
        setcolor(15);
        rectangle(50, 390 - i, 120, 433 - i); // brown rectangle
        delay(20);

        setcolor(15);
        rectangle(70, 360 - i + 1, 100, 380 - i + 1); // black rectangle
        setfillstyle(1, 9);
        floodfill(71, 361 - i + 1, 15);
        setcolor(9);
        rectangle(70, 360 - i + 1, 100, 380 - i + 1); // black rectangle

        delay(10);
        setcolor(15);
        rectangle(70, 360 - i, 100, 380 - i); // black rectangle
        setfillstyle(1, 0);
        floodfill(71, 361 - i, 15);
        delay(20);

        arc(85, 360 - i + 1, 0, 180, 10); // small arc
        setfillstyle(1, 9);
        floodfill(84, 359 - i + 1, 15);
        setcolor(9);
        arc(85, 360 - i + 1, 0, 180, 10); // small arc

        delay(10);
        setcolor(15);
        arc(85, 360 - i, 0, 180, 10); // small arc
        setfillstyle(1, 6);
        floodfill(84, 359 - i, 15);
        delay(20);

        setcolor(9);
        line(50, 390 - i + 1, 30, 340 - i + 1);
        line(120, 390 - i + 1, 140, 340 - i + 1);
        delay(10);

        setcolor(15);
        line(50, 390 - i, 30, 340 - i);
        line(120, 390 - i, 140, 340 - i);
        delay(20);

        setcolor(9);
        arc(85, 340 - i + 1, 0, 180, 55);
        line(30, 340 - i + 1, 140, 340 - i + 1);
        setfillstyle(1, 9);
        floodfill(31, 339 - i + 1, 15);
        delay(10);

        setcolor(15);
        arc(85, 340 - i, 0, 180, 55);
        line(30, 340 - i, 140, 340 - i);
        setfillstyle(1, 4);
        floodfill(31, 339 - i, 15);
        delay(20);
        setcolor(2);
        outtextxy(1 + i + i, 441, "PRESS ANY KEY FOR EXIT");
    }

    getch();
    closegraph();
}
