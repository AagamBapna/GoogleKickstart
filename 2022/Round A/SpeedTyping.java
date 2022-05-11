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
                String tar = in.next();
                String s = in.next();
                Integer count = getCount(s, tar);
                System.out.println("Case #" + t + ": " + (count == null ? "IMPOSSIBLE" : count));
            }
        }
    }

    private static Integer getCount(String s, String tar)
    {
        int count = 0;
        int idx1 = 0;
        int idx2 = 0;
        while (idx1 < tar.length())
        {
            char ch = tar.charAt(idx1);
            while (idx2 < s.length() && s.charAt(idx2) != ch)
            {
                idx2++;
                count++;
            }
            if (idx2 == s.length())
            {
                return null;
            }
            idx1++;
            idx2++;
        }
        return count + s.length() - idx2;
    }
}
