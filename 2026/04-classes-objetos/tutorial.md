# Declaração (interface) vs Implementação

## Implementação dentro da Classe

```cpp
class Point {
private:
    int x;
    int y;
 
public:
    Point(int x, int y) : x(x), y(y) {}
 
    int getX() { return x; }
    int getY() { return y; }
 
    void setCoords(int x_, int y_) {
        x = x_;
        y = y_;
    }
};
```

## Classe separada da Implementação

```cpp
// interface
class Point {
private:
    int x;
    int y;
 
public:
    Point(int x, int y);
    int getX();
    int getY();
    void setCoords(int x_, int y_);
};
 
// implementação
Point::Point(int x, int y) : x(x), y(y) {}
 
int Point::getX() { return x; }
int Point::getY() { return y; }
```