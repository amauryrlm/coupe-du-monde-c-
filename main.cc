//telecharger sfml
//pour compiler g++ -c main.cc puis g++ main.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system puis ./sfml-app
#include <SFML/Graphics.hpp>
#include <iostream>
#include "buttontri.hh"
#include "button.hh"
using namespace std;

int main(){
    sf::RenderWindow window;
    sf::Vector2i centerWindow((sf::VideoMode::getDesktopMode().width / 2)-445,(sf::VideoMode::getDesktopMode().height / 2)-480);//creer une echelle et une fenetre
    window.create(sf::VideoMode(900,900),"SFML Project",sf::Style::Titlebar | sf::Style::Close);
    window.setPosition(centerWindow);
    window.setKeyRepeatEnabled(true);
    sf::Font arial;
    arial.loadFromFile("arial.ttf");
    Button btn1("Boutton 1",{200, 50},20,sf::Color::Green, sf::Color::Black);//nom du bouton taille couleur du bouton couleur de la police
    btn1.setPosition({400,400});
    btn1.setFont(arial);
    Button btn2("Boutton 2",{50,200},20,sf::Color::Green, sf::Color::Black);
    btn2.setPosition({600,200});
    btn2.setFont(arial);
    Button btn3("Boutton 3",{200,50},20,sf::Color::Green, sf::Color::Black);
    btn3.setPosition({400,150});
    btn3.setFont(arial);
    Button btn4("Boutton 4",{50,200},20,sf::Color::Green, sf::Color::Black);
    btn4.setPosition({350,200});
    btn4.setFont(arial);
    Button btn5("Boutton 5",{200, 50},20,sf::Color::Red, sf::Color::Black);
    btn5.setPosition({400,450});
    btn5.setFont(arial);
    Button btn6("Boutton 6",{50,200},20,sf::Color::Red, sf::Color::Black);
    btn6.setPosition({650,200});
    btn6.setFont(arial);
    Button btn7("Boutton 7",{200,50},20,sf::Color::Red, sf::Color::Black);
    btn7.setPosition({400,100});
    btn7.setFont(arial);
    Button btn8("Boutton 8",{50,200},20,sf::Color::Red, sf::Color::Black);
    btn8.setPosition({300,200});
    btn8.setFont(arial);
    Buttontri btn9("Boutton 9",{100,100},{0,100},{100,0},20,sf::Color::Magenta, sf::Color::Black);
    btn9.setPosition({300,100});
    btn9.setFont(arial);
    Buttontri btn10("Boutton 10",{0,0},{0,100},{100,0},20,sf::Color::Magenta, sf::Color::Black);
    btn10.setPosition({600,400});
    btn10.setFont(arial);
    Buttontri btn11("Boutton 11",{0,0},{100,0},{100,100},20,sf::Color::Magenta, sf::Color::Black);
    btn11.setPosition({300,400});
    btn11.setFont(arial);
    Buttontri btn12("Boutton 12",{0,0},{0,100},{100,100},20,sf::Color::Magenta, sf::Color::Black);
    btn12.setPosition({600,100});
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
        window.clear();
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
    return 0;

}