package random;

import java.util.Timer;
import java.util.TimerTask;

public class MyTimerTask extends TimerTask {
    public void run() {
        // Implement the logic to be executed
        System.out.println("Timer task is running");
    }

    public static void main(String[] args) {
        TimerTask timerTask = new MyTimerTask();
        Timer timer = new Timer();
        timer.schedule(timerTask, 0, 1000); // Schedule the task to run every second

        // Wait for 5000 milliseconds (5 seconds)
        try {
            Thread.sleep(5000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        timer.cancel(); // Cancel the timer task

        System.out.println("Timer task canceled");
    }
}

