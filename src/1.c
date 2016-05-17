#include <ncurses.h>

int main()
{
	initscr();
	start_color();
	/*Start color*/
	init_pair(1, COLOR_RED, COLOR_BLACK);

	attron(COLOR_PAIR(1));

	printw("Hello world!\n");
	attroff(COLOR_PAIR(1));
	refresh();                   // Вывод приветствия на настоящий экран
	getch();                     // Ожидание нажатия какой-либо клавиши пользователем
	endwin();                    // Выход из curses-режима. Обязательная команда.
	return 0;
}