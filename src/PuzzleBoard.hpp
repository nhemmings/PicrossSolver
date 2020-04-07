#pragma once
#include <SFML/Graphics.hpp>

class PuzzleBoard : public sf::Drawable
{
public:
	PuzzleBoard(int dimension)
	{
		if (dimension % 5 != 0)
		{
			char buffer[200];
			sprintf_s(buffer, 200, "Board size (%d) is not divisible by 5.", dimension);
			throw std::invalid_argument(buffer);
		}
		this->dimension = dimension;
	}

private:
	int dimension;
	double minorLineWidth = 1;
	double majorLineWidth = 2;
	double borderLineWidth = 3;

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const 
	{

	}
};

