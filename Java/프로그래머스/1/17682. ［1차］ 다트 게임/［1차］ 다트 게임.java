import java.util.regex.*;
import java.util.*;

public class Solution {
    public int solution(String dartResult) {
        Pattern pattern = Pattern.compile("([0-9]{1,2})([SDT])([*#]?)");
        Matcher matcher = pattern.matcher(dartResult);
        
        int[] scores = new int[3];
        int index = 0;

        while (matcher.find()) {
            int score = Integer.parseInt(matcher.group(1));
            String bonus = matcher.group(2);
            String option = matcher.group(3);

            
            switch (bonus) {
                case "S":
                    break;
                case "D":
                    score = (int) Math.pow(score, 2);
                    break;
                case "T":
                    score = (int) Math.pow(score, 3);
                    break;
            }

            
            if (option.equals("*")) {
                score *= 2;
                if (index > 0) {
                    scores[index - 1] *= 2;
                }
            } else if (option.equals("#")) {
                score *= -1;
            }

            
            scores[index++] = score;
        }

        int total_score = 0;
        for (int score : scores) {
            total_score += score;
        }

        return total_score;
    }
}