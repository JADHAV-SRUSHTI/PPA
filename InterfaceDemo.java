class InterfaceDemo
{
    public static void main(String Arr[])
    {
        System.out.println("Value of PI is:"+Circle.PI);
      // Circle.PI=7.12f;
    }
}

interface Circle
{
     float PI = 3.14f;

     float Area(float Radius);
     float circumference(float Radius);
}

class Marvellous implements Circle
{
     public  float Area(float Radius)
     {
          return PI * Radius * Radius;
     }
     public float circumference(float Radius)
     {
          return 2 * PI * Radius;
     }

}
