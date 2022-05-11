import java.util.Scanner;

public class Solution
{
    public static void main(String[] args)
    {
        try (Scanner in = new Scanner(System.in))
        {
            int T = in.nextInt();
            for (int t = 1; t <= T; t++)
            {
                String s = in.next();
                System.out.println("Case #" + t + ": " + getNum(s));
            }
        }
    }

    private static String getNum(String s)
    {
        long sum = 0L;
        for (char ch : s.toCharArray())
        {
            sum += ch - '0';
        }
        int rem = (int)(sum % 9);
        int toAdd = rem == 0 ? 0 : (9 - rem);
        if (toAdd == 0)
        {
            return (s.charAt(0) - '0') + "0" + s.substring(1);
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (s.charAt(i) - '0' <= toAdd)
            {
                continue;
            }
            return s.substring(0, i) + toAdd + s.substring(i);
        }
        return s + toAdd;
    }
}
