public class count_deleting_consecutives_hackerrank
{
    public static int alternatingCharacters(String s) {
        // Write your code here
        if(s.length() <= 1)
            return 0;
        char[] ch = s.toCharArray();
        int n = ch.length;

        int deletion_count = 0;
        for(int i=1 ; i<n ;i++){
            if(ch[i] == ch[i-1])
                deletion_count ++;
            continue;
        }
        return deletion_count;
    }

    public static void main(String[] args) {
        System.out.println(alternatingCharacters("AABABAABBB"));
    }
}
