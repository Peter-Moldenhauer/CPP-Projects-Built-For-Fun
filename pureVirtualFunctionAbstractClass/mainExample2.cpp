/*****************************************************************************************************
** Name: Peter Moldenhauer
** Date: 10/26/16
** Description: This program demonstrates abstract base classes and pure virtual functions.
** An abstract class is a class that contains at least one pure virtual function
******************************************************************************************************/

#include <iostream>
using namespace std;

class Shape {
    protected:
        int posX, posY;
    public:
        virtual void draw() const = 0;
        void setPosition(int pX, int pY){
            posX = pX;
            posY = pY;
        }
};

class Rectangle : public Shape {
    public:
        virtual void draw() const {
            cout << "Drawing rectangle at " << posX << " " << posY << endl;
        }
};

class Hexagon : public Shape {
    public:
        virtual void draw() const {
            cout << "Drawing hexagon at " << posX << " " << posY << endl;
        }
};

int main(){

    // create array of pointers to Shapes of various types
    const int NUM_SHAPES = 3;
    Shape *shapeArray[] = { new Hexagon(), new Rectangle(), new Hexagon()};

    // set positions of all the shapes
    int posX = 5, posY = 15;
    for (int k = 0; k < NUM_SHAPES; k++){
        shapeArray[k]->setPosition(posX, posY);
        posX += 10;
        posY += 10;
    }

    // draw all the shapes at their positions
    for (int j = 0; j < NUM_SHAPES; j++){
        shapeArray[j]->draw();
    }

    return 0;
}
