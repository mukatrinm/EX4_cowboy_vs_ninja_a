#pragma once

#include <string>

#include "Ninja.hpp"

namespace ariel {
class TrainedNinja : public Ninja {
   private:
    int speed_ = 0;

   public:
    TrainedNinja(const std::string name, const Point &position);
};
}  // namespace ariel