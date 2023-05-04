#pragma once

#include <string>

#include "Ninja.hpp"

namespace ariel {
class OldNinja : public Ninja {
   private:
    int speed_ = 0;

   public:
    OldNinja(const std::string name, const Point &position);
};
}  // namespace ariel
