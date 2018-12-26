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
        wrefresh(stdscr);
        ch = getch();
        if(ch)
        {
            mvprintw(x,y," ");
        }
            switch(ch) // the real value
            { 
                case KEY_UP:
                    x=x-1;
                    mvprintw(x, y,"A");// printf("A");// code for arrow up
                    break;
                case KEY_LEFT:
                    y=y-1;
                    mvprintw(x, y,"A");// code for arrow down
                    break;
                case KEY_RIGHT:
                    y=y+1;
                    mvprintw(x, y,"A");// code for arrow right
                    break;
                case KEY_DOWN:
                    x=x+1;
                    mvprintw(x, y,"A");// code for arrow left
                    break;
            }
            
        ch=0;
    }
    return 0;
}