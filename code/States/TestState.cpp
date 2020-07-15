#include "States/TestState.hpp"

#include "Game.hpp"

#include <TGUI/TGUI.hpp>

TestState::TestState(Game& game) 
    : State(game)
{
	auto thisGroup = tgui::Group::create();
	m_gui.add(thisGroup);

	auto text = tgui::Label::create();
	text->setText("This is a Test State. code/States/TestState/cpp");
	text->setPosition("(&.size - size) / 2");
	text->setTextSize(12u);
	thisGroup->add(text);
}

void TestState::draw(sf::RenderTarget& renderTarget) {}

void TestState::update(sf::Time elapsed) {}

void TestState::fixedUpdate(sf::Time elapsed) {}

void TestState::onOpen() {}

void TestState::handleEvent(sf::Event event) {}

void TestState::handleInput() {}

TestState::~TestState()
{
	m_gui.remove(thisGroup);
}
