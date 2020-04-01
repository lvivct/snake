#include <iostream>
#include "Play.h"

Play::Play(char head_simbol = '+', int size = 0)
{
	aplle = new food({ 2,2 }, '@');
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

		SnakeBody* ptr = snake->get_ptr_next();
		bool game_over = false;

		while (ptr != snake)
		{	
			ptr->move(direction, main_field->get_size());
			main_field->add_item(ptr->get_ptr_next());
			ptr = ptr->get_ptr_next();
		} ;
		game_over = ptr->move(direction, main_field->get_size()) 
				|| !main_field->is_clear(ptr->get_coor());
		main_field->add_item(ptr);
		if (game_over)
		{
			system("cls");
			std::cout << "game_over";
			break;
		}

		if (aplle->get_coor() == snake->get_coor())
		{
			aplle->change_location(main_field->get_size());
			snake->increase_tail();
		}
		while(!main_field->is_clear(aplle->get_coor()))
			aplle->change_location(main_field->get_size());
		main_field->add_item(aplle);
		
		system("cls");
		main_field->show_field();
	}
}

Play::~Play()
{
	delete snake;
	delete main_field;
	delete aplle;
}
