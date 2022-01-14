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
using namespace sf;

////////////////////////////////////////////////////////////
/// Entry point of application
///
/// \return Application exit code
///
////////////////////////////////////////////////////////////
int main()
{
	RenderWindow window(VideoMode(500, 500), "HELLO SUKA");

	double x = 0, y = 0;

	CircleShape circle(20);
	circle.setFillColor(Color(230, 0, 230));
	circle.setOutlineThickness(3.f);
	circle.setOutlineColor(Color(3, 4, 4));

	while (window.isOpen())
	{
		window.clear(Color(250, 150, 100, 0));

		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed) {
				window.close();
			}
		}
		
		if (Keyboard::isKeyPressed(Keyboard::Left)) {
			if (500 >= x && 0 < x && circle.getFillColor() == Color::Yellow) {
				circle.setPosition(x -= 0.2, y);
				std::cout << x << " " << y << std::endl;
			}
			//else {
			//	circle.setPosition(x = 0, y);
			//	std::cout << x << " " << y << std::endl;
			//}
		}
		else if (Keyboard::isKeyPressed(Keyboard::Right)) {
			if (460 > x && 0 <= x && circle.getFillColor() == Color::Yellow) {
				circle.setPosition(x += 0.2, y);
				std::cout << x << " " << y << std::endl;
			}
			//else {
			//	circle.setPosition(x = 460, y);
			//	std::cout << x << " " << y << std::endl;
			//}
		}
		else if (Keyboard::isKeyPressed(Keyboard::Up)) {
			if (y <= 500 && y > 0 && circle.getFillColor() == Color::Yellow) {
				circle.setPosition(x , y -= 0.2);
					std::cout << x << " " << y << std::endl;
			}
			//else {
			//	circle.setPosition(x, y = 0);
			//	std::cout << x << " " << y << std::endl;
			//}
		}
		else if (Keyboard::isKeyPressed(Keyboard::Down)) {
			if (460 > y && 0 <= y && circle.getFillColor() == Color::Yellow) {
				circle.setPosition(x , y += 0.2);
				std::cout << x << " " << y << std::endl;
			}
			///*else {
			//	circle.setPosition(x, y = 460);
			//	std::cout << x << " " << y << std::endl;
			//}*/
		}
		else if (Mouse::isButtonPressed(Mouse::Left)) {
			circle.setFillColor(Color::Yellow);
		}
		else if (Mouse::isButtonPressed(Mouse::Right)) {
			circle.setFillColor(Color::Black);
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
