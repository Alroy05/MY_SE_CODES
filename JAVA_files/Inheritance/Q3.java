import java.util.*;

abstract class Vehicle
{
    abstract void drive();
}

class Car extends Vehicle
{
    void drive()
    {
        System.out.println("The car is running at 140kmph");
    }
}

class Bus extends Vehicle
{
    void drive()
    {
        System.out.println("The bus is running at 60kmph");
    }
}

class Q3
{
    public static void main(String[] args) {
        Bus b1 = new Bus();
        Car c1 = new Car();

        c1.drive();
        b1.drive();
    }
}