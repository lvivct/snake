#include "Field.h"
#include "SnakeBody.h"
#include "Coor.h"

int main()
{
	int size = 10;
	Field a(size);
	a.show_field();
	SnakeBody snake({ 1,2 }, '+');
	a.add_item(snake);
	a.show_field();
}