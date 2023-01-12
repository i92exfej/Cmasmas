#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

class HelloWorld : public sf::Drawable, public sf::Transformable
{
public:
    HelloWorld()
    {
        // Cargar la fuente
        if (!m_font.loadFromFile("arial.ttf"))
        {
            std::cerr << "Error cargando la fuente" << std::endl;
        }

        // Inicializar el texto
        m_text.setFont(m_font);
        m_text.setString("Hola mundo!");
        m_text.setCharacterSize(24);
        m_text.setFillColor(sf::Color::White);
    }

    void setMessage(const std::string &message)
    {
        m_text.setString(message);
    }

private:
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const
    {
        // Aplicar la transformación actual
        states.transform *= getTransform();

        // Dibujar el texto
        target.draw(m_text, states);
    }

private:
    sf::Font m_font;
    sf::Text m_text;
};

int main()
{
    // Crear una ventana
    sf::RenderWindow window(sf::VideoMode(800, 600), "Hola mundo!");

    // Crear el objeto de texto
    HelloWorld hello;
    hello.setPosition(400, 300);

    // Bucle principal
    while (window.isOpen())
    {
        // Procesar eventos
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Actualizar el juego

        // Dibujar la escena
        window.clear();
        window.draw(hello);
        window.display();
    }

    return 0;
}
