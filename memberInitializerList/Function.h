#ifndef FUNCTION_H
#define FUNCTION_H

class Function
{
    public:
        Function(int a, int b);
        void printToScreen();

    protected:
    private:
        int regVar;          //regular variable
        const int constVar;  //constant variable
};

#endif // FUNCTION_H
