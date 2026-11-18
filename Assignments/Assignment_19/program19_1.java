import java.util.Scanner;

class program19_1
{

    void pattern(int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(i >= j)
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

        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter the rows: ");
        iValue1 = sc.nextInt();

        System.out.println("Enter the rows: ");
        iValue2 = sc.nextInt();

        program19_1 obj = new program19_1();

        obj.pattern(iValue1,iValue2);


    }
}