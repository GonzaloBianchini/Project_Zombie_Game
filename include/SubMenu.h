#ifndef SUBMENU_H
#define SUBMENU_H
#define SFML_NO_DEPRECATED_WARNINGS
#include <SFML/Graphics.hpp>

#define Item 5


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

protected:

private:
    int _seleccionItem;
    sf::Font _fontItem;
    sf::Text _subMenu[Item];
    sf::Sprite _spriteSubMenu;
    sf::Texture _textureSubMenu;
};


#endif // SUBMENU_H
