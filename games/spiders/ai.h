// This is where you build your AI for the Spiders game.

#ifndef JOUEUR_SPIDERS_AI_H
#define JOUEUR_SPIDERS_AI_H

#include "spiders.h"
#include "game.h"
#include "broodMother.h"
#include "cutter.h"
#include "gameObject.h"
#include "nest.h"
#include "player.h"
#include "spider.h"
#include "spiderling.h"
#include "spitter.h"
#include "weaver.h"
#include "web.h"

#include "../../joueur/baseAI.h"

/// <summary>
/// This the header file for where you build your AI for the Spiders game.
/// </summary>
class Spiders::AI : public Joueur::BaseAI
{
    public:
        /// <summary>
        /// This is a pointer to the Game object itself, it contains all the information about the current game
        /// </summary>
        Spiders::Game* game;

        /// <summary>
        /// This is a pointer to your AI's player. This AI class is not a player, but it should command this Player.
        /// </summary>
        Spiders::Player* player;

        // <<-- Creer-Merge: fields -->> - Code you add between this comment and the end comment will be preserved between Creer re-runs.
        // you can add additional fields here for your AI to use
        // <<-- /Creer-Merge: fields -->>


        /// <summary>
        /// This returns your AI's name to the game server. Just replace the string.
        /// </summary>
        /// <returns>string of you AI's name.</returns>
        std::string getName();

        /// <summary>
        /// This is automatically called when the game first starts, once the Game object and all GameObjects have been initialized, but before any players do anything.
        /// </summary>
        void start();

        /// <summary>
        /// This is automatically called every time the game (or anything in it) updates.
        /// </summary>
        void gameUpdated();

        /// <summary>
        /// This is automatically called when the game ends.
        /// </summary>
        /// <param name="won">true if your player won, false otherwise</param>
        /// <param name="reason">a string explaining why you won or lost</param>
        void ended(bool won, std::string reason);


        /// <summary>
        /// This is called every time it is this AI.player's turn.
        /// </summary>
        /// <returns>Represents if you want to end your turn. True means end your turn, False means to keep your turn going and re-call this function.</returns>
        bool runTurn();
};

#endif
