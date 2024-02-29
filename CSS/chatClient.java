import java.net.*;

public class chatClient {

  public static void main(String[] args) {
    try {
      Socket s = new Socket("localhost", 6666);
      System.out.println("Connected to the server.");
      KeyExchange.performClientKeyExchange(s);
    } catch (Exception e) {
      System.out.println(e);
    }
  }
}