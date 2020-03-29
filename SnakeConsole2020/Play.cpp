#include <iostream>
#include "Play.h"

Play::Play(char head_simbol = '+', int size = 0)
{
	Coor x = { 1,2 };
	snake = new SnakeHead(x, head_simbol);
	main_field = new Field(size);
}

void Play::start()
{
	while (1)
	{
		main_field->update();
		char direction;
		std::cin >> direction;
		snake->move(direction);
		main_field->add_item(snake);
		system("cls");
		main_field->show_field();
	}
}
