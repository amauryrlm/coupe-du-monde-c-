#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;


class Button{
public:
    Button(){}//les deux constructeurs
    Button(string t, sf::Vector2f size, int charSize, sf::Color bgColor, sf::Color textColor){
        text.setString(t);
        text.setColor(textColor);
        text.setCharacterSize(charSize);
        button.setSize(size);
        button.setFillColor(bgColor);

    }
    void setFont(sf::Font &font){
            text.setFont(font);
        }
    void setBackColor(sf::Color color){
        button.setFillColor(color);
    }
    void setTextColor(sf::Color color){
        text.setColor(color);
    }
    void setPosition(sf::Vector2f pos){
        button.setPosition(pos);
        float xPos=(pos.x + button.getLocalBounds().width/2) - (text.getLocalBounds().width/2);
        float yPos=(pos.y + button.getLocalBounds().height/2) - (text.getLocalBounds().height/2);
        text.setPosition({xPos, yPos});
    }
    void drawTo(sf::RenderWindow &window){
        window.draw(button);
        window.draw(text);
    }
    bool isMouseOver(sf::RenderWindow &window){
        float mouseX = sf::Mouse::getPosition(window).x;
        float mouseY = sf::Mouse::getPosition(window).y;
        float btnPosX = button.getPosition().x;
        float btnPosY = button.getPosition().y;
        float btnPosWidth = button.getPosition().x + button.getLocalBounds().width;
        float btnPosHeight = button.getPosition().y + button.getLocalBounds().height;
        if(mouseX<btnPosWidth && mouseX > btnPosX && mouseY < btnPosHeight && mouseY > btnPosY){
            return true;
        }
        return false;
    }
private:
    sf::RectangleShape button;
    sf::Text text;
};