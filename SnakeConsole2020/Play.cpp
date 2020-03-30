#include <iostream>
#include "Play.h"

Play::Play(char head_simbol = '+', int size = 0)
{
	aplle = new food({ 5,5 }, '@');
	snake = new SnakeHead({ 1,2 }, head_simbol);
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
		SnakeBody* ptr = snake;
		do
		{
			main_field->add_item(ptr);
			ptr = ptr->get_ptr_next();
		} while (ptr != snake);
		if (aplle->location == snake->location)
			aplle->change_location();
		main_field->add_item(aplle);
		
		system("cls");
		main_field->show_field();
	}
}

Play::~Play()
{
	delete snake;
	delete main_field;
}
