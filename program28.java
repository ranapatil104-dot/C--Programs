import java.util.Scanner;

class program28
{
    public static void main(String A[])
    {
        Scanner scanner = null;
        String sName =null;
        int iAge=0;
        float fMarks=0.0f;  

        scanner =new Scanner(System.in);

        System.out.println("Enter youur name:");
        sName = scanner.next();

        System.out.println("Enter Your Age:");
        iAge=scanner.nextInt();

        System.out.println("Enter your Marks");
        fMarks=scanner.nextFloat();

        System.out.println("Welcome "+sName);
        System.out.println("Your Ageis:"+Age);
        System.out.println("Your Marks:"+fMarks);
    }
}