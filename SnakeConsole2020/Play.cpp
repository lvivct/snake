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
		SnakeBody* ptr = snake;
		do
		{
			ptr->move(direction);
			main_field->add_item(ptr->get_ptr_next());
			ptr = ptr->get_ptr_next();
		} while (ptr != snake);

		if (aplle->get_coor() == snake->get_coor())
		{
			aplle->change_location();
			snake->increase_tail();
		}

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
