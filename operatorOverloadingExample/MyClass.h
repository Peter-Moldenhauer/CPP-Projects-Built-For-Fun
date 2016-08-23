#ifndef MYCLASS_H
#define MYCLASS_H


class MyClass
{
    public:  //To make things easier for this example, just make everything public
        int num;
        MyClass();  //This first constructor is just an empty constructor, for when we dont pass any arguments to it, it will just create a blank object
        MyClass(int x);  //Create another constructor, this one allows for an integer to be passed to it
        //In order to use operator overloading (below) you need to make a function and you need to give it a special name
        //All functions need a return type, for this operator overloading function you need to use the MyClass return type (because we will be returning a new MyClass object)
        //Next, whenever you use an overloaded operator, you need to give it the name "operator"
        //Then, right after it, you need to type what operator you want to overload (in this example it is the + operator)
        //What this function will do is take two of the num variables (each of different objects) and add them together
        //So, operator+ is the name of the function now
        //This function will also take a parameter, it will take one MyClass objects' num and add another MyClass objects' num to it, so another MyClass object needs to be passed into the function to be added
        MyClass operator+(MyClass anotherMyClassObj);
};

#endif // MYCLASS_H
