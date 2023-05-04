#pragma once

#include "Ninja.hpp"

namespace ariel {
class YoungNinja : public Ninja {
   private:
    int speed_ = 0;

   public:
    YoungNinja(const std::string name, const Point &position);
};
}