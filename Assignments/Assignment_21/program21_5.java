import java.util.Scanner;

class program21_5{

    void Pattern(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print(i + "\t");
            }
            System.out.println();
            System.out.println();
        }
    }


    public static void main(String [] args)
    {
        int iValue1 = 0;
        int iValue2 = 0;
        Scanner sc  = new Scanner(System.in);

        System.out.println("Enter the number of rows: ");
        iValue1 = sc.nextInt();

        System.out.println("Enter teh number of Columns: ");
        iValue2 = sc.nextInt();

        program21_5 obj = new program21_5();

        obj.Pattern(iValue1 , iValue2);


    }
}