#pragma once

#include <cmath>
#include <string>
#include <time.h>
#include <random>

/* Includes - SFML */
#include <SFML/System/Vector2.hpp>

/* Defines */
#define PI 3.14159265358979323846F

namespace jp {

	class Vec2D
	{

	public:
		//fields
		float x, y;
		//constructor
		Vec2D();
		Vec2D(float x , float y);
		Vec2D(const Vec2D& v);
		Vec2D(sf::Vector2f v);
		~Vec2D();
	};

}
