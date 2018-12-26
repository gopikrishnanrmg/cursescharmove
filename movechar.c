#include<stdio.h>
#include<curses.h>
int main()
{
    initscr();
    keypad(stdscr, TRUE);
    int ch,y,x;
    wmove(stdscr,5,50);
    getyx(stdscr,x,y);
    curs_set(0);
    while(1)
    {
        ch = getch();
        if(ch)
            mvprintw(x,y," ");
        
        switch(ch) 
        { 
            case KEY_UP:
                x=x-1;
                mvprintw(x, y,"A");
                break;
            case KEY_LEFT:
                y=y-1;
                mvprintw(x, y,"A");
                break;
            case KEY_RIGHT:
                y=y+1;
                mvprintw(x, y,"A");
                break;
            case KEY_DOWN:
                x=x+1;
                mvprintw(x, y,"A");
                break;
        }
            
        ch=0;
    }
    return 0;
}
