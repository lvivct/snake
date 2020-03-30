#pragma once
struct Coor
{
	int x;
	int	y;
	
	bool operator==(Coor Right);

	void move(char direction);
};

