package random;

import java.util.Timer;
import java.util.TimerTask;

public class CountDown extends TimerTask {
	
	public void run() {
		System.out.println("Timer task is running ");
	}

	public static void main(String[] args) {
		TimerTask task = new CountDown();
		Timer t = new Timer();
		t.schedule(task, 1000);
		
		try {
            Thread.sleep(5000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
		
//		t.cancel();	
	}

}
