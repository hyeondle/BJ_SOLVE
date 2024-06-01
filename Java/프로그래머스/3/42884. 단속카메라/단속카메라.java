import java.util.Arrays;

class Solution {
    public int solution(int[][] routes) {
        int answer = 0;
        // int camera = Integer.MIN_VALUE;
        int camera = -30001;

        for (int i = 0; i < routes.length - 1; i++) {
            for (int j = 0; j < routes.length - 1 - i; j++) {
                if (routes[j][1] > routes[j + 1][1]) {
                    int[] temp = routes[j];
                    routes[j] = routes[j + 1];
                    routes[j + 1] = temp;
                }
            }
        }

        for (int[] route : routes) {
            if (camera < route[0]) {
                camera = route[1];
                answer++;
            }
        }

        return answer;
    }
}