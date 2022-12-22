#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;


class Text{
public:
    Text(){}
    Text(string textb,sf::Font &font, int size, sf::Color color){
        text.setString(textb);
        text.setFont(font);
        text.setCharacterSize(size);
        text.setColor(color);
    }
    
    void drawTo(sf::RenderWindow &window){
        window.draw(text);
    }
    void setPosition(sf::Vector2f pos){
            text.setPosition(pos);
        }
private:
    sf::Text text;
};