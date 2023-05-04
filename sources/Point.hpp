#pragma once

namespace ariel {
class Point {
   private:
    double x_, y_;

   public:
    Point(double x, double y);
    double distance(const Point &point) const;
    void print() const;
    double moveTowards(Point &point1, Point &point2, double distance) const;
};
}  // namespace ariel
