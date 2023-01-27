#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>
#include "textbox.hh"
#include "button.hh"
#include "buttontri.hh"
#include "Text.hh"
#include "Account.h"
// #include "Account.h"

using namespace std;

int main(){
    sf::RenderWindow window;
    sf::Vector2i centerWindow((sf::VideoMode::getDesktopMode().width / 2)-445,(sf::VideoMode::getDesktopMode().height / 2)-480);//creer une echelle et une fenetre
    window.create(sf::VideoMode(900,900),"SFML Project",sf::Style::Titlebar | sf::Style::Close);
    
    window.setPosition(centerWindow);
    window.setKeyRepeatEnabled(true);
    sf::Font arial;
    arial.loadFromFile("arial.ttf");
    sf::Color newColor(250,0,0,100);
    int vip=0;
    
    Text text1("Nom:",arial,20,sf::Color::Black);
    text1.setPosition({100,75});
    Text text2("Prenom:",arial,20,sf::Color::Black);
    text2.setPosition({100,125});
    Text text3("Mail:",arial,20,sf::Color::Black);
    text3.setPosition({100,175});
    Text text4("Age:",arial,20,sf::Color::Black);
    text4.setPosition({100,225});
    Text text5("Nationalite:",arial,20,sf::Color::Black);
    text5.setPosition({100,275});
    Text text6("Mot de passe:",arial,20,sf::Color::Black);
    text6.setPosition({100,325});

    Textbox textbox1(15,sf::Color::Black,false);
    textbox1.setFont(arial);
    textbox1.setPosition({100,100});
    Textbox textbox2(15,sf::Color::Black,false);
    textbox2.setFont(arial);
    textbox2.setPosition({100,150});
    Textbox textbox3(15,sf::Color::Black,false);
    textbox3.setFont(arial);
    textbox3.setPosition({100,200});
    Textbox textbox4(15,sf::Color::Black,false);
    textbox4.setFont(arial);
    textbox4.setPosition({100,250});
    Textbox textbox5(15,sf::Color::Black,false);
    textbox5.setFont(arial);
    textbox5.setPosition({100,300});
    Textbox textbox6(15,sf::Color::Black,false);
    textbox6.setFont(arial);
    textbox6.setPosition({100,350});

    Button btn1("",{200, 20},20,newColor, sf::Color::Black);//nom du bouton taille couleur du bouton couleur de la police
    btn1.setPosition({100,100});
    btn1.setFont(arial);
    Button btn2("",{200, 20},20,newColor, sf::Color::Black);//nom du bouton taille couleur du bouton couleur de la police
    btn2.setPosition({100,150});
    btn2.setFont(arial);
    Button btn3("Suivant",{200, 60},20,newColor, sf::Color::Black);//nom du bouton taille couleur du bouton couleur de la police
    btn3.setPosition({300,700});
    btn3.setFont(arial);
    Button btn4("",{200, 20},20,newColor, sf::Color::Black);//nom du bouton taille couleur du bouton couleur de la police
    btn4.setPosition({100,200});
    btn4.setFont(arial);
    Button btn5("",{200, 20},20,newColor, sf::Color::Black);//nom du bouton taille couleur du bouton couleur de la police
    btn5.setPosition({100,250});
    btn5.setFont(arial);
    Button btn6("",{200, 20},20,newColor, sf::Color::Black);//nom du bouton taille couleur du bouton couleur de la police
    btn6.setPosition({100,300});
    btn6.setFont(arial);
    Button btn7("",{200, 20},20,newColor, sf::Color::Black);//nom du bouton taille couleur du bouton couleur de la police
    btn7.setPosition({100,350});
    btn7.setFont(arial);


    // sf::ConvexShape triangle;
    // triangle.setPointCount(3);
    // triangle.setPoint(0, sf::Vector2f(0, 0));
    // triangle.setPoint(1, sf::Vector2f(0, 100));
    // triangle.setPoint(2, sf::Vector2f(100, 0));
    // triangle.setPosition(200,200);
    // sf::VertexArray triangle(sf::Triangles, 3);

    // // define the position of the triangle's points
    // triangle[0].position = sf::Vector2f(100, 100);
    // triangle[1].position = sf::Vector2f(200, 200);
    // triangle[2].position = sf::Vector2f(200, 300);
    // float as=triangle[0].setPosition(sf::Vector2f(100,100));

    // // define the color of the triangle's points
    // triangle[0].color = sf::Color::Red;
    // triangle[1].color = sf::Color::Blue;
    // triangle[2].color = sf::Color::Green;
    while (window.isOpen()){
        sf::Event Event;
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Return)){
            textbox1.setSelected(false);
            
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Return)){
            textbox2.setSelected(false);
            
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Return)){
            textbox3.setSelected(false);
            
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Return)){
            textbox4.setSelected(false);
            
        }
         if(sf::Keyboard::isKeyPressed(sf::Keyboard::Return)){
            textbox5.setSelected(false);
            
        }
         if(sf::Keyboard::isKeyPressed(sf::Keyboard::Return)){
            textbox6.setSelected(false);
            
        }
        
        while(window.pollEvent(Event)){
            switch(Event.type){
                case sf::Event::Closed:
                    window.close();
                case sf::Event::MouseButtonPressed: //souris appuyer
                    if(btn1.isMouseOver(window)){
                        textbox1.setSelected(true);
                        textbox2.setSelected(false);
                        textbox3.setSelected(false);
                        textbox4.setSelected(false);
                        textbox5.setSelected(false);
                        textbox6.setSelected(false);
                        cout<<"You clicked 1\n";
                    }
                    if(btn2.isMouseOver(window)){
                        textbox2.setSelected(true);
                        textbox1.setSelected(false);
                        textbox3.setSelected(false);
                        textbox4.setSelected(false);
                        textbox5.setSelected(false);
                        textbox6.setSelected(false);
                        cout<<"You clicked 2\n";
                    }
                     if(btn4.isMouseOver(window)){
                        textbox1.setSelected(false);
                        textbox2.setSelected(false);
                        textbox3.setSelected(true);
                        textbox4.setSelected(false);
                        textbox5.setSelected(false);
                        textbox6.setSelected(false);
                        cout<<"You clicked 3\n";
                    }
                    if(btn5.isMouseOver(window)){
                        textbox1.setSelected(false);
                        textbox2.setSelected(false);
                        textbox3.setSelected(false);
                        textbox4.setSelected(true);
                        textbox5.setSelected(false);
                        textbox6.setSelected(false);

                        cout<<"You clicked 3\n";
                    }
                    if(btn6.isMouseOver(window)){
                        textbox1.setSelected(false);
                        textbox2.setSelected(false);
                        textbox3.setSelected(false);
                        textbox4.setSelected(false);
                        textbox5.setSelected(true);
                        textbox6.setSelected(false);

                        cout<<"You clicked 3\n";
                    }
                    if(btn7.isMouseOver(window)){
                        textbox1.setSelected(false);
                        textbox2.setSelected(false);
                        textbox3.setSelected(false);
                        textbox4.setSelected(false);
                        textbox5.setSelected(false);
                        textbox6.setSelected(true);

                        cout<<"You clicked 3\n";
                    }
                    if(btn3.isMouseOver(window)){
                        window.close();
                        sf::Color newColor2(165,255,127,255);
                        sf::RenderWindow window;
                        sf::Vector2i centerWindow((sf::VideoMode::getDesktopMode().width / 2)-445,(sf::VideoMode::getDesktopMode().height / 2)-480);//creer une echelle et une fenetre
                        window.create(sf::VideoMode(900,900),"SFML Project",sf::Style::Titlebar | sf::Style::Close);
                        window.setPosition(centerWindow);
                        window.setKeyRepeatEnabled(true);
    
                        sf::Texture t;  
                        t.loadFromFile("stade.png");
                        sf::Sprite s(t);    
                        s.setPosition(100,100);     
                        sf::Font arial;
    arial.loadFromFile("arial.ttf");
    Button btn1("VIP",{285, 50},20,sf::Color::Green, sf::Color::Black);//nom du bouton taille couleur du bouton couleur de la police
    btn1.setPosition({335,466});
    btn1.setFont(arial);
    Button btn2("NORM",{50,193},20,sf::Color::Green, sf::Color::Black);
    btn2.setPosition({620,273});
    btn2.setFont(arial);
    Button btn3("VIP",{285,50},20,sf::Color::Green, sf::Color::Black);
    btn3.setPosition({335,223});
    btn3.setFont(arial);
    Button btn4("NORM",{50,193},20,sf::Color::Green, sf::Color::Black);
    btn4.setPosition({287,273});
    btn4.setFont(arial);
    Button btn5("NORM",{285, 50},20,sf::Color::Red, sf::Color::Black);
    btn5.setPosition({335,516});
    btn5.setFont(arial);
    Button btn6("NORM",{50,193},20,sf::Color::Red, sf::Color::Black);
    btn6.setPosition({670,273});
    btn6.setFont(arial);
    Button btn7("NORM",{285,50},20,sf::Color::Red, sf::Color::Black);
    btn7.setPosition({335,173});
    btn7.setFont(arial);
    Button btn8("NORM",{50,193},20,sf::Color::Red, sf::Color::Black);
    btn8.setPosition({237,273});
    btn8.setFont(arial);
    Buttontri btn9("NORM",{100,100},{0,100},{100,0},20,sf::Color::Magenta, sf::Color::Black);
    btn9.setPosition({237,173});
    btn9.setFont(arial);
    Buttontri btn10("NORM",{0,0},{0,100},{100,0},20,sf::Color::Magenta, sf::Color::Black);
    btn10.setPosition({620,466});
    btn10.setFont(arial);
    Buttontri btn11("NORM",{0,0},{100,0},{100,100},20,sf::Color::Magenta, sf::Color::Black);
    btn11.setPosition({236,466});
    btn11.setFont(arial);
    Buttontri btn12("NORM",{0,0},{0,100},{100,100},20,sf::Color::Magenta, sf::Color::Black);
    btn12.setPosition({620,173});
    btn12.setFont(arial);
    Button btn13("Suivant",{200, 60},20,newColor, sf::Color::Black);//nom du bouton taille couleur du bouton couleur de la police
    btn13.setPosition({300,700});
    btn13.setFont(arial);
    while (window.isOpen()){
        sf::Event Event;
        while(window.pollEvent(Event)){
            switch(Event.type){
                case sf::Event::Closed:
                    window.close();
                
                case sf::Event::MouseButtonPressed: //souris appuyer
                    if(btn1.isMouseOver(window)){
                        vip=1;
                        cout<<"You clicked 1\n";
                    }
                    if(btn2.isMouseOver(window)){
                        vip=0;
                        cout<<"You clicked 2\n";
                    }
                    if(btn3.isMouseOver(window)){
                        vip=1;
                        cout<<"You clicked 3\n";
                    }
                    if(btn4.isMouseOver(window)){
                        vip=0;
                        cout<<"You clicked 4\n";
                    }
                    if(btn5.isMouseOver(window)){
                        vip=0;
                        cout<<"You clicked 5\n";
                    }
                    if(btn6.isMouseOver(window)){
                        vip=0;
                        cout<<"You clicked 6\n";
                    }
                    if(btn7.isMouseOver(window)){
                        vip=0;
                        cout<<"You clicked 7\n";
                    }
                    if(btn8.isMouseOver(window)){
                        vip=0;
                        cout<<"You clicked 8\n";
                    }
                    if(btn9.isMouseOver(window)){
                        vip=0;
                        cout<<"You clicked 9\n";
                    }
                    if(btn10.isMouseOver(window)){
                        vip=0;
                        cout<<"You clicked 10\n";
                    }
                    if(btn11.isMouseOver(window)){
                        vip=0;
                        cout<<"You clicked 11\n";
                    }
                    if(btn12.isMouseOver(window)){
                        vip=0;
                        cout<<"You clicked 12\n";
                    }
                    if(btn13.isMouseOver(window)){
                        window.close();
                        sf::RenderWindow window;
    sf::Vector2i centerWindow((sf::VideoMode::getDesktopMode().width / 2)-445,(sf::VideoMode::getDesktopMode().height / 2)-480);//creer une echelle et une fenetre
    window.create(sf::VideoMode(900,900),"SFML Project",sf::Style::Titlebar | sf::Style::Close);
    
    window.setPosition(centerWindow);
    window.setKeyRepeatEnabled(true);
    sf::Font arial;
    arial.loadFromFile("arial.ttf");
    sf::Color newColor(250,0,0,100);
    Button btn1("",{20, 20},20,newColor, sf::Color::Black);//nom du bouton taille couleur du bouton couleur de la police
    btn1.setPosition({100,300});
    btn1.setFont(arial);
    Button btn4("",{20, 20},20,newColor, sf::Color::Black);//nom du bouton taille couleur du bouton couleur de la police
    btn4.setPosition({150,300});
    btn4.setFont(arial);
    Text text1("taille du jersey:",arial,20,sf::Color::Black);
    text1.setPosition({100,125});
    Textbox textbox1(15,sf::Color::Black,false);
    textbox1.setFont(arial);
    textbox1.setPosition({100,150});
    Button btn2("",{200, 20},20,newColor, sf::Color::Black);//nom du bouton taille couleur du bouton couleur de la police
    btn2.setPosition({100,150});
    btn2.setFont(arial);
    Text text2("Alergies:",arial,20,sf::Color::Black);
    text2.setPosition({100,175});
    Text text3("Voulez vous de l'alcool ?",arial,20,sf::Color::Black);
    text3.setPosition({100,250});
    Text text4("Oui:",arial,20,sf::Color::Black);
    text4.setPosition({100,275});
    Text text5("Non:",arial,20,sf::Color::Black);
    text5.setPosition({150,275});
    Text text6("Voulez vous inclure votre vol",arial,20,sf::Color::Black);
    text6.setPosition({100,325});

    Textbox textbox2(15,sf::Color::Black,false);
    textbox2.setFont(arial);
    textbox2.setPosition({100,200});
    Button btn3("",{200, 20},20,newColor, sf::Color::Black);//nom du bouton taille couleur du bouton couleur de la police
    btn3.setPosition({100,200});
    btn3.setFont(arial);
    Button btn5("",{50, 50},20,newColor, sf::Color::Black);//nom du bouton taille couleur du bouton couleur de la police
    btn5.setPosition({100,375});
    btn5.setFont(arial);
    while (window.isOpen()){
        sf::Event Event;
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Return)){
            textbox1.setSelected(false);
            
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Return)){
            textbox2.setSelected(false);
            
        }
        while(window.pollEvent(Event)){
            switch(Event.type){
                case sf::Event::Closed:
                    window.close();
                case sf::Event::MouseButtonPressed: 
                    if(btn2.isMouseOver(window)){
                        textbox1.setSelected(true);
                        textbox2.setSelected(false);
                    }
                    if(btn3.isMouseOver(window)){
                        textbox1.setSelected(false);
                        textbox2.setSelected(true);
                    }
                    if(btn1.isMouseOver(window)){
                        btn1.setBackColor(sf::Color::Green);
                        btn4.setBackColor(newColor);
                    }
                    if(btn4.isMouseOver(window)){
                        btn1.setBackColor(newColor);
                        btn4.setBackColor(sf::Color::Green);
                    }
                    if(btn5.isMouseOver(window)){
                        sf::Color newColor2(165,255,127,255);
                        sf::RenderWindow window;
                        sf::Vector2i centerWindow((sf::VideoMode::getDesktopMode().width / 2)-445,(sf::VideoMode::getDesktopMode().height / 2)-480);//creer une echelle et une fenetre
                        window.create(sf::VideoMode(900,900),"SFML Project",sf::Style::Titlebar | sf::Style::Close);
                        window.setPosition(centerWindow);
                        window.setKeyRepeatEnabled(true);
    
                        sf::Texture t;  
                        t.loadFromFile("avionc-(3).png");
                        sf::Sprite s(t);    
                        s.setPosition(0,0);     
                        sf::Font arial;
    arial.loadFromFile("arial.ttf");
    Button btn1("",{20, 20},20,sf::Color::Green, sf::Color::Black);//nom du bouton taille couleur du bouton couleur de la police
    btn1.setPosition({410,325});
    btn1.setFont(arial);
    Button btn2("",{20,20},20,sf::Color::Green, sf::Color::Black);
    btn2.setPosition({450,325});
    btn2.setFont(arial);
    Button btn3("",{20,20},20,sf::Color::Green, sf::Color::Black);
    btn3.setPosition({410,375});
    btn3.setFont(arial);
    Button btn4("",{20,20},20,sf::Color::Green, sf::Color::Black);
    btn4.setPosition({450,375});
    btn4.setFont(arial);
    Button btn5("",{20, 20},20,sf::Color::Red, sf::Color::Black);
    btn5.setPosition({410,425});
    btn5.setFont(arial);
    Button btn6("",{20,20},20,sf::Color::Red, sf::Color::Black);
    btn6.setPosition({450,425});
    btn6.setFont(arial);
    Button btn7("",{20,20},20,sf::Color::Red, sf::Color::Black);
    btn7.setPosition({410,475});
    btn7.setFont(arial);
    Button btn8("",{20,20},20,sf::Color::Red, sf::Color::Black);
    btn8.setPosition({450,475});
    btn8.setFont(arial);
    Button btn9("",{20,20},20,sf::Color::Red, sf::Color::Black);
    btn9.setPosition({410,525});
    btn9.setFont(arial);
    Button btn10("",{20,20},20,sf::Color::Red, sf::Color::Black);
    btn10.setPosition({450,525});
    btn10.setFont(arial);
    Button btn11("",{20,20},20,sf::Color::Red, sf::Color::Black);
    btn11.setPosition({410,575});
    btn11.setFont(arial);
    Button btn12("",{20,20},20,sf::Color::Red, sf::Color::Black);
    btn12.setPosition({450,575});
    btn12.setFont(arial);
    Button btn13("",{20,20},20,sf::Color::Red, sf::Color::Black);
    btn13.setPosition({410,625});
    btn13.setFont(arial);
    Button btn14("",{20,20},20,sf::Color::Red, sf::Color::Black);
    btn14.setPosition({450,625});
    btn14.setFont(arial);
    Button btn15("",{20,20},20,sf::Color::Red, sf::Color::Black);
    btn15.setPosition({410,665});
    btn15.setFont(arial);
    Button btn16("",{20,20},20,sf::Color::Red, sf::Color::Black);
    btn16.setPosition({450,665});
    btn16.setFont(arial);
    while (window.isOpen()){
        sf::Event Event;
        while(window.pollEvent(Event)){
            switch(Event.type){
                case sf::Event::Closed:
                    window.close();
                
                case sf::Event::MouseButtonPressed: //souris appuyer
                    if(btn1.isMouseOver(window)){
                       
                        cout<<"You clicked 1\n";
                        window.close();
                    }
                    if(btn2.isMouseOver(window)){
                        window.close();
                        cout<<"You clicked 2\n";
                    }
                    if(btn3.isMouseOver(window)){
                        window.close();
                        cout<<"You clicked 3\n";
                    }
                    if(btn4.isMouseOver(window)){
                        window.close();
                        cout<<"You clicked 4\n";
                    }
                    if(btn5.isMouseOver(window)){
                        window.close();
                        cout<<"You clicked 5\n";
                    }
                    if(btn6.isMouseOver(window)){
                        window.close();
                        cout<<"You clicked 6\n";
                    }
                    if(btn7.isMouseOver(window)){
                        window.close();
                        cout<<"You clicked 7\n";
                    }
                    if(btn8.isMouseOver(window)){
                        window.close();
                        cout<<"You clicked 8\n";
                    }
                    if(btn9.isMouseOver(window)){
                        window.close();
                        cout<<"You clicked 9\n";
                    }
                    if(btn10.isMouseOver(window)){
                       window.close();
                        cout<<"You clicked 10\n";
                    }
                    if(btn11.isMouseOver(window)){
                        window.close();
                        cout<<"You clicked 11\n";
                    }
                    if(btn12.isMouseOver(window)){
                        window.close();
                        cout<<"You clicked 12\n";
                    }
                    if(btn13.isMouseOver(window)){
                        window.close();
                        cout<<"You clicked 12\n";
                    }
                    if(btn14.isMouseOver(window)){
                        window.close();
                        cout<<"You clicked 12\n";
                    }
                    if(btn15.isMouseOver(window)){
                        window.close();
                        cout<<"You clicked 12\n";
                    }
                    if(btn16.isMouseOver(window)){
                        window.close();
                        cout<<"You clicked 12\n";
                    }
                case sf::Event::MouseMoved: //la ou la souris est sans etre appuyer
                    if (btn1.isMouseOver(window)){
                        btn1.setBackColor(sf::Color::White);
                    }
                    else {
                        btn1.setBackColor(sf::Color::Green);
                    }
                    if (btn2.isMouseOver(window)){
                        btn2.setBackColor(sf::Color::White);
                    }
                    else {
                        btn2.setBackColor(sf::Color::Green);
                    }
                    if (btn3.isMouseOver(window)){
                        btn3.setBackColor(sf::Color::White);
                    }
                    else {
                        btn3.setBackColor(sf::Color::Green);
                    }
                    if (btn4.isMouseOver(window)){
                        btn4.setBackColor(sf::Color::White);
                    }
                    else {
                        btn4.setBackColor(sf::Color::Green);
                    }
                    if (btn5.isMouseOver(window)){
                        btn5.setBackColor(sf::Color::White);
                    }
                    else {
                        btn5.setBackColor(sf::Color::Red);
                    }
                    if (btn6.isMouseOver(window)){
                        btn6.setBackColor(sf::Color::White);
                    }
                    else {
                        btn6.setBackColor(sf::Color::Red);
                    }
                    if (btn7.isMouseOver(window)){
                        btn7.setBackColor(sf::Color::White);
                    }
                    else {
                        btn7.setBackColor(sf::Color::Red);
                    }
                    if (btn8.isMouseOver(window)){
                        btn8.setBackColor(sf::Color::White);
                    }
                    else {
                        btn8.setBackColor(sf::Color::Red);
                    }
                    if (btn9.isMouseOver(window)){
                        btn9.setBackColor(sf::Color::White);
                    }
                    else {
                        btn9.setBackColor(sf::Color::Red);
                    }
                    if (btn10.isMouseOver(window)){
                        btn10.setBackColor(sf::Color::White);
                    }
                    else {
                        btn10.setBackColor(sf::Color::Red);
                    }
                    if (btn11.isMouseOver(window)){
                        btn11.setBackColor(sf::Color::White);
                    }
                    else {
                        btn11.setBackColor(sf::Color::Red);
                    }
                    if (btn12.isMouseOver(window)){
                        btn12.setBackColor(sf::Color::White);
                    }
                    else {
                        btn12.setBackColor(sf::Color::Red);
                    }
                    if (btn13.isMouseOver(window)){
                        btn13.setBackColor(sf::Color::White);
                    }
                    else {
                        btn13.setBackColor(sf::Color::Red);
                    }
                    if (btn14.isMouseOver(window)){
                        btn14.setBackColor(sf::Color::White);
                    }
                    else {
                        btn14.setBackColor(sf::Color::Red);
                    }
                    if (btn15.isMouseOver(window)){
                        btn15.setBackColor(sf::Color::White);
                    }
                    else {
                        btn15.setBackColor(sf::Color::Red);
                    }
                    if (btn16.isMouseOver(window)){
                        btn16.setBackColor(sf::Color::White);
                    }
                    else {
                        btn16.setBackColor(sf::Color::Red);
                    }
            }
        }
        window.clear(newColor2);
        window.draw(s);
        btn1.drawTo(window); //dessiner les boutons
        btn2.drawTo(window);
        btn3.drawTo(window);
        btn4.drawTo(window);
        btn5.drawTo(window);
        btn6.drawTo(window);
        btn7.drawTo(window);
        btn8.drawTo(window);
        btn9.drawTo(window);
        btn10.drawTo(window);
        btn11.drawTo(window);
        btn12.drawTo(window);
        btn13.drawTo(window);
        btn14.drawTo(window);
        btn15.drawTo(window);
        btn16.drawTo(window);

        window.display();
    }
                    }
                // case sf::Event::MouseMoved:
                //     if (btn1.isMouseOver(window)){
                //         btn1.setBackColor(sf::Color::Green);
                //     }
                //     else {
                //         btn1.setBackColor(newColor);
                //     } 
                //     if (btn4.isMouseOver(window)){
                //         btn4.setBackColor(sf::Color::Green);
                //     }
                //     else {
                //         btn4.setBackColor(newColor);
                //     }    
                    case sf::Event::TextEntered:
                        textbox1.typedOn(Event);
                        textbox2.typedOn(Event);
            }
        }
        window.clear(sf::Color::White);
    //    window.draw(triangle);
        text1.drawTo(window);
        text2.drawTo(window);
        text3.drawTo(window);
        text4.drawTo(window);
        text5.drawTo(window);
        text6.drawTo(window);
        textbox1.drawTo(window);
        textbox2.drawTo(window);
        btn1.drawTo(window);
        btn2.drawTo(window);
        btn3.drawTo(window);
        btn4.drawTo(window);
        btn5.drawTo(window);
        window.display();
    }
                    }
                case sf::Event::MouseMoved: //la ou la souris est sans etre appuyer
                    if (btn1.isMouseOver(window)){
                        btn1.setBackColor(sf::Color::White);
                    }
                    else {
                        btn1.setBackColor(sf::Color::Green);
                    }
                    if (btn2.isMouseOver(window)){
                        btn2.setBackColor(sf::Color::White);
                    }
                    else {
                        btn2.setBackColor(sf::Color::Green);
                    }
                    if (btn3.isMouseOver(window)){
                        btn3.setBackColor(sf::Color::White);
                    }
                    else {
                        btn3.setBackColor(sf::Color::Green);
                    }
                    if (btn4.isMouseOver(window)){
                        btn4.setBackColor(sf::Color::White);
                    }
                    else {
                        btn4.setBackColor(sf::Color::Green);
                    }
                    if (btn5.isMouseOver(window)){
                        btn5.setBackColor(sf::Color::White);
                    }
                    else {
                        btn5.setBackColor(sf::Color::Red);
                    }
                    if (btn6.isMouseOver(window)){
                        btn6.setBackColor(sf::Color::White);
                    }
                    else {
                        btn6.setBackColor(sf::Color::Red);
                    }
                    if (btn7.isMouseOver(window)){
                        btn7.setBackColor(sf::Color::White);
                    }
                    else {
                        btn7.setBackColor(sf::Color::Red);
                    }
                    if (btn8.isMouseOver(window)){
                        btn8.setBackColor(sf::Color::White);
                    }
                    else {
                        btn8.setBackColor(sf::Color::Red);
                    }
                    if (btn9.isMouseOver(window)){
                        btn9.setBackColor(sf::Color::White);
                    }
                    else {
                        btn9.setBackColor(sf::Color::Magenta);
                    }
                    if (btn10.isMouseOver(window)){
                        btn10.setBackColor(sf::Color::White);
                    }
                    else {
                        btn10.setBackColor(sf::Color::Magenta);
                    }
                    if (btn11.isMouseOver(window)){
                        btn11.setBackColor(sf::Color::White);
                    }
                    else {
                        btn11.setBackColor(sf::Color::Magenta);
                    }
                    if (btn12.isMouseOver(window)){
                        btn12.setBackColor(sf::Color::White);
                    }
                    else {
                        btn12.setBackColor(sf::Color::Magenta);
                    }
            }
        }
        window.clear(newColor2);
        window.draw(s);
        btn1.drawTo(window); //dessiner les boutons
        btn2.drawTo(window);
        btn3.drawTo(window);
        btn4.drawTo(window);
        btn5.drawTo(window);
        btn6.drawTo(window);
        btn7.drawTo(window);
        btn8.drawTo(window);
        btn9.drawTo(window);
        btn10.drawTo(window);
        btn11.drawTo(window);
        btn12.drawTo(window);
        btn13.drawTo(window);


        window.display();
    }
                    }

                case sf::Event::TextEntered:
                    textbox1.typedOn(Event);
                    textbox2.typedOn(Event);
                    textbox3.typedOn(Event);
                    textbox4.typedOn(Event);
                    textbox5.typedOn(Event);
                    textbox6.typedOn(Event);
            }

        }
        window.clear(sf::Color::White);
    //    window.draw(triangle);
        text1.drawTo(window);
        text2.drawTo(window);
        text3.drawTo(window);
        text4.drawTo(window);
        text5.drawTo(window);
        text6.drawTo(window);
        textbox1.drawTo(window);
        textbox2.drawTo(window);
        textbox3.drawTo(window);
        textbox4.drawTo(window);
        textbox5.drawTo(window);
        textbox6.drawTo(window);
        btn1.drawTo(window);
        btn2.drawTo(window);
        btn3.drawTo(window);
        btn4.drawTo(window);
        btn5.drawTo(window);
        btn6.drawTo(window);
        btn7.drawTo(window);
        
        

        window.display();
    }
    Account user(textbox1.getText(),textbox2.getText(),textbox3.getText(),stoi(textbox4.getText()),textbox5.getText(),textbox6.getText());
    cout<<"le nom est"<<user.getpassword();
    cout<<"tu as chosisvip";

    
    return 0;

}