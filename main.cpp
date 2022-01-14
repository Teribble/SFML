////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>

using namespace sf;
#define SPEED 0.5

////////////////////////////////////////////////////////////
/// Entry point of application
///
/// \return Application exit code
///
////////////////////////////////////////////////////////////
int main()
{
	RenderWindow window(VideoMode(500, 500), "HELLO SUKA");
	float rotation;
	double x = 0, y = 0;
	double x1 = 0, y1 = 50;
	double x2 = 0, y2 = 100;
	double x3 = 0, y3 = 150;
	Texture texture;
	Texture texture1;
	Texture texture2;
	Texture texture3;
	texture.loadFromFile("mer.png");
	texture1.loadFromFile("mer.png");
	texture2.loadFromFile("mer.png");
	texture3.loadFromFile("mer.png");
	Sprite circle(texture);
	Sprite circle1(texture);
	Sprite circle2(texture);
	Sprite circle3(texture);
	
	/*CircleShape circle(20);
	CircleShape circle1(20);
	circle.setFillColor(Color(230, 0, 230));
	circle.setFillColor(Color(150, 0, 130));
	circle.setOutlineThickness(3.f);
	circle.setOutlineThickness(3.f);
	circle.setOutlineColor(Color(3, 4, 4));
	circle.setOutlineColor(Color(3, 4, 4));*/

	while (window.isOpen())
	{
		//window.clear(Color(250, 150, 100, 0));

		//Event event;
		//while (window.pollEvent(event))
		//{
		//	if (event.type == Event::Closed) {
		//		window.close();
		//	}
		//}
		//
		//if (Keyboard::isKeyPressed(Keyboard::Left)) {
		//	if (500 >= x && 0 < x ) {
		//		circle.setOrigin(0.f, 0.f);
		//		circle.setScale(-1.f, 1.f);
		//		circle.setPosition(x -= SPEED, y);
		//		std::cout << x << " " << y << std::endl;
		//	}
		//	else {
		//		circle.setPosition(x = 0, y);
		//		std::cout << x << " " << y << std::endl;
		//	}
		//}
		//else if (Keyboard::isKeyPressed(Keyboard::Right)) {
		//	if (460 > x && 0 <= x ) {
		//		circle.setOrigin(40.f, 0.f);
		//		circle.setScale(1.f, 1.f);
		//		circle.setPosition(x += SPEED, y);
		//		std::cout << x << " " << y << std::endl;
		//	}
		//	else {
		//		circle.setPosition(x = 460, y);
		//		std::cout << x << " " << y << std::endl;
		//	}
		//}
		//else if (Keyboard::isKeyPressed(Keyboard::Up)) {
		//	if (y <= 500 && y > 0 ) {
		//		circle.setPosition(x , y -= SPEED);
		//			std::cout << x << " " << y << std::endl;
		//	}
		//	else {
		//		circle.setPosition(x, y = 0);
		//		std::cout << x << " " << y << std::endl;
		//	}
		//}
		//else if (Keyboard::isKeyPressed(Keyboard::Down)) {
		//	if (460 > y && 0 <= y ) {
		//		circle.setPosition(x , y += SPEED);
		//		std::cout << x << " " << y << std::endl;
		//	}
		//	/*else {
		//		circle.setPosition(x, y = 460);
		//		std::cout << x << " " << y << std::endl;
		//	}*/
		//}

		for (; x < 450 || x1 < 450 || x2 < 450 || x3 < 450;)
		{
			window.clear();
			x += 0.2;
			x1 += 0.2;
			x2 += 0.2;
			x3 += 0.2;
			circle.setOrigin(50.f, 0);
			circle1.setOrigin(50.f, 0);
			circle2.setOrigin(50.f, 0);
			circle3.setOrigin(50.f, 0);
			circle.setScale(1, 1);
			circle1.setScale(1, 1);
			circle2.setScale(1, 1);
			circle3.setScale(1, 1);
			circle.setPosition(x, y);
			circle1.setPosition(x1, y1);
			circle2.setPosition(x2, y2);
			circle3.setPosition(x3, y3);
			Sleep(0.8);
			window.draw(circle);
			window.draw(circle1);
			window.draw(circle2);
			window.draw(circle3);
			window.display();
		}
		for (; x > 50 || x1 > 50 || x2 > 50 || x3 > 50;)
		{
			window.clear();
			x -= 0.2;
			x1 -= 0.2;
			x2 -= 0.2;
			x3 -= 0.2;
			// Команда для более влавного разворота
			circle.setOrigin(0.f, 0);
			circle1.setOrigin(0.f, 0);
			circle2.setOrigin(0.f, 0);
			circle3.setOrigin(0.f, 0);
			// Разворот спрайта
			circle.setScale(-1, 1);
			circle1.setScale(-1, 1);
			circle2.setScale(-1, 1);
			circle3.setScale(-1, 1);
			circle.setPosition(x, y);
			circle1.setPosition(x1, y1);
			circle2.setPosition(x2, y2);
			circle3.setPosition(x3, y3);
			Sleep(0.8);
			window.draw(circle);
			window.draw(circle1);
			window.draw(circle2);
			window.draw(circle3);
			window.display();
		}
		
		window.draw(circle);
		window.display();
	}
	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
