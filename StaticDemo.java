
class StaticDemo
{
     public static void main(String Arg[])
     {
        System.out.println("Inside main");
        System.out.println("Value of static No3 :"+Demo.No3);
        System.out.println("Value of static No4 :"+Demo.No4);
        Demo.gun();

        Demo obj1 = new Demo();
        Demo obj2 = new Demo();

        obj1.Fun();
     }
}

class Demo
{
    public int No1;                //non static charactristics
    public int No2;               //non static charactristics
    public static int No3;       //static charactristics 
    public static int No4;       //static charactristics

    static                       //static block
    {
        System.out.println("Inside static block");

       No3 = 51;
       No4 = 101;
    }
    public Demo()                        //Constructor
    {
        System.out.println("Inside constructor");
        No1 = 11;
        No2 =21;

    }
    public void Fun()                 //non static method
    {
        System.out.println("Inside non static method fun");
        System.out.println("Value of No1 :"+this.No1);
        System.out.println("Value of No2 :"+this.No2);
        System.out.println("Value of No3 :"+this.No3);
        System.out.println("Value of No4 :"+this.No4);
    }
    public static void gun()         //static method
    {
       System.out.println("Inside static method gun");
       System.out.println("Value of No1 :"+this.No1);
        System.out.println("Value of No2 :"+this.No2);
        System.out.println("Value of No3 :"+this.No3);
        System.out.println("Value of No4 :"+this.No4);
    }
}