import java.util.stream.*;

/**
 * FizzBuzz using Java Streams.
 */
public class Main
{
   public static void main(String[] args) 
   {
       IntStream.rangeClosed(1, 100)
           .mapToObj(i -> 
           {
               if (i % 3 == 0 && i % 5 == 0)
                   return "Spider";
               else if (i % 3 == 0)
                   return "Rat";
               else if (i % 5 == 0)
                   return "Ghost";
               else
                   return i + "";
           })
           .forEach(System.out::println);
   }
}