import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine(); // consume the newline character
        
        Set<String> wordSet = new HashSet<>();
        for (int i = 0; i < n; i++) {
            wordSet.add(sc.nextLine());
        }
        
        List<String> words = new ArrayList<>(wordSet);
        Collections.sort(words, new Comparator<String>() {
            @Override
            public int compare(String o1, String o2) {
                if (o1.length() != o2.length()) {
                    return o1.length() - o2.length();
                } else {
                    return o1.compareTo(o2);
                }
            }
        });
        
        for (String word : words) {
            System.out.println(word);
        }
    }
}
