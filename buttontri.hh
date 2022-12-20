#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;


class Buttontri{
public:
    Buttontri(){}//les deux constructeurs
    Buttontri(string t, sf::Vector2f array1,sf::Vector2f array2, sf::Vector2f array3, int charSize, sf::Color bgColor, sf::Color textColor){
        text.setString(t);
        text.setColor(textColor);
        text.setCharacterSize(charSize);
        buttontri.setPointCount(3);
        buttontri.setPoint(0, array1);
        buttontri.setPoint(1, array2);
        buttontri.setPoint(2, array3);
        buttontri.setFillColor(bgColor);

    }
    void setFont(sf::Font &font){
            text.setFont(font);
        }
    void setBackColor(sf::Color color){
        buttontri.setFillColor(color);
    }
    void setTextColor(sf::Color color){
        text.setColor(color);
    }
    void setPosition(sf::Vector2f pos){
        buttontri.setPosition(pos);
        float xPos=(pos.x + buttontri.getLocalBounds().width/2) - (text.getLocalBounds().width/2);
        float yPos=(pos.y + buttontri.getLocalBounds().height/2) - (text.getLocalBounds().height/2);
        text.setPosition({xPos, yPos});
    }
    void drawTo(sf::RenderWindow &window){
        window.draw(buttontri);
        window.draw(text);
    }
    bool isMouseOver(sf::RenderWindow &window){
        float mouseX = sf::Mouse::getPosition(window).x;
        float mouseY = sf::Mouse::getPosition(window).y;
        float btnPosX = buttontri.getPosition().x;
        float btnPosY = buttontri.getPosition().y;
        float btnPosWidth = buttontri.getPosition().x + buttontri.getLocalBounds().width;
        float btnPosHeight = buttontri.getPosition().y + buttontri.getLocalBounds().height;
        if(mouseX<btnPosWidth && mouseX > btnPosX && mouseY < btnPosHeight && mouseY > btnPosY){
            return true;
        }
        return false;
    }
private:
    sf::ConvexShape buttontri;
    sf::Text text;
};