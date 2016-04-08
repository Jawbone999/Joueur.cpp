// Generated by Creer at 11:41PM on April 07, 2016 UTC, git hash: 'e7ec4e35c89d7556b9e07d4331ac34052ac011bd'
// This is a class that manages the Spiders Game and it's GameObjects. Competitors should never have to care about this class's existance.

#ifndef JOUEUR_SPIDERS_GAMEMANAGER_H
#define JOUEUR_SPIDERS_GAMEMANAGER_H

#include "spiders.h"
#include "../../joueur/baseGameManager.h"

/// <summary>
/// This is a class that manages the Spiders Game and it's GameObjects. Competitors should never have to care about this class's existance.
/// </summary>
class Spiders::GameManager : public Joueur::BaseGameManager
{
    private:
        Spiders::AI* spidersAI;
        Spiders::Game* spidersGame;

        Joueur::BaseGameObject* createGameObject(const std::string& gameObjectName);

    public:
        GameManager();

        void setupAI(const std::string& playerID);
        boost::property_tree::ptree* orderAI(const std::string& order, boost::property_tree::ptree* args);
};

#include "registry.h"

#endif