package random;

import java.util.Timer;
import java.util.TimerTask;

public class CountdownTimer {
    private int seconds;
    private Timer timer;

    public CountdownTimer(int seconds) {
        this.seconds = seconds;
    }

    public void start() {
        timer = new Timer();
        timer.scheduleAtFixedRate(new TimerTask() {
            public void run() {
                if (seconds <= 0) {
                    timer.cancel();
                    System.out.println("Countdown complete!");
                } else {
                    int hours = seconds / 3600;
                    int minutes = (seconds % 3600) / 60;
                    int remainingSeconds = (seconds % 3600) % 60;

                    System.out.format("%02d:%02d:%02d%n", hours, minutes, remainingSeconds);
                    seconds--;
                }
            }
        }, 0, 1000); // Delay of 0ms, execute every 1000ms (1 second)
    }

    public static void main(String[] args) {
        CountdownTimer countdown = new CountdownTimer(24 * 60 * 60); // 24 hours in seconds
        countdown.start();
    }
}
