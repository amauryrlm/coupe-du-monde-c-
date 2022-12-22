#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>
#include "textbox.hh"
#include "button.hh"
#include "buttontri.hh"
#include "Text.hh"
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
    
    Text text1("Nom:",arial,20,sf::Color::Black);
    text1.setPosition({100,75});
    Text text2("Prenom:",arial,20,sf::Color::Black);
    text2.setPosition({100,125});
    Textbox textbox1(15,sf::Color::Black,false);
    textbox1.setFont(arial);
    textbox1.setPosition({100,100});
    Textbox textbox2(15,sf::Color::Black,false);
    textbox2.setFont(arial);
    textbox2.setPosition({100,150});
    Button btn1("",{200, 20},20,newColor, sf::Color::Black);//nom du bouton taille couleur du bouton couleur de la police
    btn1.setPosition({100,100});
    btn1.setFont(arial);
    Button btn2("",{200, 20},20,newColor, sf::Color::Black);//nom du bouton taille couleur du bouton couleur de la police
    btn2.setPosition({100,150});
    btn2.setFont(arial);
    Button btn3("Suivant",{200, 60},20,newColor, sf::Color::Black);//nom du bouton taille couleur du bouton couleur de la police
    btn3.setPosition({300,700});
    btn3.setFont(arial);
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
        
        while(window.pollEvent(Event)){
            switch(Event.type){
                case sf::Event::Closed:
                    window.close();
                case sf::Event::MouseButtonPressed: //souris appuyer
                    if(btn1.isMouseOver(window)){
                        textbox1.setSelected(true);
                        textbox2.setSelected(false);
                        cout<<"You clicked 1\n";
                    }
                    if(btn2.isMouseOver(window)){
                        textbox2.setSelected(true);
                        textbox1.setSelected(false);
                        cout<<"You clicked 2\n";
                    }
                    if(btn3.isMouseOver(window)){
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
    Button btn1("Boutton 1",{285, 50},20,sf::Color::Green, sf::Color::Black);//nom du bouton taille couleur du bouton couleur de la police
    btn1.setPosition({335,466});
    btn1.setFont(arial);
    Button btn2("Boutton 2",{50,193},20,sf::Color::Green, sf::Color::Black);
    btn2.setPosition({620,273});
    btn2.setFont(arial);
    Button btn3("Boutton 3",{285,50},20,sf::Color::Green, sf::Color::Black);
    btn3.setPosition({335,223});
    btn3.setFont(arial);
    Button btn4("Boutton 4",{50,193},20,sf::Color::Green, sf::Color::Black);
    btn4.setPosition({287,273});
    btn4.setFont(arial);
    Button btn5("Boutton 5",{285, 50},20,sf::Color::Red, sf::Color::Black);
    btn5.setPosition({335,516});
    btn5.setFont(arial);
    Button btn6("Boutton 6",{50,193},20,sf::Color::Red, sf::Color::Black);
    btn6.setPosition({670,273});
    btn6.setFont(arial);
    Button btn7("Boutton 7",{285,50},20,sf::Color::Red, sf::Color::Black);
    btn7.setPosition({335,173});
    btn7.setFont(arial);
    Button btn8("Boutton 8",{50,193},20,sf::Color::Red, sf::Color::Black);
    btn8.setPosition({237,273});
    btn8.setFont(arial);
    Buttontri btn9("Boutton 9",{100,100},{0,100},{100,0},20,sf::Color::Magenta, sf::Color::Black);
    btn9.setPosition({237,173});
    btn9.setFont(arial);
    Buttontri btn10("Boutton 10",{0,0},{0,100},{100,0},20,sf::Color::Magenta, sf::Color::Black);
    btn10.setPosition({620,466});
    btn10.setFont(arial);
    Buttontri btn11("Boutton 11",{0,0},{100,0},{100,100},20,sf::Color::Magenta, sf::Color::Black);
    btn11.setPosition({236,466});
    btn11.setFont(arial);
    Buttontri btn12("Boutton 12",{0,0},{0,100},{100,100},20,sf::Color::Magenta, sf::Color::Black);
    btn12.setPosition({620,173});
    btn12.setFont(arial);
    while (window.isOpen()){
        sf::Event Event;
        while(window.pollEvent(Event)){
            switch(Event.type){
                case sf::Event::Closed:
                    window.close();
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
                case sf::Event::MouseButtonPressed: //souris appuyer
                    if(btn1.isMouseOver(window)){
                        cout<<"You clicked 1\n";
                    }
                    if(btn2.isMouseOver(window)){
                        cout<<"You clicked 2\n";
                    }
                    if(btn3.isMouseOver(window)){
                        cout<<"You clicked 3\n";
                    }
                    if(btn4.isMouseOver(window)){
                        cout<<"You clicked 4\n";
                    }
                    if(btn5.isMouseOver(window)){
                        cout<<"You clicked 5\n";
                    }
                    if(btn6.isMouseOver(window)){
                        cout<<"You clicked 6\n";
                    }
                    if(btn7.isMouseOver(window)){
                        cout<<"You clicked 7\n";
                    }
                    if(btn8.isMouseOver(window)){
                        cout<<"You clicked 8\n";
                    }
                    if(btn9.isMouseOver(window)){
                        cout<<"You clicked 9\n";
                    }
                    if(btn10.isMouseOver(window)){
                        cout<<"You clicked 10\n";
                    }
                    if(btn11.isMouseOver(window)){
                        cout<<"You clicked 11\n";
                    }
                    if(btn12.isMouseOver(window)){
                        cout<<"You clicked 12\n";
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


        window.display();
    }
                    }

                case sf::Event::TextEntered:
                    textbox1.typedOn(Event);
                    textbox2.typedOn(Event);
                
            }

        }
        window.clear(sf::Color::White);
    //    window.draw(triangle);
        text1.drawTo(window);
        text2.drawTo(window);
        textbox1.drawTo(window);
        textbox2.drawTo(window);
        btn1.drawTo(window);
        btn2.drawTo(window);
        btn3.drawTo(window);
        


        window.display();
    }
    cout<<textbox1.getText();
    
    return 0;

}