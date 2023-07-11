package linkedlist;

public class DoubleNodeUse {

	public static void main(String[] args) {
		DoubleNode<Integer> n1 = new DoubleNode<Integer>(10);
		DoubleNode<Integer> head = new DoubleNode<Integer>(20);
		DoubleNode<Integer> n2 = new DoubleNode<Integer>(30);
		head.next = n2;
		head.prev = n1;
		System.out.println("head.prev = " + head.prev.data);
		System.out.println("head.data = " + head.data);
		System.out.println("head.next = " + head.next.data);
	}

}
