#include <SFML/Graphics.hpp>
#include <iostream>
#include "button.hh"
using namespace std;

int main(){
    sf::RenderWindow window;
    sf::Vector2i centerWindow((sf::VideoMode::getDesktopMode().width / 2)-445,(sf::VideoMode::getDesktopMode().height / 2)-480);
    window.create(sf::VideoMode(900,900),"SFML Project",sf::Style::Titlebar | sf::Style::Close);
    window.setPosition(centerWindow);
    window.setKeyRepeatEnabled(true);
    sf::Font arial;
    arial.loadFromFile("arial.ttf");
    Button btn1("Click Me",{200, 50},20,sf::Color::Green, sf::Color::Black);
    btn1.setPosition({100,300});
    btn1.setFont(arial);
    while (window.isOpen()){
        sf::Event Event;
        while(window.pollEvent(Event)){
            switch(Event.type){
                case sf::Event::Closed:
                    window.close();
                case sf::Event::MouseMoved:
                    if (btn1.isMouseOver(window)){
                        btn1.setBackColor(sf::Color::White);
                    }
                    else {
                        btn1.setBackColor(sf::Color::Green);
                    }
                case sf::Event::MouseButtonPressed:
                    if(btn1.isMouseOver(window)){
                        cout<<"You clicked\n";
                    }
            }
        }
        window.clear();
        btn1.drawTo(window);
        window.display();
    }
    return 0;

}