#pragma once
struct Coor
{
	int x;
	int	y;
	
	bool operator==(Coor Right);
	Coor operator()(int Right);

	bool in(int size_x, int size_y);
};

