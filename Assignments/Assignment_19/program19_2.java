import java.util.Scanner;

class program19_2
{

    void pattern(int iRow, int iCol)
    {
        

        for(int i = 1; i <= iRow; i++)
        {
            for(int j = 1; j <= iCol; j++)
            {
                if(i + j < 6)
                {
                    System.out.print("*\t");
                }
            }

            System.out.println();
            System.out.println();
        }
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int iValue1, iValue2;

        System.out.println("Enter the rows: ");
        iValue1 = sc.nextInt();

        System.out.println("Enter the rows: ");
        iValue2 = sc.nextInt();

        program19_2 obj = new program19_2();

        obj.pattern(iValue1,iValue2);

        sc.close();


    }
}