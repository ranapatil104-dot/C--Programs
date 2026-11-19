import java.util.Scanner;
class program66
{
    
    public static void main(String A[])
    {
       Scanner scanner = new Scanner(System.in);
       int ivalue=0; 
       Iteration iteration=new Iteration();

       System.out.println("Enter the frequency");
       ivalue=scanner.nextInt();
       
       iteration.Display(ivalue);
    }
}

class Iteration
{
    public void Display(int iNo)
    {
       int icnt = 0;

       icnt=1;

       while(icnt <= iNo)
       {
        System.out.println("------------ ");
        System.out.println(icnt + " Jay ganesh...");
        System.out.println("------------ ");
        icnt++;
       }
    }
} 