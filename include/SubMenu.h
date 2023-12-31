#ifndef SUBMENU_H
#define SUBMENU_H
#define SFML_NO_DEPRECATED_WARNINGS
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include<iostream>
#include "Audio.h"
#include "Funciones.h"
#include "MENU_PRINCIPAL.h"
#include "Seleccion_de_zombie.h"

#define Item_sub_menu 4



class SubMenu : public sf::Drawable
{
public:
    SubMenu(float width, float height);
    virtual ~SubMenu();

    void draw(sf::RenderTarget& target, sf::RenderStates states)const override;
    void up();
    void down();
    int GetPressedItem()
    {
        return _seleccionItem;
    }
    void Opciones();
   // Audio Sound_3b;

protected:

private:
    int _seleccionItem;
    sf::Font _fontItem;
    sf::Text _subMenu[Item_sub_menu];
    sf::Sprite _spriteSubMenu;
    sf::Texture _textureSubMenu;



};


#endif // SUBMENU_H
