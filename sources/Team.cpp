#include "Team.hpp"

using namespace ariel;

Team::Team(Character* leader) {
    characters_.push_back(leader);
}

Team::~Team() {
    // TODO
}

void Team::add(Character* character) {
    if (characters_.size() < 10) {
        characters_.push_back(character);
    }
}

void Team::attack(Team* enemy) {
}

int Team::stillAlive() const {
    int cnt = 0;
    for (Character* character : characters_) {
        if (character->isAlive()) {
            cnt++;
        }
    }

    return cnt;
}

void Team::print() const {
    for (Character* character : characters_) {
        character->print();
    }
}